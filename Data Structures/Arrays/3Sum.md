# 3Sum
This problem in some ways is a continuation of the two sum problem. So, if you have not yet solved the two Sum problem then you have to do so because it will help you understand the 3 Sum problem better.

Problem Link : https://leetcode.com/problems/3sum/

### Problem :

Given an integer array nums , return all the triplets [nums[i], nums[j], nums[k]] such that i != j, i != k, and j != k, and <br/> nums[i] + nums[j] + nums[k] == 0.

Notice that the solution set must not contain duplicate triplets.

### Example 1:

Input: nums = [-1,0,1,2,-1,-4] <br/>
Output: [[-1,-1,2],[-1,0,1]]

### Example 2:

Input: nums = [0,1,1] <br/>
Output: [] <br/>
Explanation: The only possible triplet does not sum up to 0.

### Solution : Efficient Solution
- Using three pointers
- The idea is to sort the array first, then run two loops to process the triplets. We fix the outer loop and move the two pointers (indexes) of the inner loop inwards to arrive at the result.

### Algorithm

1) Sort the given array. <br/>
2) Loop over the array and fix the first element of the possible triplet, arr[i]. <br/>
3) Then fix two pointers, one at i + 1 and the other at n – 1. And look at the sum, <br/>
    a) If the sum is smaller than the required sum, increment the first pointer. <br/>
    b) Else, If the sum is bigger, Decrease the end pointer to reduce the sum. <br/>
    c) Else, if the sum of elements at two-pointer is equal to given sum then print the triplet and break.
 

### Implementation

#### In Python
```c
class Solution:
    def threeSum(self, nums: List[int]) -> List[List[int]]:
        res = []
        nums.sort()

        for i, a in enumerate(nums):
            if i > 0 and a == nums[i - 1]:
                continue

            l, r = i + 1, len(nums) - 1
            while l < r:
                threeSum = a + nums[l] + nums[r]
                if threeSum > 0:
                    r -= 1
                elif threeSum < 0:
                    l += 1
                else:
                    res.append([a, nums[l], nums[r]])
                    l += 1
                    while nums[l] == nums[l - 1] and l < r:
                        l += 1
        return res
```
### Time Complexity - O(n^2)
### Space Complexity - O(1)
