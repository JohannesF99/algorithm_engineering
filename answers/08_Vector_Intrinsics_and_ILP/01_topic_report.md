# Topic

Select one slide from the lecture, research more about the topic, and report on it.

## Selected topic

Page 3, "Fused-Multiply-Add (FMA)"

## Research

In this weeks lesson we learned about the fused-multiply-add operation. 
This operation takes 3 arguments and multiplies the first two with each other and adds the third argument on top.
Because this is a quite specific operation, I wanted to research real world applications for this operation. 
I found 2 applications, on which I will now elaborate further. 

### Graphics Processing Units (GPUs)

Matrix operations, like we learned in the lesson, as well as shaders or graphical rendering, like lighting calculations, are tasks of a GPU.
Both work parallised and can be sped up with FMA.
Because they rely on floating-point arithmetic, FMA can help, because it combines those task in one single operation.

### Physics Simulations

Physics simulations include e.g.: fluid dynamics and particle systems and are very calculation heavy, so FMA can help to improve the performance of those calculations.
Because FMA combines multiplication and addition together, the chance of rounding errors is reduced.
And with this, the programm will generate more reliable and accurate simulations.
Simulations also need to solve systems of equations or do iterative calculations. 
Because FMA is so efficient, the underlying implementations of these algorithms also lead to faster simulations.