# Topic

Non-Uniform Memory Access (NUMA)

## Report

In this report, i want to research more about NUMA. First of all, NUMA is a computer architecture design. The difference to normal Uniform Memory Access architectures is the existence of multiple memory banks for a CPU. With that, the performance can be improved by reducing latency in memory access. 

In the NUMA design, there is **Local Access**, which is very fast and **Remote Access**, which is not that fast. In this behaviour it mirrors many things in computer science. Most of the time access to local resources is fast then to remote resources, no matter if loading a Website or reading from memory. 

The structure of NUMA designs depends on three things:

1. **Nodes**: Contains a part of the system memory and one or more processors 

2. **Interconnects**: This is the network that connects the nodes with one another and allows communication between nodes

3. **Processor Affinity**: This describes the affinity from one processor/node to one local memory. Because of this, the node access it's local memory more often then others.

### Visualization

[Here](https://www.motioncontroltips.com/what-is-non-uniform-memory-access-in-industrial-controls/) is an image, that shows the difference that i found online:
![Difference UMA and NUMA](NUMA.png) 