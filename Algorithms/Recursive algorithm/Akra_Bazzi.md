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
## Example
T(N) = 2T(N/2)+(N-1).
Here, a1=2,b1=1/2,g(x)=x-1
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
<br>θ(xlogx+1)<br>
In time complexity we ignore constant hence final answer is
<br>θ(xlogx).
## Advantages
- Works for many divides and conquer algorithms.
- Has a lesser constraint over the format of the recurrence than Master’s Theorem.
- p can be calculated using numerical methods for complex recurrence relations.
## Disadvantages
- Doesn't work if growth of the function g(n) is not bounded polynomial.
- Doesn't deal with ceil and floor functions.
<br><br>
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