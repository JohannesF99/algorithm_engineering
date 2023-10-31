# Topic

Does the code snippet in Listing 3.10 use cores efficiently? Why yes, why no? Consider also the variable size in your argumentation

## Things I noticed

1) The code snippet to compute generations of Convay's "Game of Life" has 2 nested _for_-loops. 
Because of this, it makes sense to use the _for collapse(...)_ feature of OpenMP, which it does in Line 2. 
So the compiler will collapse and parallelise the loop.

2) The algorithmn uses two planes. 
One plane is the current generation (used for reading), while the other plane is the next generation (used for writing). 
Because of this seperation, race conditions can be avoided.

3) One thing to mention is the variable _size_ inside the algorithm, which defines the height and width of the matrix.
Depending on how large or small the number stored in this variable is, there can be a huge amount of computation necessary.
In the chapter, _size_ is set to 10, so there are 100 cells in the matrix.
But if _size_ is e.g.: set to 100, there are 10.000 cells. 
This is in itself no problem, but maybe a different schedule can be used to gain a little bit more efficiency. 
Because the workload is well distributed between iterations, there is no need for a dynamic schedule, but maybe the definition of a chunk size can improve the performance.


4) A problem with the code snippet is inside the switch statement in lines 7 and 9. 
All threads are writing to the plane of the next generation. 
While race conditions can't happen because every iteration writes only in their specific cell,
the variable _aux_plane_ is shared across all threads. 
When updating this variable, false sharing can occure, when two threads at the same time have the same cache line loaded and one of them writes to it. 
Then, the cache line has to be updated in all of the other threads, which is not efficient.

## Conclusion

I think the code snipped is pretty optimised, but does not use the cores efficiently.