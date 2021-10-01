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
