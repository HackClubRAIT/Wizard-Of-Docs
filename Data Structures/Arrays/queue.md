# Queue

Queue is linear Data Structure in which insertion can take place at one
end called rear of the queue, and deletion can take place at other end
called front of queue.

- The terms front and rear are used in describing a linear list only when it is implemented as a queue.
- Queue is also called FIFO (First In First Out) list.
- Example: Peoples standing in queue at ATM.

### Types of Queue

- There are 4 types of queue.

1. Linear Queue/ (Simple Queue)
2. Circular Queue
3. Priority Queue
4. Double ended Queue.

### Operations in Queue

1. Enqueue : The process to add an element into Queue is called enqueue.
2. Dequeue : The process of removing an element from queue is called dequeue.
3. Overflow (Is full) : If there is no space to add new element in list then it is called as overflow.
4. Underflow (Is empty) : If there is no any element to remove form list then it is called as underflow

### Linear Queue (Simple Queue)

- In this type of queue, the array is used for implementation.
- The elements are arranged in sequential mode such that front position
  is always be less than or equal to the rear position.
- The rear is incremented, when an element is added, and front is
  incremented when an element is removed. Thus, the front follows the
  rear.

#### program to implement Linear Queue and perform Insert, Delete, Traverse operation in C

```c

#include<stdio.h>
#define MAX 5
int q[MAX],front=-1, rear=-1;   //Global Data
void Insert();  //Functions Declarations
void Delete();
void Display();
void main()
{
 int ch;
 do
 {
 printf("\n\nMENU");
 printf("\n1 Insert\n2 Delete\n3 Display\n4 Exit");
 printf("\nChoice ? ");
 scanf("%d",&ch);
 switch(ch)
 {
 case 1: Insert(); break;
 case 2: Delete(); break;
 case 3: Display(); break;
 case 4: break;
 default:printf("\nWrong Choice ");
 }
 }while(ch!=4);
 printf("\nThank You");
} // end of main

//functions
void Insert()
{
 int item;
 if(rear==MAX-1)
 printf("\nOVERFLOW");
 else
 {
 printf("\nEnter the element to insert in Q ");
 scanf("%d",&item);
 if(rear==-1) //initially empty
 front=rear=0;
 else
 rear++;
 q[rear]=item;
 printf("\n%d is inserted in Q ",item);
 }
}
void Delete()
{
 int item;
 if(front==-1)
 printf("\nUNDERFLOW");
 else
 {
 item = q[front];
 if(front==rear) // Q contains single element
 front=rear=-1;
 else
 front++;
 printf("\n%d is deleted from Q",item);
 }
}
void Display()
{
 int i;
 if(front==-1)
 printf("\nQ is empty");
 else
 {
 printf("\nQ is ..\nFRONT-->");
 for(i=front;i<=rear;i++)
 printf("\t%d",q[i]);
 printf("\t<--REAR");
 }
}

```
