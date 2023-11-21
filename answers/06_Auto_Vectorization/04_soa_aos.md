# Topic 
When would you prefer arranging records in memory as a
Structure of Arrays?

## Answer

Given a vector of 3D coordinates, if one would want to calculate something with all z-axis values, it should use a Structure of Arrays (SoA), because then all z-axis values are already in one vector in memory and there is no need to gather the elements from different positions in memory.

In contrast, if one would calculate something with the x-, y- and z- axis for each element individually, then an Array of Structures (AoS) would be optimal, because of the same reason. The whole element in memory exists alreasy in a vector, so there would no need to gether the elements first, becaus of unit stride access.