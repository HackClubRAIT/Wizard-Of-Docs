## Binary Search 

Binary Serach is a seearching algorithm that finds the position of a target value within a sorted array.Binary search compares the target value to the middle element of the array. If they are not equal, the half in which the target cannot lie is eliminated and the search continues on the remaining half, again taking the middle element to compare to the target value, and repeating this until the target value is found. If the search ends with the remaining half being empty, the target is not in the array.

## Algorithm

Binary search works on sorted arrays. Binary search begins by comparing an element in the middle of the array with the target value. If the target value matches the element, its position in the array is returned. If the target value is less than the element, the search continues in the lower half of the array. If the target value is greater than the element, the search continues in the upper half of the array. By doing this, the algorithm eliminates the half in which the target value cannot lie in each iteration

## Example
![binary](https://user-images.githubusercontent.com/66902249/135956846-8939b452-80e7-4969-8634-5292e2bfa2a2.png)

## Pseudocode
``` js
binarySearch(arr, size)
loop until beg is not equal to end
  midIndex = (beg + end)/2
    if (item == arr[midIndex] )
        return midIndex
    else if (item > arr[midIndex] ) 
        beg = midIndex + 1
    else                       
        end = midIndex - 1
```
## C++ Code  
``` cpp
#include<iostream>
using namespace std;
int binarySearch(int arr[],int l, int r,int x){
	if(r>=l)
	{
		int mid=l+(r-l)/2;
		if(arr[mid]==x){
			return mid;
		}
		if(arr[mid]>x){
			return binarySearch(arr, mid+1,r,x);
		}
		if(arr[mid]<x){
			return binarySearch(arr,l,mid-1,x);
		}
	}
	return -1;
}
int main(void)
{
	int arr[] = {1,3,5,7,8};
	int x=5;
	int n = sizeof(arr)/sizeof(arr[0]);
	int result= binarySearch(arr,0,n-1,x);
	(result == -1) ? cout << "Element is not present in array"
				: cout << "Element is present at index " << result+1;
	return -1;
}
```
## Complexity
`Best Case - O(1)`
`Worst Case - O(log n)`
`Average Case - O(log n)`										    
										    
