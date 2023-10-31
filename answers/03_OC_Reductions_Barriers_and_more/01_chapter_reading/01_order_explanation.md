# Topic

Why are the numbers in the OpenMP "Hello World" example printed randomly and in the fibonacci computation printed in order?

# Reason

In the "Hello World" example, the only operation happening in the parallel region is the printing of the thread number. This is one small line of code which can be executed really fast, so sometimes one thread is faster then the other. And because of this, the output is random.

In order to get the _n_-th fibonacci number, when using an recursive algorithm like shown in Listing 3.2, the programm always has to compute the _n-1_-th and _n-2_-th number. This already takes a lot of time to compute. Also, fibonacci numbers grow extremly fast, so even e.g.: when _n_ = 16, the corresponding fibonacci number is already 1597.

In conclusion, the reason why the numbers in Listing 3.2 are in order, is that the first thread gets the smallest _n_ to compute. And because of the nature of fibonacci numbers, the smalles _n_ also needs the least amount of time to compute. thats why they appear in order, even though they were started at the same time.