# ⭐ Binary search

In computer science, binary search, also known as half-interval search, logarithmic search, or binary chop, is a search algorithm that finds the position of a target value within a sorted array. Binary search compares the target value to the middle element of the array. If they are not equal, the half in which the target cannot lie is eliminated and the search continues on the remaining half, again taking the middle element to compare to the target value, and repeating this until the target value is found. If the search ends with the remaining half being empty, the target is not in the array.
> Input must be in sorted order
#### Example 1: 

##### Input: `[20, 30, 40, 50, 80, 90, 100], 40` 
###### input1: `array`
###### input2: `Target`

##### Explanation: 
`[20, 30, 40, 50, 80, 90, 100]`<br/>
consider above array as a `Binary search tree`

![tree](https://upload.wikimedia.org/wikipedia/commons/f/f4/Binary_search_example_tree.svg)<br/>
Here, middle element be root of a tree and left part is left sub tree and right part is right sub tree<br/>
calculate middle index and compare it with target<br/>
if target is equal to value at middle index then simply return the current index<br/>
if value at current index is greater then target then we can conclude that our target is present in left half of array<br/>
if value at current index is less then target then we can conclude that our target is present in right half of array<br/>
perform same operation again to reach at target<br/>

##### Visual explanation
```py
      Target = 40
      [20, 30, 40, 50, 80, 90, 100] -> mid [50]  ( target < 50 ) // skipping right half of array 
                    |          
               [20, 30, 40]  -> mid [30]  (target > 30)  // skipping left half of array
                    |
                   [40] -> mid [40]  (target == 40)  // return index
                   
             output -> 2
```



##### Output: `2`


### Pseudo Code
``` js
function binary_search(A, n, T) is
    L := 0
    R := n − 1
    while L ≤ R do
        m := floor((L + R) / 2)
        if A[m] < T then
            L := m + 1
        else if A[m] > T then
            R := m − 1
        else:
            return m
    return unsuccessful
```

### Code `Python`
``` py
def binarySearch(arr, size, target):
    leftBound  = 0
    rightBound = size - 1
    
    while leftBound <= rightBound:
      mid = leftBound + (rightBound - leftBound) // 2  # also take care of overflow situation
      if arr[mid] < target:
          leftBound = mid + 1
      elif arr[mid] > target:
          rightBound := mid − 1
      else:
          return mid
    return -1
```
### `Output` 
Target element `40` is found at `index 2`. </br>
Output: `2`
</br>
#### Example 2: 

##### Input: `[-21 -19 -18 1 4 6 8 9 11 18 22], -18` 
###### input1: `array`
###### input2: `Target`
### Code `Java`
```java
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
>Note: The while loop runs until the value of start index is less than equal to the end index. When start=end at that time mid=start=end thus arr[mid]
>is the target. After that start>end which breaks the while loop.

### `Output` 
Target element `-18` is found at `index 2`. </br>
Output: `2`

#### ⏲️ Time Complexities:
 `The time complexity of the binary search algorithm is O(log n).`</br>
 `The best-case time complexity would be O(1) when the central index would directly match the desired value.`</br>
<br/>
#### 👾 Space complexities:
`O(1)`
