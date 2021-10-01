**Selection sort** 

**What is Selection sort?** 

It is a simple sorting algorithm and is an in-place comparison-based algorithm which sort the given array repeatedly by finding the minimum element from unsorted part and putting it at the beginning of the array.

**Algorithm** 

Step 1 -  Set the MIN to location 0.

Step 2 -  Search the minimum element in the array Step 3 -  Swap the value at location MIN

Step 4 -  Increment MIN to point to next element. Step 5 -  Repeat until array is sorted.

` `Following Example explain the above steps.

` `A[ ] = {8, 6, 3, 2, 5, 4}

` `Set MIN at index 0.

` `Find the minimum element in A[0 . . . 5] and swap it with element at  MIN.

` `A[ ] = {2, 6, 3, 8, 5, 4}

Increment MIN to index 1.

Find the minimum element in A[1 . . . 5] and swap it with element at MIN.

A[ ] = {2, 3, 6, 8, 5, 4}

Increment MIN to index 2.

Find the minimum element in A[2 . . . 5] and swap it with element at MIN.

A[ ] = {2, 3, 4, 8, 5, 6}

Increment MIN to index 3.

Find the minimum element in A[3 . . . 5] and swap it with element at MIN.

A[ ] = {2, 3, 4, 5, 8, 6}

Increment MIN to index 4.

Find the minimum element in A[4 . . . 5] and swap it with element at MIN.

A[ ] = {2, 3, 4, 5, 6, 8} We got the sorted array.

Here we can observe that for 6 elements we need 5 pass(iterations) so, for n passes (n-1) pass are required.

**Code:** 

#include<stdio.h>

#include<stdlib.h>

// This is swap function for swapping the minimum element with element at MIN. void swap(int \*x,int \*y) 

{ 

int temp=\*x; 

`    `\*x=\*y; 

`    `\*y=temp; 

} 

void SelectionSort(int A[],int n) 

{ 

int i,j,k; 

// i refers to index of MIN.

for(i=0;i<n-1;i++) 

`    `{

// j is used to traverse the array

/\* k is fixed at minimum element and if any element at j is minimum          then that at k only then we

` `move k to j \*/

for(j=k=i;j<n;j++) 

`        `{

if(A[j]<A[k]) k=j; 

`        `}

swap(&A[i],&A[k]); 

`    `}

} 

int main() 

{ 

int A[]={11,13,7,12,16,9,24,5,10,3},n=10,i; 

SelectionSort(A, n); for(i=0;i<10;i++) 

printf("%d ",A[i]); 

printf("\n"); return 0; 

} 

Output: 3 5 7 9 10 11 12 13 16 24 

**Time Complexity:**  

The time complexity for selection sort in worst case is O(n^2).

**Auxiliary Space:** 

It is O(1). This algorithm never makes more then O(n) swaps so it can’t cause memory issue.

**Stability :** 

The default implementation is not stable but it  can be made. **Adaptive:** 

This algorithm is not adaptive.
