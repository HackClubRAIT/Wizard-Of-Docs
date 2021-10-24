
# 🧭Big-Ω(Omega)
Big-Omega (Ω) notations are used to define the lower bound for the runtime taken by the algorithm. Sometimes, we define the least amount of time while not stating the maximum limit. Big-Ω comes in handy in such cases.
# 
### Definition-
<b>Big-Omega (Ω)</b> notation gives a lower bound for a function _f(n)_.

We write _f(n) = Ω(g(n))_, If there are positive constants *n<sub><sub>0</sub></sub>* and *c* such that, to the right of *n<sub><sub>0</sub></sub>*  the *f(n)* always lies on or above _c<b>.</b>g(n)_.

*Ω(g(n)) = { f(n) : There exist positive constant c and n<sub><sub>0</sub></sub> such that 0 ≤ c g(n) ≤ _f(n)_, for all n ≤ n<sub><sub>0</sub></sub>}*
![](https://www.tutorialspoint.com/assets/questions/media/26169/big_omega.jpg)
#
We say that the running time is "big-Ω of *f(n)***.**" We use the big-Ω notation for **asymptotic lower bounds** since it bounds the growth of the running time from below for large enough input sizes.
#
#### Note-
Just like Big-O, Big-Ω does not give a precise view about the time. That is we can say that the worst-case running time of binary search can be *Ω(1)*, but that might not be true for all cases.
