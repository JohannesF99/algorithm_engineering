# Topic
The `volatile` keyword, it's history and usage in C++

Found in Chapter 13

## Definition

The `volatile` keyword defines variables in C  and C++. The value of those variables can change at any time, in most cases through external hardware or async ISRs, so called _interupt service routines_.

In contrast to popular belief, this doesn't stop the compiler from optimze the code snipped. The compiler will still try to optimize the code, but will be much more limited in his ways while doing so.

Another thing to mention is that the keyword does not guarantee thread-safety.

## History

The `volatile` keyword was created in C and inherited by C++. It should allow for the possibility that reading or writing to an object might or might not have side-effects it doesn't know about.

## Example

```c++
static volatile int status;

void poll_status(void)
{
    status = 0;

    while (status == 0) {
        /* do nothing */
    }
}
```

Without the volatile keyword, the variable `status` would be erased by the compiler and replaced by an infinite loop. 