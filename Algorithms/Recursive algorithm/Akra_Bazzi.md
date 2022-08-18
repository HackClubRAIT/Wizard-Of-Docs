# Introduction
we use Akra-Bazzi theorem to analyze the complexity of divide and conquer algorithm.
# The Complexity of Divide and Conquer Algorithm
Divide-and-conquer is an algorithm design technique that solves a problem by breaking it down into smaller sub-problems and combining their solutions. Each sub-problem is treated the same way: we divide it into smaller parts, solve them recursively, and unify the sub-solutions.<br><br>
**Master Theorem:** If the sub-problems are of the same size, we use the Master Theorem. Those are the ones where T(n), the number of steps an algorithm makes while solving a problem of size n, is a recurrence of the form:<br>
$[T(n) = aT\left(\frac{n}{b}\right) + g(n)]$
<br>where g(n) is a real-valued function. More specifically, the recurrence describes the complexity of an algorithm that divides a problem of size n into a sub-problems each of size n/b. It performs g(n) steps to break down the problem and combine the solutions to its sub-problems.

# Akra Bazzi  Theorem
The Akra Bazzi theorem was developed by Mohammad Akra and Louay Bazzi in the year 1996. It can be applied in  the recurrence of the form:
<br>![](https://4.bp.blogspot.com/-PepSqXo9UC8/WWOa6V8gL9I/AAAAAAAAG28/8qNynp2wiGUObZb6bxzErm_euQpIK--RQCPcBGAYYCw/s1600/akra_bazzi_img.jpg)
or T(n)=$a_1T$($b_1x$+$E_1(x)$)+$a_2T$($b_2x$+$E_2(x)$)+....+$a_kT$($b_kx$+$E_k(x)$)+g(x)
<br>
 where,   $a_{i}$    and $b_{i}$      are constants such that:<br>
 - $n_0$ belongs in R is large enough so that T is well-defined.
 - For each i=1,2,\ldots,k:
     - the constant $a_i$ >0
      - the constant $b_{i}$ lies in (0, 1)
      - $|h_i(n)| \in O\left(\frac{n}{\log^2 n}\right)$
## Formula
*T(x)=θ($x^p$+$x^p$ $∫_1^x$ (g(u)/ $u^p$ $^+$ $^1$)du )*
## What is p?
$a_1b_1^p$+$a_2b_2^p$+.....+$a_nb_n^p$ =1
<br><br>
Therefore, $∑_1^k$ $a_ib_i^p$=1.
## Examples
1. T(N) = 2T(N/2)+(N-1).
<br>Here, a1=2,b1=1/2,g(x)=x-1
<br>
 $∑_1^k$ $^=$ $^1$ $a_1b_1^p$=1
 <br>
=> 2 X $(1/2)^p$ = 1
<br>
=> for p=1, the equation becomes 1.
<br> putting p in formula
<br>T(x)=θ($x^p$+$x^p$ $∫_1^x$ (g(u)/ $u^p$ $^+$ $^1$)du )<br><br>
T(x)=θ($x^1$+$x^1$ $∫_1^x$ (u-1/ $u^2$)du )
<br>=> θ(x+x $[logx]_1^x$- $[-1/u]_1^x$)
<br>=> θ(x+x[logx+(1/x)-1])
<br>=> θ(x+xlogx+1-x)
<br>θ(~~x~~+xlogx+1-~~x~~)	
<br>θ(xlogx+1)
<br>θ(xlogx).<br><br>
2. Suppose T(n) is defined as 1 for integers 0 less than equal to n less than equal to 3 and $n^2$ +7/4*T([1/2*n])+T[(3/4*n)] for integers n>3.In applying the Akra–Bazzi method, the first step is to find the value of p for which 
In time complexity we ignore constant hence final answer is 7/4 $(1/2)^p$ + $(3/4)^p$=1.In this example,p=2. Then using akra-bazzi theorem:<br>
T(x)=θ($x^p$+$x^p$ $∫_1^x$ (g(u)/ $u^p$ $^+$ $^1$)du )
<br>=>θ($x^2$+$x^2$ $∫_1^x$ ($u^2$/ $u^3$ )du )<br>
=>θ($x^2$+$x^2$ lnx)
<br>=>θ($x^2$ lnx)<br><br>
3. T(n)= $1/3T(n/3)+1/n$<br>
Here,a1=1/3,b1=1/3,g(n)=1/n
<br>$\large\frac{1}{2}\normalsize*\large\frac{1}{2}^p\normalsize=1$<br>
Here,p=-1 satisfies the equation<br>
=> $n^{-1}(1+\int_{1}^{n}\large\frac{\frac{1}{u}}{u^{-1+1}}\normalsize du)$

 <br>=> $\large\frac{1}{n}\normalsize(1+\int_{1}^{n}$ $\large\frac{1}{u}\normalsize du)$

=> $\large\frac{1}{n}\normalsize(1+[\log u]_{1}^{n})$

=> $\large\frac{1}{n}\normalsize(1+\log n)$


=> $\theta(\large\frac{\log n}{n}\normalsize)$<br><br>
4.T(n)=9T(n/3+logn)+n
<br>Here,a1=9,b1=1/3,g(n)=n.<br>
from  $∑_1^k$ $^=$ $^1$ $a_1b_1^p$=1
<br>$9*\large\frac{1}{3}^p\normalsize=1$
<br>we get p =2
<br>=> $n^{2}(1+\int_{1}^{n}\large\frac{u}{u^{2+1}}\normalsize du)$

=> $n^{2}(1+\int_{1}^{n}\large\frac{1}{u^{2}}\normalsize du)$

=> $n^{2}(1+[-\large\frac{1}{u}\normalsize]_{1}^{n})$

=> $n^{2}(2-\large\frac{1}{n}\normalsize)$

=> $2n^{2}-n$

=> $\theta(n^{2})$
## Significance
The Akra–Bazzi method is more useful than most other techniques for determining asymptotic behavior because it covers such a wide variety of cases. Its primary application is the approximation of the running time of many divide-and-conquer algorithms. For example, in the merge sort, the number of comparisons required in the worst case, which is roughly proportional to its runtime, is given recursively as T(1)=0  and
<br>T(n)=T([1/2*n])+T([1/2*n])+n-1<br>
for integers n>0, and can thus be computed using the Akra–Bazzi method to be θ(nlogn) .

 
 

## Advantages
- Works for many divides and conquer algorithms.
- Has a lesser constraint over the format of the recurrence than Master’s Theorem.
- p can be calculated using numerical methods for complex recurrence relations.
## Disadvantages
- Doesn't work if growth of the function g(n) is not bounded polynomial.
- Doesn't deal with ceil and floor functions.
<br><br>
---
# Resource
For More Practice You Can Visit: [Link](https://github.com/kunal-kushwaha/DSA-Bootcamp-Java/blob/main/assignments/13-complexities.md)
<br>
For getting clear conception on Time Complexities: [Video](https://youtu.be/mV3wrLBbuuE)

---
# Conclusion
This is a  documentation of Akra Bazzi theorem.
<br>
Resource  for dother examples of Akra Bazzi:
[GeeksforGeeks](https://www.geeksforgeeks.org/akra-bazzi-method-for-finding-the-time-complexities/)<br>
Resource  for detailed study of Other DSA topics:[Wizard-of_docs github repo](https://github.com/HackClubRAIT/Wizard-Of-Docs)
---
---
Don't forget to give a ⭐ to [Wizard-Of-Docs](https://github.com/HackClubRAIT/Wizard-Of-Docs) and keep contributing.
<br>
Happy Coding!
---