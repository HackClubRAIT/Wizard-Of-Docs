

# 🕒Big-θ (Big-Theta) notation
Lets take an example of array of *n* elements. To perform the linear search on the array the maximum number of times that the for-loop can run is *n*. This worst case occurs when the value being searched for is not present in the array.
</br>
For every for loop there certain fixed number of computations that are - 

 - Calling i<sup>th</sup> element of the array.
 - Comparing the values of the called element of array and the value to be found.
 - Value if found return it.
 - Increament the iterator.
 
 Now this all computations would take constant amount of time for each iteration. Let us assume all of the computations collectively take <i> c<sub>1</sub></i> units of time. Therefore for <i>n</i> iterations it would take *c<sub>1</sub><b>.</b>n* units of time. 
 Also there might be some extra time required for accepting the value to be found from user, initialising pointer for array, initialising the declared variables and etc. Assuming that value to be <i>c<sub>2</sub></i>. Therefore the total time taken would sum upto <i>c<sub>1</sub><b>.</b>n</i> + <i>c<sub>2</sub></i>.
But for very large value of *n*, *c<sub>2</sub>* can be ignored. Also since *c<sub>1</sub>* is constant, so we can derive that the time taken is a function of array size *n*. The notation we use for this running is *Θ(n)* (theta of n or big-theta of n). and not this theta - 
![](https://www.google.com/url?sa=i&url=https%3A%2F%2Floveforquotes.com%2Fi%2Fheygirls-think-theta-none-0d318ff8c5d545d1a99bb8f373e21018&psig=AOvVaw3JcvICfp_xJ3aQ0iMOdPZz&ust=1634902072087000&source=images&cd=vfe&ved=0CAsQjRxqFwoTCPjg0P2y2_MCFQAAAAAdAAAAABAb)

When running time is  *Θ(n)*, it implies that once *n* gets large enough, the running time is at least <i>k<sub>1</sub></i>**.** *n*  and at most  <i>k<sub>1</sub></i>**.** *n*  for some constants  <i>k<sub>1</sub></i>  and <i>k<sub>2</sub></i>. Here's how to think of  *Θ(n)*:
![credits - khanacademy](![](https://cdn.kastatic.org/ka-perseus-images/c14a48f24cae3fd563cb3627ee2a74f56c0bcef6.png))
We are not concerned about small values but for only values larger than *n* at the dashed line since for small values *c<sub>2</sub>*  also plays a part.
We can literally use any function of *n* like *n<sup>2</sup>, n<b>.</b>log<sub>2</sub> n* etc. 
#
When we big-*Θ* it provides average case or to be more specific asymptotically tight bound of the time required to run the code. 
