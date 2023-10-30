#include <iostream>
#include <omp.h>
#include <random>

using namespace std;

int main() {
  unsigned int seed = 10;
  uniform_real_distribution<double> zero_to_one{0.0, 1.0};

  int n = 100000000; // number of points to generate
  int counter = 0; // counter for points lying in the first quadrant of a unit circle
  auto start_time = omp_get_wtime(); // omp_get_wtime() is an OpenMP library routine

  int threads = 4;  // number of threads
  int part = static_cast<int>(n / threads); // number of points to generate for every thread

  #pragma omp parallel num_threads(threads)
  {
    default_random_engine re{seed + omp_get_thread_num()};
    int part_counter = 0; // thread counter
    // compute n points and test if they lie within the first quadrant of a unit circle
    for (int i = 0; i < part; ++i) {
      auto x = zero_to_one(re); // generate random number between 0.0 and 1.0
      auto y = zero_to_one(re); // generate random number between 0.0 and 1.0
      if (x * x + y * y <= 1.0) { // if the point lies in the first quadrant of a unit circle
        ++part_counter;
      }
    }
    #pragma omp atomic
      counter += part_counter; // add all thread counters together
  }

  auto run_time = omp_get_wtime() - start_time;
  auto pi = 4 * (double(counter) / n);

  cout << "Threads: " << threads << endl;
  cout << "n: " << n << endl; 
  cout << "n per Thread: " << part << endl;
  cout << "pi: " << pi << endl;
  cout << "run_time: " << run_time << " s" << endl;
}