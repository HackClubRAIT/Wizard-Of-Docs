<h1>What is stack ?</h1>
Stack is a linear data structure that follows a particular order in which the operations are performed. The order may be LIFO ( Last In First Out) or FILO (First In Last Out). 
Generally the following three elementary operations are performed in the stack 
Push Adds an item in the stack. However, either it's said to be an Overflow condition, If the stack is full. 

<br>
Pop Removes an item from the stack. The items are popped in the reversed order in which they're pushed. However, either it's said to be an Underflow condition, If the hill is empty. 
Peek or Top Returns the top element of the stack. 
isEmpty Returns true if the stack is empty, farther false. 
Working of Stack Data Structure 
<br>
<h2>The operations work as follows</h2>
<li>
  <ol>A pointer called TOP is used to keep track of the top element in the stack.</ol> 
  <ol>When initializing the stack, we set its value to-1 so that we can check if the stack is empty by comparing TOP == -1. </ol>
  <ol>On pushing an element, we increase the value of TOP and place the new element in the position refocused to by TOP. </ol>
  <ol>Before pushing, we check if the stack is before full </ol>
  <ol>On popping an element, we return the element refocused to by TOP and reduce its value.</ol>
  <ol>Before popping, we check if the stack is before empty </ol>
  </li>
<br>
<h2>Stack Time Complexity </h2>
For the array- based execution of a stack, the push and pop operations take constant time, i.e. O(1).
<h2>Applications of stack </h2>
<ol>Balancing of symbols</ol>
<ol>Infix to Postfix/ Prefix conversion </ol>
<ol>Redo- undo features at many places like editors, photoshop. </ol>
<ol>Forward and backward diagnostic in web browsers</ol>
<ol>Used in many algorithms like Tower of Hanoi, tree traversals, stock span problem, histogram problem.</ol>
<ol>Backtracking is one of the algorithm designing methodologies. Some cases of backtracking are the Knight-Tour problem, N- Queen problem, find your way through a maze, and game- like chess or checkers in all these problems we dive into someway if that way isn't efficient we come back to the previous state and go into some another path. To get back from a current state we need to store the foregoing state for that purpose we need a stack.</ol>
<ol>In Graph Algorithms like Topological Sorting and powerfully Connected Components</ol>
<ol>In Memory management, any present-day computer uses a stack as the primary management for a running purpose. Each program that's running in a computer system has its own memory allocations </ol>
<ol>String reversal is also another usage of stack. Presently one by one each character gets inserted into the stack. So the first character of the string is on the bottom of the stack and the last element of a string is on the top of the stack. After Performing the pop operations on the stack we get a string in reverse order.  </ol>

