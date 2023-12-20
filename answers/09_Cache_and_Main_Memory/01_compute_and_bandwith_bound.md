# Topic

How do bandwidth-bound computations differ from
compute-bound computations?

# Answer

The main difference between the bandwidth-bound computation and the compute-bound computation is the place of the bottleneck.
Compute-bound operations focus the cpu and barely uses the memory at all. This is in contrast to the bandwidth-bound computations, where the memory is used extensively and a huge amount of data is transported between the memory and the cpu.

An example for compute-bound computations is the computation of pi, or any other calculation without many variables.

An example for bandwidth-bound computations is the calculation of the sum or mean of elements stored in a matrix, or other calculations that rely on the contents of many variables or objects. 