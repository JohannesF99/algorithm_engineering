# Topic

Explain three vectorization clauses of your choice that can
be used with `#pragma omp simd`.

# `private`

The vectorization clause `private` takes one variable and creates one instance of this variable for each thread.

The syntax looks like the following:
```c++
int a = 0
#pragma omp simd private(a)
for (int i = 0; i < 100; ++i) {
    // do stuff
}
```

# `linear`

The keyword `private` tells the compiler, that the variable has a linear relationship to the loop variable.

The syntax looks like the following:
```c++
#pragma omp simd linear(variable)
for (int i = 0; i < 100; ++i) {
    // do stuff
}
```

This can help the compiler vectorize the loop more efficiently.

# `collapse`

The `collapse` keyword is already known from 

> `#pragma omp parallel for collapse(2)`

and does the same thing. It merges two or more loops together and executes the loop as one. In context of SIMD, this allowing the compiler to optimize the vectorization if possible.

The syntax looks like the following:
```c++
#pragma omp simd collapse(2)
for (int i = 0; i < 100; ++i) {
    for (int j = 0; j < 10; ++j) {
        // do stuff
    }
}
```