# ⭕ Big-Oh(O)
Big-O notation is used to define an upper bound. This means that it defines the maximum value or the upper limit of the time taken by the program to complete.
The Big-O notation is the most commonly used notation to define an algorithms run time. 
</br>
![](https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcTDfxCAOEiRPGw7ip5x2nCOX4GDeJ3II1LRxxMordmViO5Ae7nFwP4LJJXgQvEW9NcxGfY&usqp=CAU)
</br>
Let us understand this by taking the example of the binary search algorithm. The worst case of it is *Θ(log<sub>2​</sub>n)* but the algorithm can also find a solution in the first iteration. 
So does the time complexity of it becomes *Θ(1)*?
->No, it doesn't. But we can precisely say its runtime would never cross *Θ(log<sub>2​</sub>n)*. In such a case we need to use the upper bound that is Big-O notation.
#
#### ✍Definition- 
*Big-Oh is about finding an asymptotic upper bound.*
Formal definition of Big-Oh:
f(N) = O(g(N)), if there exists positive constants c, N<sub>0</sub> such that _f(N) ≤ c **.** g(N) ∀ N ≥ N<sub>0</sub> ._
![](https://cdn.programiz.com/sites/tutorial2program/files/big0.png)
 - The topic of concern here is growth i.e. how _f_ grows when _N_ is large.
 
	 - And not being concerned with small _N_ or constant factors.
	 

#

#### 📝 Note-
We can say that the running time of binary search is _always_  _Θ(log<sub>2​</sub>n)_. Also since *Θ* is a tight bound on the run time, unlike _O_. That means if you have 10 rupees in your pocket you can totally say that you have the amount in your pocket but not more than 10 million rupees.
The above statement though true doesn't give precise view of money in your pocket. 
