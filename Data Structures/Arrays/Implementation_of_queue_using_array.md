# C++ Program to Implement Queue using Array

```
A queue is an abstract data structure that contains a collection of elements. Queue implements the FIFO mechanism i.e. the element that is inserted first is also deleted first. In other words, the least recently added element is removed first in a queue.
```


### 1-> In the above program, the function Insert() inserts an element into the queue. If the rear is equal to n-1, then the queue is full and overflow is displayed. If front is -1, it is incremented by 1. Then rear is incremented by 1 and the element is inserted in index of rear. This is shown below −
    void Insert() {
    int val;
    if (rear == n - 1)
    cout<<"Queue Overflow"<<endl;
    else {
      if (front == - 1)
      front = 0;
      cout<<"Insert the element in queue : "<<endl;
      cin>>val;
      rear++;
      queue[rear] = val;
   }
 }
    
### 2->In the function Delete(), if there are no elements in the queue then it is underflow condition. Otherwise the element at front is displayed and front is incremented by one. This is shown below −
    void Delete() {
    if (front == - 1 || front > rear) {
      cout<<"Queue Underflow ";
      return ;
    }
    else {
      cout<<"Element deleted from queue is : "<< queue[front] <<endl;
      front++;
   }
 }
### 3-> In the function display(), if front is -1 then queue is empty. Otherwise all the queue elements are displayed using a for loop. This is shown below −
    void Display() {
    if (front == - 1)
    cout<<"Queue is empty"<<endl;
    else {
      cout<<"Queue elements are : ";
      for (int i = front; i <= rear; i++)
      cout<<queue[i]<<" ";
      cout<<endl;
   }
}
### 4-> The function main() provides a choice to the user if they want to insert, delete or display the queue. According to the user response, the appropriate function is called using switch. If the user enters an invalid response, then that is printed. The code snippet for this is given below −
    int main() {
    int ch;
    cout<<"1) Insert element to queue"<<endl;
    cout<<"2) Delete element from queue"<<endl;
    cout<<"3) Display all the elements of queue"<<endl;
    cout<<"4) Exit"<<endl;
    do {
      cout<<"Enter your choice : "<<endl;
      cin>>ch;
      switch (ch) {
         case 1: Insert();
         break;
         case 2: Delete();
         break;
         case 3: Display();
         break;
         case 4: cout<<"Exit"<<endl;
         break;
         default: cout<<"Invalid choice"<<endl;
      }
    } while(ch!=4);
    return 0;
 } 
    
    
