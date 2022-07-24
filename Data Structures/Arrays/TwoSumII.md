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
### Using Two pointers

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

### Time Complexity - O(n)
### Space Complexity - O(1)
