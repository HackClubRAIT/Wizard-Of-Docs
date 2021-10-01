# ⭐ Stack

A stack is a linear list in which all additions and deletions are restricted to one end, called the top. If you insert a data series into a stack and then remove it, the order of the data is reversed. Data input as {5, 10, 15, 20} is removed as {20, 15, 10, 5}. This reversing attribute is why stacks are known as the last in– first out (LIFO) data structure. 

We use many different types of stacks in our daily lives. We often talk of a stack of coins or a stack of dishes. Any situation in which you can only add or remove an object at the top is a stack. If you want to remove any object other than the one at the top, you must first remove all objects above it. 

Stack has 3 basic operations
* Push: Adds an item in the stack. If the stack is full, then it is said to be an Overflow condition.
* Pop: Removes an item from the stack. The items are popped in the reversed order in which they are pushed. If the stack is empty, then it is said to be an Underflow condition.
* Peek/Top: Returns the top element of the stack.
* Is Empty: Checks if the stack is empty

### Visual explanation

![](https://upload.wikimedia.org/wikipedia/commons/b/b4/Lifo_stack.png)

### Algorithm

#### Push
```js
Input : stack, data
begin
   if stack is full
      return null
   endif
   
   top ← top + 1
   stack[top] ← data

end
```

#### Pop
```js
Input : stack
begin
   if stack is empty
      return null
   endif
   
   data ← stack[top]
   top ← top - 1
   return data

end
```

#### Peek/Top
```js
Input : stack
begin
   return stack[top]
end
```
#### Is Empty
```js
begin
   if top less than 1
      return true
   else
      return false
   endif
   
end
```

### Code (Python)
```c
#include<stdio.h>
#include<conio.h>

#define SIZE 10

void push(int);
void pop();
void display();

int stack[SIZE], top = -1;

void main()
{
   int value, choice;
   clrscr();
   while(1){
      printf("\n\n***** MENU *****\n");
      printf("1. Push\n2. Pop\n3. Display\n4. Exit");
      printf("\nEnter your choice: ");
      scanf("%d",&choice);
      switch(choice){
	 case 1: printf("Enter the value to be insert: ");
		 scanf("%d",&value);
		 push(value);
		 break;
	 case 2: pop();
		 break;
	 case 3: display();
		 break;
	 case 4: exit(0);
	 default: printf("\nWrong selection!!! Try again!!!");
      }
   }
}
void push(int value){
   if(top == SIZE-1)
      printf("\nStack is Full!!! Insertion is not possible!!!");
   else{
      top++;
      stack[top] = value;
      printf("\nInsertion success!!!");
   }
}
void pop(){
   if(top == -1)
      printf("\nStack is Empty!!! Deletion is not possible!!!");
   else{
      printf("\nDeleted : %d", stack[top]);
      top--;
   }
}
void display(){
   if(top == -1)
      printf("\nStack is Empty!!!");
   else{
      int i;
      printf("\nStack elements are:\n");
      for(i=top; i>=0; i--)
	 printf("%d\n",stack[i]);
   }
}
```
