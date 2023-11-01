# Topic

Does the code snippet in Listing 3.10 use cores efficiently? Why yes, why no? Consider also the variable size in your argumentation

## Things I noticed

1) The code snippet to compute generations of Convay's "Game of Life" has 2 nested _for_-loops. 
Because of this, it makes sense to use the _for collapse(...)_ feature of OpenMP, which it does in Line 2. 
So the compiler will collapse and parallelise the loop.

2) The algorithmn uses two planes. 
One plane is the current generation (used for reading), while the other plane is the next generation (used for writing). 
Because of this seperation, race conditions will be avoided.

3) One thing to mention is the variable _size_ inside the algorithm, which defines the height and width of the matrix.
Depending on how large or small the number stored in this variable is, there can be a huge amount of computation necessary.
In the chapter, _size_ is set to 10, so there are 100 cells in the matrix.
But if _size_ is e.g.: set to 100, there are 10.000 cells. 
This in itself is not a problem, but when using just e.g. 10 threads and those 10.000 iterations get exectuted repetitively by the _while_-loop, the cores won't get used efficiently.

## Conclusion

I think the code snipped does not use the cores efficiently.