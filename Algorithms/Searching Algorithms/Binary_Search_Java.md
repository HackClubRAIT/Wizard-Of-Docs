# Binary Search Algorithm in Java 

## Explanation: 
We use searching algorithm's for the purpose of finding the index of target element. We have various searching algorithms. In binary search algorithm 
we search a sorted array by repeatedly dividing the search interval in half to get the index of target element. 
</br>Consider example as follow:

**Input = [-21 -19 -18 1 4 6 8 9 11 18  22];**</br>
**Target = -18**

## Code:
```
static int binarySearch(int[] arr, int target) { //Declaring the binary search function 
        int start = 0;
        int end = arr.length - 1;

        while (start <= end) {
            // Find the index of middle element 
            int mid = start + (end - start) / 2; 

            // check if element at the mid index is greater or smaller or equal to the target element 
            if (target > arr[mid]) { 
                start = mid + 1;
            } else if (target < arr[mid]) {
                end = mid - 1;
            } else { //the case when arr[mid]==target
                return mid;  //ans found
            }
        }
        return 0; //when target not found return 0
    }
```

**Note: The while loop runs until the value of start index is less than equal to the end index. When start=end at that time mid=start=end thus arr[mid]
is the target. After that start>end which breaks the while loop.**

## Output 
Target element is found at index 2. 
```
    2
```
## Space Complexity:
> O(1)
## Time complexity:
> The time complexity of the binary search algorithm is O(log n).</br>
> The best-case time complexity would be O(1) when the central index would directly match the desired value.</br>
