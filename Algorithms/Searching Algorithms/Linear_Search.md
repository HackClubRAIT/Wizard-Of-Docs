## Linear Search

This is the simplest method for searching. In this technique of searching, the element to be found in searching the elements to be found is searched sequentially in the list. This method can be performed on a **sorted or an unsorted list (usually arrays)**. In case of a sorted list searching starts from **0th** element and continues until the element is found from the list or the element whose value is greater than (assuming the list is sorted in ascending order), the value being searched is reached.
As against this, searching in case of unsorted list also begins from the 0th element and continues until the element or the end of the list is reached.

### Time Complexity

Linear search makes n/2 comparisons on an average where n is the number of elements. At the most, linear search takes n comparisons. So, overall complexity in the worst case of linear search algorithm is **O(n)**.

### Algorithm
* LINEAR_SEARCH(A, N, VAL)

* Step 1: [INITIALIZE] SET POS = -1

* Step 2: [INITIALIZE] SET I = 1

* Step 3: Repeat Step 4 while I<=N

* Step 4: IF A[I] = VAL
 SET POS = I
 PRINT POS
 Go to Step 6
 [END OF IF]
 SET I = I + 1
 [END OF LOOP]

* Step 5: IF POS = -1
PRINT " VALUE IS NOT PRESENTIN THE ARRAY "
[END OF IF]

* Step 6: EXIT

```cpp
#include<iostream>
 
using namespace std;
 
int main()
  {
    int a[20],n,x,i,flag=0;
    cout<<"How many elements?";
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
          flag=1;
          break;
        }
      }
      if(flag)
          cout<<"\nElement is found at position "<<i+1;
      else
          cout<<"\nElement not found";
      return 0;
  }
```
