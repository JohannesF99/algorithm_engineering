# Topic
What are `read-modify-write (RMW)` operations and what do they do?

Found in Chapter 5

## Definition

RMW is a class of atomic operations, that read from memory and write a new value to that same location.
Operation are atomic, when the necessary operations always happen in the same order. This is especially important in concurrent programming, where parallel threads are used and the same order can't be guaranteed.

Because of this characteristic, RMW operations and atomic operations in general, are used to prevent race-condicitions in those type of applications.

## Examples

For an ARM Compiler, those algorithms can work like this:

1.  The first instruction copies the value from the target system register to a temporary general-purpose register.
2. The next one or more instructions modify the required bits in the general-purpose register. This can be one or both of:
    - `BIC` to clear to 0 only the bits that must be cleared.
    - `ORR` to set to 1 only the bits that must be set.
3. The final instruction writes the value from the general-purpose register to the target system register.

## Difference to `read-copy-update` operations

The paper also mentions RCU operations, but don't define what they do and how they differ to RMW operations.

RCU operation in general are a synchronization mechanism in mulit-threaded systems.
When a thread is modifying a datastructure in shared memory, the threads that read on the datastructure are guaranteed to see either the old or the updated version. 
This avoids inconsitencys and dereferencing nullpointers.