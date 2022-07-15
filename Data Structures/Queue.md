<h1>What is a queue?</h1>
Queue is an abstract data structure, like similar to Stacks. Unlike stacks, a queue is open at both its ends. One end is always used to insert data (enqueue enqueue) and the other is used to remove data (dequeue dequeue). Queue follows First-In-First-Out methodology,i.e., the data item stored first will be entered first. 
<br>
<hr>
<h3> Queue Example 
</h3>
A real- world illustration of queue can be a single-lane one- way road, where the vehicle enters first, exits first. Another real- world illustrations can be seen as files at the ticket windows and bus- stops. 
<br>
<hr>
<h3>
    Queue Representation 

</h3>
As we now understand that in queue, we enter both ends for different reasons. The following figure given below tries to explain queue representation as data structure − 
Queue Example 
As in stacks, a queue can also be executed using Arrays, Linked-lists, Pointers and Structures. For the sake of simplicity, we shall implement queues using one-dimensional array. 

<br>
<hr>

<h3> Basic Operations 
</h3>
Queue operations may involve initializing or defining the queue, employing it, and either fully erasing it from the memory. Presently we shall try to understand the beginning operations associated with queues − 


<br>
<hr>
<h4>
    enqueue () − add ( store) an item to the queue. 
    dequeue () − spread ( access) an item from the queue. 
</h4>

<br>
<hr>
Few additional functions are took to make the above- mentioned queue operation productive. These are − 
 peek() − Gets the element at the front of the queue without removing it. 

 <br>

 isfull () − Checks if the queue is full. 
 isempty () − Checks if the queue is empt

 <br><hr>
 In queue, we always dequeue (or or access) data, directed by forward pointer and while enqueing (or or storing) data in the queue we take help of rear
