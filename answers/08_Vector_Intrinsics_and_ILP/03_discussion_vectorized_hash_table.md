# Topic

Read the paper "Analyzing Vectorized Hash Tables Across CPU Architectures".
Discuss two things you find particularly interesting.

## Topic 1

Scalar Hashing Schemes (SHS)

### Discussion 1

SHS is the basic version of hashing, uses one CPU and hashes one element at the time, so it's serial.
It's used in simple hash functions and gets applied in scenarios where the data can be easily processed one-by-one.
It is very simple but the performance gets worse for large amounts of data.
Examples for things that use SHS are:

1. Datastructures (e.g. HashTable, HashMap)
2. Checksums (e.g. validate downloaded ISO-images)
3. small Databases

## Topic 2

Vectorized Hashing Schemes (VHS)

### Discussion 2

In contrast to SHS, VHS is the more advanced hashing scheme. It can processes multiple elements of data simultaneously as a vector.
Because of this, it's often used when speed is crucial and when working with large amounts of data.
It heavily exploits the SIMD instruction, as we also learned in out lesson.
Examples for things that use VHS are:

1. Graphics Processing (e.g. rendering and image processing)
2. Network Security (e.g. analysis of network traffic)
3. large Databases (e.g. indexing and query operations)