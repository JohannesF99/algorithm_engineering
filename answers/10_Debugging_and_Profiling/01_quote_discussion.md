# Topic

Discuss Donald Knuth’s original quote about premature
optimization. What is your opinion?

# Opinion

I really like the core that Knuth addresses. The main three points I find intresting are:

1. programmers like to optimize things that are not really necessary or have no big impact on the performance
2. programmers _think_ they know, where to optimize but are often wrong
3. in future, compilers should mark sections that can be optimized

I think the first point is valid but happens from my experience not all too often. (but i have not thaaaat much experience, so take that with a grain of salt :D)
I think too, that premature optimization is bad, but nowadays I value readability over speed, especially during development.
Another thing is, that compiler are getting better and better, to the point where they can optimize most of the readable, not optimized, code. 

I like the second point too, but not completly. I think it's reasonable to say that programmers are most of the time confident about their statements. But I don't think, that they are completely wrong. Most of the time they have a general direction, where they suspect a bug (or in this case a code snipped to optimize). This is this kind of intuition that builds over years and years of programming.

To the third point, I have no special opinion. In general I think it would be useful if the compiler would do this out of the box, but with existing tools like valgrind/kcachegrind, there are already good tools to spot bottlenecks etc.