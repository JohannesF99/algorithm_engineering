# Topic

Take the parallelized version of the pi-monte-carlo algorithm and modify it based on the insights from Example 3.5 using _random shooting_, particularly the random number generation method. Report the changes you do and their impact on performance.

## Changes

- Changed the random number generation algorithm from the standard library to the one used in Example 3.5

- Used the OpenMP _for_ construct
    - _for_-loop now iterates over n; not just over a fraction of n

- Used the OpenMP _reduction_ construct
    - removed _atomic_ section and unnessesary variables


## Performance

Both versions were executed with 4 threads, needed to generate 100.000.000 points and were compiled with the following flags:

> -fopenmp -Ofast -std=c++11 -march=native

Every version will be executed 5 times, then the average will be calculated.

### Performance before modifying

| Run 	| Time      	|
|-----	|-----------	|
| 1   	| 0.335764  	|
| 2   	| 0.335775  	|
| 3   	| 0.329867  	|
| 4   	| 0.330386  	|
| 5   	| 0.330861  	|

So on average the programm needs **0.3325306** seconds to execute.

### Performance after modifying

| Run 	| Time      	|
|-----	|-----------	|
| 1   	| 0.0606804  	|
| 2   	| 0.0608742  	|
| 3   	| 0.0608324  	|
| 4   	| 0.0608718  	|
| 5   	| 0.0606009  	|

So on average the programm needs **0.06077194** seconds to execute.

### Conclusion

The formular _(new - old)/old*100_ is used to calculate the percentage improvement in execution time.

After modifying the algorithm, there was a **81.72%** gain in performance.