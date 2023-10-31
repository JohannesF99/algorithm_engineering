#include <iostream>
#include <omp.h>
#include <random>

using namespace std;

double rnd (unsigned int *seed) {
  *seed = (1140671485 * (*seed) + 12820163) % (1 << 24);
  return (( double)(*seed)) / (1 << 24);
}

int main() {
  unsigned int seeds[4] = {0, 1, 2, 3};

  int n = 100000000; // number of points to generate
  int counter = 0; // counter for points lying in the first quadrant of a unit circle
  auto start_time = omp_get_wtime(); // omp_get_wtime() is an OpenMP library routine

  int threads = 4;  // number of threads

#pragma omp parallel for reduction(+:counter) num_threads(threads)
  for (int i = 0; i < n; ++i) {
    auto x = rnd (& seeds[omp_get_thread_num()]); // generate random number between 0.0 and 1.0
    auto y = rnd (& seeds[omp_get_thread_num()]); // generate random number between 0.0 and 1.0
    if (x * x + y * y <= 1.0) { // if the point lies in the first quadrant of a unit circle
      counter = counter + 1;
    }
  }

  auto run_time = omp_get_wtime() - start_time;
  auto pi = 4 * (double(counter) / n);

  cout << "Threads: " << threads << endl;
  cout << "n: " << n << endl; 
  cout << "pi: " << pi << endl;
  cout << "run_time: " << run_time << " s" << endl;
}