# Linked List
● A linked list is a linear data structure where each element is a separate object.\
● Each element or node of a list is comprising of two items:
<pre> 1 Data
 2 Pointer(reference) to the next node.</pre>
● A linked list is a linear data structure, in which the elements are not stored at
contiguous memory locations.\
● The first node of a linked list is known as head.\
● The last node of a linked list is known as tail.\
● The last node has a reference to null.

## Linked list class
```
class Node {
public :
int data; // to store the data stored
Node *next; // to store the address of next pointer
Node(int data) {
this -> data = data;
next = NULL;
}
```
Note: The first node in the linked list is known as Head pointer and the last node is
referenced as Tail pointer. We must never lose the address of the head pointer as it
references the starting address of the linked list and is, if lost, would lead to losing of the
list.

## Printing of the linked list
To print the linked list, we will start traversing the list from the beginning of the list(head)
until we reach the NULL pointer which will always be the tail pointer. Follow the code
below:
```
void print(Node *head) {
Node *tmp = head;
while(tmp != NULL) {
cout << tmp->data << “ “;
tmp = tmp->next;
}
cout << endl;
}
```

## Types Of LinkedList
There are generally three types of linked list:\
● Singly: Each node contains only one link which points to the subsequent node in the
list.\
● Doubly: It’s a two-way linked list as each node points not only to the next pointer
but also to the previous pointer.\
● Circular: There is no tail node i.e., the next field is never NULL and the next field for
the last node points to the head node.

## Taking Input in a list
```
Node* takeInput() {
int data;
cin >> data;
Node *head = NULL;
Node *tail = NULL;
while(data != -1) { // -1 is used for terminating
Node *newNode = new Node(data);
if(head == NULL) {
head = newNode;
tail = newNode;
}
else {
tail -> next = newNode;
tail = tail -> next;
// OR
// tail = newNode;
}
cin >> data;
}
return head;
}
```
To take input in the user, we need to keep few things in the mind:\
● Always use the first pointer as the head pointer.\
● When initialising the new pointer the next pointer should always be referenced to
NULL.\
● The current node’s next pointer should always point to the next node to connect the
linked list.

## Operations on Linked Lists

### Insertion
There are 3 cases:\
● Case 1: Insert node at the last\
This can be directly done by normal insertion as discussed above while we took input.\

● Case 2: Insert node at the beginning\
○ First-of-all store the head pointer in some other pointer.\
○ Now, mark the new pointer as the head and store the previous head to the\
next pointer of the current head.\
○ Update the new head.\

● Case 3: Insert node anywhere in the middle\
○ For this case, we always need to store the address of the previous pointer as
well as the current pointer of the location at which new pointer is to be
inserted.\
○ Now let the new inserted pointer be curr. Point the previous pointer’s next to
curr and curr’s next to the original pointer at the given location.\
○ This way the new pointer will be inserted easily.

```
Node* insertNode(Node *head, int i, int data) {
Node *newNode = new Node(data);
int count = 0;
Node *temp = head;
if(i == 0) { //Case 2
newNode -> next = head;
head = newNode;
return head;
}
while(temp != NULL && count < i - 1) { //Case 3
temp = temp -> next;
count++;
}
if(temp != NULL) {
Node *a = temp -> next;
temp -> next = newNode;
newNode -> next = a;
}
return head; //Returns the new head pointer after insertion
}
```

## Deletion of node
There are 2 cases:\
● Case 1: Deletion of the head pointer\
In order to delete the head node, we can directly remove it from the linked list by
pointing the head to the next.\
● Case 2: Deletion of any node in the list\
In order to delete the node from the middle/last, we would need the previous
pointer as well as the next pointer to the node to be deleted. Now directly point the
previous pointer to the current node’s next pointer.




