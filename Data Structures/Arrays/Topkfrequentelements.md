# Top K Frequent Elements

Problem Link : https://leetcode.com/problems/top-k-frequent-elements/

### Problem :

Given an integer array nums and an integer k, return the k most frequent elements. You may return the answer in any order.

### Example 1:

Input: nums = [1,1,1,2,2,3], k = 2 <br />
Output: [1,2]

### Example 2:

Input: nums = [1], k = 1 <br />
Output: [1]

### Solution

- In Python

```c
class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        count = {}
        freq = [[] for i in range(len(nums) + 1)]

        for n in nums:
            count[n] = 1 + count.get(n, 0)
        for n, c in count.items():
            freq[c].append(n)

        res = []
        for i in range(len(freq) - 1, 0, -1):
            for n in freq[i]:
                res.append(n)
                if len(res) == k:
                    return res

       
```
### Time Complexity - O(n)
