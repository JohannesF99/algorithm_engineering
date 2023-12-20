# Topic

Explain why temporal locality and spatial locality can
improve program performance.

# Answer

Temporal locality as well as spatial locality define how a programm should manage it's cache accesses. While temporal locality says something about the cache access based on the time, spatial locality says something about the cache access based on the location.

Temporal locality means, that if the cache access of one element has happend, there is a high probability that this element will be accessed again. If this isn't the case, it's called a _good_ temporal locality - otherwise it's _bad_ temporal locality.

The same applies for the spatial locality, just with the location of the memory. That means, if an element is accessed in the programm, there is a high probability that one of the next cache accesses is to a memory address that is near to the first access.
If this is the case, then it's calle a _good_ spartial locality - otherwise it's called a _bad_ spartial locality.
The best way of accessing is stride-1 (unit stride) memory access.

Both of these characteristics can improve one's program performance, because you access elements that are stored on the same cache line, these elements can be stored in the "better" caches, e.g.: L1-Cache as a cache line. This speeds up the program, because the CPU can load the data really fast and there is no need to wait for other cache lines which are not in the L1-Cache. 

The same goes for the temporal locality, when the cpu can access the same cache line over and over, because the cpu needs to access the same elements, the cache line can be kept in close proximity to the cpu, so the access is as fast as possible.