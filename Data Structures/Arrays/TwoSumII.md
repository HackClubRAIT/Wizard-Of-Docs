# Two Sum II

Problem Link : https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/

Given a 1-indexed array of integers numbers that is already sorted in non-decreasing order . Find two numbers such that they add up to a specific target number.<br /> Let these two numbers be numbers[index1] and numbers[index2] where 1 <= index1 < index2 <= numbers.length.
Return the indices of the two numbers, index1 and index2, added by one as an integer array [index1, index2] of length 2.
You may not use the same element twice.


### Example :

Input: numbers = [2,7,11,15], target = 9 <br />
Output: [1,2] <br />
Explanation: The sum of 2 and 7 is 9. Therefore, index1 = 1, index2 = 2. We return [1, 2].


### Simple Python Solution with HashMap

This method works in O(n) time if range of numbers is known. <br />
Let sum be the given sum and A[] be the array in which we need to find pair.

#### Algorithm

1) Initialize Binary Hash Map M[] = {0, 0} <br/>
2) Do following for each element A[i] in A[] <br/>
   (a) If M[x - A[i]] is set then print the pair (A[i], x A[i]) <br/>
   (b) Set M[A[i]]

#### Implementation
```c
class Solution:
    def twoSum(self, numbers: List[int], target: int) -> List[int]:
        subtract = {}
        for i, num in enumerate(numbers):
            if num in subtract:
                return [subtract[num]+1, i+1]
            subtract[target-num] = i
        return []
```
#### Time Complexity - O(n)
#### Space Complexity - O(R) where R is range of integers

### Using Two pointers

#### Algorithm:
hasArrayTwoCandidates (A[], ar_size, sum)

1) Initialize two index variables to find the candidate
elements in the sorted array. <br />
    (a) Initialize first to the left most index: l = 0 <br />
    (b) Initialize second the right most index: r = ar_size-1 <br />
2) Loop while l < r. <br />
    (a) If (A[l] + A[r] == sum) then return 1 <br />
    (b) Else if( A[l] + A[r] < sum ) then l++ <br />
    (c) Else r-- <br />
3) No candidates in whole array - return 0

#### Example:
Let Array be A= {-8, 1, 4, 6, 10, 45} and sum to find be 16

Initialize l= 0, r = 5  <br />
 A[l] + A[r] ( -8 + 45) > 16 => decrement r. Nowr = 10 <br />
 A[l] + A[r] ( -8 + 10) < 2 => increment l. Nowl= 1 <br />
 A[l] + A[r] ( 1 + 10) < 16 => increment l. Nowl= 2 <br />
 A[l] + A[r] ( 4 + 10) < 14 => increment l. Nowl= 3 <br />
 A[l] + A[r] ( 6 + 10) == 16 => Found candidates (return [l+1, r+1])

#### Implementation

```c
class Solution:
    def twoSum(self, numbers: List[int], target: int) -> List[int]:
        l, r = 0, len(numbers) - 1

        while l < r:
            curSum = numbers[l] + numbers[r]

            if curSum > target:
                r -= 1
            elif curSum < target:
                l += 1
            else:
                return [l + 1, r + 1]
```

#### Time Complexity - O(n)
#### Space Complexity - O(1)
