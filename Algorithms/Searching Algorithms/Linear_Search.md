## Linear Search

Linear search algorithm is the most simplest algorithm to do sequential search and this technique iterates over the sequence and checks one item at a time, until the desired item is found or all items have been examined. There are two types of linear search methods :

* **Unordered Linear Search**

* **Ordered Linear Search**

### Unordered Linear Search:
Let us assume we are given an array where the order of elements is not known. That means the elements of the array are not sorted. In this case, to search for an element we have to scan the complete array and see if the element is there in the given list or not.

#### Pseudocode:

```cpp
int UnorderedLS(int A[], int n, int data) {
  for(int i = 0; i < n; i++) {
     if(A[i] == data)
       return i;
  }
  return -1;
}  
```
#### Time Complexity:
O(n) in the worst case we need to scan the complete array.
#### Space Complexity:
O(1)

### Ordered Linear Search:
If the elements of the array are already sorted (i.e user inputs sorted data) then in many cases we don't have to scan the complete array to see if it the element is there in the given array or not. In the pseudocode below, you can see that, at any point if the value at A[i] is greater than the data to be searched, then we just return -1 without searching the remaining array.

#### Pseudocode:

```cpp
int OrderedLS(int A[], int n, int data) {
  for(int i = 0; i < n; i++) {
     if(A[i] == data)
       return i;
     else if(A[i] > data)
       return -1;
  }
  return -1;
}  
```
#### Time Complexity:
O(n) in the worst case we need to scan the complete array.
#### Space Complexity:
O(1)

### Program 

```cpp
#include<iostream>
 
using namespace std;
 
int main()
  {
    int a[20],n,x,i,p=0;
    cout<<"Enter the size of the array max[20]";
    cin>>n;
    cout<<"\nEnter elements of the array\n";
    for(i=0;i<n;++i)
      cin>>a[i];
    cout<<"\nEnter element to search:";
    cin>>x;
    for(i=0;i<n;++i)
      {
        if(a[i]==x)
        {
          p=1;
          break;
        }
      }
      if(p)
          cout<<"\nElement is found at position "<<i+1;
      else
          cout<<"\nElement not found";
      return 0;
  }
```
