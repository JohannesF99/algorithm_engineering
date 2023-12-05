# Topic

Discuss two things you find particularly interesting.

## Topic 1

**Page 35, "MMX Read/Write Stage"**

The MMX processor technology uses a special step to separate the reading of MMX operands from the writing/computation. 

### Discussion 1

The thing that interests me the most, is the improvement of the efficiency in MMX instruction executions.
Because a special stage for reading and writing in the pipeline separates the reading of MMX operands from the writing. 
This allows to parform a calculation with one operand in memory and the other in a register to complete in just one clock cycle.
In contrast, "old" pipelines without this modification, would require two consecutive cycles. 
Because of this, delays and inefficient utilization may happen and the number of needed clock cycles halved.

## Topic 2

**Page 27, "MMX Technology Data Structures
and Enhanced Instruction Set"**

The MMX processor enhances multimedia algorithms by executing multiple data pieces in parallel, which boosts the performance significantly. 
It introduces "packed data types", which gives programmers the flexibility to controll fixed-point formats and dynamic value ranges.

### Discussion 2

I found this paragraph quit interesting, because it's about the parallel processing of large amounts of data with only one instruction and this feature also uses the "packed data types" introduced in Topic 1.
The common elements, like pixels or audio samples have varying bit sizes. 
The control over fixed-point formats in those elements can be a problem for programmers, but it offers more flexibility to adapt and modify those formats.
This allows complete control over the dynamic range of values during execution.