# Topic

Select one slide from the lecture, research more about the
topic, and report on it.

## Selected topic

Page 18, "Cache Misses"

## Research

Upon further research, I found out, that compulsory misses are also known as "cold misses". 
They are called like this, because the cache always starts empty and when the program runs, it fills step by step with data that is accessed frequently. 
So these types of misses will always happen.

Another fact about conflict misses is that this type of miss is common in so called "set-associative" or "direct-mapped" caches. These are caches, where multiple memory blocks can map to the same set or line.

# Optimizations to avoid Cache Misses

After researching about the creation of cache misses, I wanted to list some possible optimizations one can do to minimalize the amount of misses in a program.

The first optimization is using arrays instead of linked lists, because they improve spatial locality.
Next, one can use loop unrolling and software pipelining to help with effective scheduling of instructions.
Another one is called "Prefetching". This means, bringing the data into the cache before actually needed.
Another way to improve spatial locality is to break down large arrays or matrices into smaller blocks that fit into the cache.
And the last one is choosing a good replacement, e.g.: FIFO (First-In-First-Out) to reduce cache misses.