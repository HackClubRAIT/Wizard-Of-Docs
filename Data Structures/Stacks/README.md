<h1 align="center">Stack</h1>

Stack is a linear data structure built upon the **LIFO** principle, i.e. Last-In-First-Out. It can perform insertion and deletion at only one of its ends, called the **top**.

## Implementation

### 1. Using array

A stack can be implemented using an array, and an integer representing the current number of elements in the stack. The size of the array can be anything as per a problem's requirement, though usually set as INT_MAX to maximize the stack's capacity and avoid overflow. 

``` cpp
int stk[INT_MAX];
int i;
```

### 2. Using linked list

A stack can also be implemented using a linked list. One of the members of the structure is a 'next' pointer pointing to the next node in the stack, and a variable 'data' for storing the value at that node. This implementation is useful when hardcoding the capacity of the stack is not preferred.

``` cpp
struct stack
{
    stack *next;
    int data;
};
```

## Operations

A stack should be able to perform a certain number of standard operations like push, pop, is_empty, and display.

Insertion of an element into a stack is known as 'push' while deletion of an element from it is known as 'pop'. Both operations can be performed only at the top of the stack.

An is_empty function is used to determine whether or not the stack has no elements left. It comes handy while performing the pop operation.

### 1. In Array Implementation

#### Insertion

- Check if the stack is full or not
- If not, assign the value of data to the ith position of arr
- Increment the value of i, to ensure the next element is inserted at the correct position.

``` cpp
void push(int data)
{
    if(i == INT_MAX)
        cout << "Insetion failed! Stack is full";
    else
    {
        arr[i] = data;
        i++;
    }
}
```

#### Deletion

- Check if the stack is empty or not
- If not, decrement the value of i

Note: We do not need to actually remove the value or replace it with a default value since it will be overwritten when insertion is performed.

``` cpp
void pop()
{
    if(is_empty())
        cout << "Deletion failed! Stack is empty";
    else
        i--;
}
```

#### is_empty()

- i represents the current number of elements in the stack
- if i is zero, the stack is empty.

``` cpp
bool is_empty()
{
    if(i == 0)
        return 1;
    return 0;
}
```

#### Display

``` cpp
void display()
{
    for(int j = 0; j < i; ++j)
        cout << arr[j] << " ";
}
```

### 2. In Linked List Implementation

#### Insertion

- Create a new node temp
- Initialise temp with data
- Point the next pointer of temp to the top of the stack stk
- Now that temp is the topmost node, assign it to stk


``` cpp
void push(int data)
{
    stack temp = new stack(data);
    // stk is the topmost node of the stack
    temp -> next = stk;
    stk = temp;
}
```

#### Deletion

- Check if the stack is empty or not
- If not, reassign the topmost node stk to its next node

``` cpp
void pop()
{
    if(is_empty())
        cout << "Deletion failed! Stack is empty";
    else
        stk = stk -> next;
}
```

#### is_empty()

``` cpp
bool is_empty()
{
    if(stk == NULL)
        return 1;
    return 0;
}
```

#### Display
- Initialise a temp pointer to topmost node stk
- Traverse stack via temp pointer until NULL is encountered
- Display value at nodes throughout iteration 
``` cpp
void display()
{
    stack temp = stk;
    while(temp != NULL)
    {
        cout << temp -> data;
        temp = temp -> next;
    }
}
```
