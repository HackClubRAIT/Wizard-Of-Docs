# C++ Program to Implement Queue using Linked List
```
A queue is an abstract data structure that contains a collection of elements. Queue implements the FIFO mechanism i.e the element that is inserted first is also deleted first. In other words, the least recently added element is removed first in a queue.
```


### 1-> The function Insert() inserts an element into the queue. If rear is NULL,then the queue is empty and a single element is inserted. Otherwise, a node is inserted after rear with the required element and then that node is set to rear. This is shown below −
    void Insert() {
    int val;
    cout<<"Insert the element in queue : "<<endl;
    cin>>val;
    if (rear == NULL) {
      rear = (struct node *)malloc(sizeof(struct node));
      rear->next = NULL;
      rear->data = val;
      front = rear;
    } else {
      temp=(struct node *)malloc(sizeof(struct node));
      rear->next = temp;
      temp->data = val;
      temp->next = NULL;
      rear = temp;
    }
  }
    
### 2->In the function Delete(), if there are no elements in queue then it is underflow condition. If there is only one element in the queue that is deleted and front and rear are set to NULL. Otherwise, the element at front is deleted and front points to next element. This is shown below −
     void Delete() {
     temp = front;
     if (front == NULL) {
      cout<<"Underflow"<<endl;
      return;
     } else
     if (temp->next != NULL) {
      temp = temp->next;
      cout<<"Element deleted from queue is : "<<front->data<<endl;
      free(front);
      front = temp;
     } else {
      cout<<"Element deleted from queue is : "<<front->data<<endl;
      free(front);
      front = NULL;
      rear = NULL;
    }
   }
### 3-> In the function display(), if front and rear are NULL then queue is empty. Otherwise, all the queue elements are displayed using a while loop with the help of temp variable. This is shown below −
    void Display() {
    temp = front;
    if ((front == NULL) && (rear == NULL)) {
      cout<<"Queue is empty"<<endl;
      return;
    }
    cout<<"Queue elements are: ";
    while (temp != NULL) {
      cout<<temp->data<<" ";
      temp = temp->next;
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
 
    
    
