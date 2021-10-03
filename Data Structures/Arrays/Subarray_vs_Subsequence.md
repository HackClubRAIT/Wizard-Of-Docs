# Subarrays Vs Subsequence

## Subarays

Subarrays are arrays within another array. 
It contains contiguous elements.
Example: Let's consider an array 
A = {1,2,3,4,5}
Then the subarray of given array are {}, {1}, {2}, {3}, {4}, {5}, {1,2}, {1,2,3}, {1,2,3,4}, {1,2,3,4,5}, {2,3}, {2,3,4}, {2,3,4,5}, {3,4}, {3,4,5}, {4,5}. 
Number of Subarray an array of 'n' element can have (excluding empty subarray) = (n*(n+1))/2 . 

Program to print all non empty subarrays:

#include<bits/stdc++.h>
using namespace std;

int main() {
    int arr[5] = {1,2,3,4,5};
    for (int i=0; i<5; i++) {
        for (int j=i; j<5; j++) {
            for (int k=i; k<=j; k++) {
                cout<<arr[k]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}


## Subsequence

Subsequence is a sequence that can be derived from an array.
Need not to be contiguous.
It contains zero or more elements without changing its order of other remaining elements.
Example: Let's consider an array 
A = {1,2,3,4,5}
Then the subsequence of given array are {}, {1}, {2}, {3}, {4}, {5}, {1,2}, {1,3}, {2,3}, {1,2,3}, {1,4}, {2,4}, {1,2,4}, {3,4}, {1,3,4}, {2,3,4}, {1,2,3,4}, {1,5}, {2,5}, {1,2,5}, {3,5}, {1,3,5}, {2,3,5}, {1,2,3,5}, {4,5}, {1,4,5}, {2,4,5}, {1,2,4,5}, {3,4,5}, {1,3,4,5}, {2,3,4,5}, {1,2,3,4,5}.
Number of Subsequence an array of 'n' element can have (excluding empty subsequence) = (2^n - 1).

Program to print all non empty subsequence:

#include<bits/stdc++.h>
using namespace std;

int main() {
    int arr[5] = {1,2,3,4,5};
    int n = 5;
    int noOfSubseq = pow(2, n);  //to find no of non zero subsequence i.e. (2^n-1)
    for (int i=1; i<noOfSubseq; i++) {
        for(int j=0; j<n; j++) {
            // Check if jth bit in the i is set.
            // If set then print jth element from arr[].
            if (i & (1<<j)) {
                cout<<arr[j] <<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}

Every Subarray is a sub Subsequence, but every Subsequence is not a Subarray.
