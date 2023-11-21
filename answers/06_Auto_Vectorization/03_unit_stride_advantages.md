# Topic 
What are the advantages of unit stride (stride-1) memory
access compared to accessing memory with larger strides (for
example, stride-8)?

## Answer

"Strided Access" defines the access of elements within the same distance.
If you access every 2nd element in an array, it's called stride 2 memory access.
The advantage of unit stride to other stride memory access methods, is that all elements for one vector operation are already in order can be loaded with one single instruction.

If you would use stride 2 or stride 4, one would need to load every single element in one vector and operate on that vector, but with unit stride, this vector already exists in memory and doesn't need to be created.

Because of that, unit stride memory access is very cache efficient.