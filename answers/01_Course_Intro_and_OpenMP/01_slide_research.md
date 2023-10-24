# Topic

Monte-Carlo-Algorithm (Slide 21)

# Monte-Carlo-Algorithm

A Monte-Carlo-Algorithm is a algorithm, which uses random numbers to generate a approximately correct result.

## History

One of the first recorded application of an MC algorithm was [Buffon's needle problem](https://en.wikipedia.org/wiki/Buffon%27s_needle_problem) to compute the numbers of pi, which he published 1733 in paris.
Another early use-case was in 1930 when Enrico Fermi tried to use an MC algorithm for his studies in neutron diffusion.

One of the first and most important publication regarding the MC Algorithm is [Equation of State Calculations by Fast Computing Machines](https://bayes.wustl.edu/Manual/EquationOfState.pdf) by Metropolis, Rosenbluth and Teller. In this paper they used 224 particles in 48 cycles to compute the state of rigid spheres as models of a fluid. Every cycle, one particle was allowed to move one step and took on average 3 minutes.

The name "Monte-Carlo" was created by Nicholas Metropolis, referencing Stan Ulam' uncle, who used to frequently borrow money from his relatives, claiming he needs to "go to Monte-Carlo".

## Compute Pi with an Monte-Carlo-Algorithm

To calculate Pi using the Monte Carlo algorithm, you need two random numbers between 0 and 1, describing x and y coordinates.

After that, you compute the hypotenuse using the pythagorean theorem. 

If the hyptenuse is less then one, then the coordinates describe a point inside the quater circle, otherwise they are outside of the quarter circle.

After enough iterations, you can divide the number of times the coordinates were inside through the number of iterations and you gain your approximate value for Pi.

A cool Website to try out and visualize the computation of Pi with the MC Algorithm can be found [here](https://groups.uni-paderborn.de/reiss/AnalyseBuch/Grundlagen/Geometrie/pi/area.html).

# Sources

- https://de.wikipedia.org/wiki/Monte-Carlo-Simulation#Geschichte
- https://www.bigdata-insider.de/der-monte-carlo-algorithmus-und-simulationen-a-736433/
- https://groups.uni-paderborn.de/reiss/AnalyseBuch/Grundlagen/Geometrie/pi/area.html