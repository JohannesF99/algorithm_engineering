# Topic 
How can memory aliasing affect performance?

## Answer

Compilers are most of the time rather pessimistic. In a function, if there are multiple pointers, the compiler thinks, that those pointer may point (partly) to the same memory address.
Because of that, the compiler won't optimize the code to it's fullest potential. 

If the programmer can guarantee, that the pointer do not point to the same location, he can add the keyword `__restrict__` to the pointer.

**example:**<br>
function without restriction:
```c++
void important_function(
    int* in, 
    int* out
);
```
function with restriction:
```c++
void important_function(
    int*__restrict__ in, 
    int*__restrict__ out
);
```

The latter enables the compiler to make drastic improvements.
That's how memory aliasing can impact performance in C++ code.