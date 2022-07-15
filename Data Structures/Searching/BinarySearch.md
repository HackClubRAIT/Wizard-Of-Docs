## Binary Search 

Binary Search is a searching algorithm that is used in sorted arrays to find the find a specific element's position . In binary search first we find the middle element of the array and then check whether the element is equal to middle element or not if equal return the position of middle element if not than check whether is greater than or less than the moddle element if less than then the new array is from starting element to the (middle element-1) element position and if greater than then new array is from (middle element+1) element position to the last element and this process is followed until we got the required result and if not found return not present is the array.

## Works On
Divide and conquer rule

## Example
![binary](https://user-images.githubusercontent.com/66902249/135956846-8939b452-80e7-4969-8634-5292e2bfa2a2.png)

## Pseudocode
``` js
binarySearch(arr, size)
loop until left is not equal to right
  midIndex = (left + right)/2
    if (item == arr[midIndex] )
        return midIndex
    else if (item > arr[midIndex] ) 
        left = midIndex + 1
    else                       
        right = midIndex - 1
```
## C++ Code  
``` cpp
#include<iostream>
using namespace std;
int binarySearch(int arr[],int left, int right,int x){
	if(right>=l)
	{
		int mid=left+(right-l)/2;
		if(arr[mid]==x){
			return mid;
		}
		if(arr[mid]>x){
			return binarySearch(arr, mid+1,right,x);
		}
		if(arr[mid]<x){
			return binarySearch(arr,left,mid-1,x);
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
										    
