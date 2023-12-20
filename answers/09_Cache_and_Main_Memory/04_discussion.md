# Topic

Read the paper "An Overview of Cache Optimization
Techniques and Cache-Aware Numerical Algorithms".Discuss two things you find particularly interesting.

## Topic 1

cache replacement policies

## Discussion 1

In chapter 10.2.3, the author talks about cache replacement policies/strategies. They determine which memory block gets replaced when something new needs to be stored in memory.

With my research I found out, that the most used strategies are "random" and "least recently used (LRU)". As the name suggest replaces "random" just one cache line without thinking about usage or other things. LRU replaces the block that hasn't been used a long time. This plays good with temporal locality and is one of the reasons, that it helps to optimize code. because if a cache line gets accessed over and over again, with LRU it stays in the cache which leads to faster loading times.

Another possible replacement startegy is FIFO, first in first out. As the name suggest, with FIFO the elements that are the longest time in the cache memory get replaced with new data.
This can also be bad, because if you use a cache line over and over with new data, at some point this frequently used cache line gets removed from the cache even though use need the data again in future. This is one of the reasons why FIFO is not that optimal.

## Topic 2

loop interchange, loop fusion and loop blocking

## Discussion 2

In chapter 10.3.1, the author talks about data access optimizations, especially _loop interchange_, _loop fusion_ and _loop blocking_.

**Loop interchange** as the name suggests, "switches" the order of the loops with the goal of better vectorization and parallelism. An example is:

```c++
// Original
double sum;
double a[n, n];
for j = 1 to n do
  for i = 1 to n do
    sum += a[i, j];
  end for
end for

// Modified
double sum;
double a[n, n];
for i = 1 to n do
  for j = 1 to n do
    sum += a[i, j];
  end for
end for
```

In this example, they switched the _i_ and _j_ loops, which optimizes the code, because this way the cache line can be used for every iteration of the _i_ loop.

**Loop fusion** can be used, when there are two loops that have the same range, so if you have two loops from _1_ to _n_ you can "fuse" them to one loop with the body containg all statements from both loops. This offers increased instruction level parallelism and reduces the amount of overhead.

```c++
// Original
for i = 1 to n do 
  b[i] = a[i] + 1.0;
end for 
for i = 1 to n do
  c[i] = b[i] * 4.0; 
end for

// Modified 
for i = 1 to n do 
  b[i] = a[i] + 1.0;
  c[i] = b[i] * 4.0;
end for
```

**Loop blocking** is also called "loop tiling" is a method that **adds** more loops. That is in a way suprising, because most of the time optimization methods are ways to reduce code/loops.

The main point is to improve the locality in the memory by enhancing the reuse of data. This is the method I know not that much about, but can good be shown in an example:

```c++
// Original
for i = 1 to n do 
    for j = 1 to n do 
        a[i][j] = b[j][i]
    end for
end for

// Modified
for ii = 1 to n by B do
  for jj = 1 to n by B do
    for i = ii to min(ii + B − 1, n) do
      for j = jj to min(jj + B − 1, n) do
        a[i, j] = b[j, i];
      end for
    end for
  end for
end for
```