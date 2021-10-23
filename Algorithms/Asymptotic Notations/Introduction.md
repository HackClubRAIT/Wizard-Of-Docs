
# 🤖 Introduction
Analysis of algorithms can't be done without comparing the algorithms. We need to understand why a certain algorithm is more preffered over the other for certain scenarios. 

> We are interested in time taken by an algorithm

In simple words we just need a measure to identify the dimensions of a algorithms i.e. running time. 
The running time of an algorithm is simply how much time a computer takes to run the lines of code of the algorithm—
That really depend on a variety of factors 

 

 - ⚡ The speed of the computer 
 - 💬The programming language
 - 👾The compiler 
 - 🙄And some other factors too
 


The above mentionned factors are not in the hands of a developer. Which means if a particular algorithm can give better time on a particular machine with some specific setup, will not able to give similar results on other machine. So what it a generalized way to measure time taken by  algorithm.
A universally accepted method came out in the form of number of inputs. Which means for example if a select sort algorithm is given an array of only 2 elements then it will take only 2 iterations to solve the problem, but for the same algorithm if the array of size 5 is given then it will make 5 iterations to solve the problem. So time taken increased therefore, the time depends on the input size.
The idea is that to measure a algorithm's efficiency we must focus on how fast a function grows with the input size. Also known as the **rate of growth** of the running time. 

## Asymptotic Notations

Asymptotic Notation are measure used to describe the running time of an algorithm - how much time an algorithm takes with a given input, n. Basically its very similar to the measure of time that is second, just as we use the seconds to measure the time for measuring how long an algorithm will take to complete in terms of its input size.  There are three different notations: big Oh(O), big Theta (Θ), and big Omega (Ω).
For futhur reference click <a href = "https://www.khanacademy.org/computing/computer-science/algorithms/asymptotic-notation/a/asymptotic-notation">here</a>
