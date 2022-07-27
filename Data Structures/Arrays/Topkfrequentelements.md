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

### Explanation 

Sample input: [1,1,1,2,2,3] and k = 2

1) Use map/dictionary and store the frequency of the number and maximum frequency of all the numbers. <br/>
  So at the end of this operation, for the sample problem, map would look like this: 1 → 3, 2 → 2, 3 →1. Also, maximum frequency will be 3. <br/>
2) Now, since, we cannot use regular sorting approach, another thing that comes to mind is, bucket sort. <br/>
3) Create a multi-storage bucket with (maximum frequency + 1)as its size. Now, based on frequency of the word, put it in the appropriate bucket level. <br/> In our example, Put 1 at level 3, put 2 at level 2 and put 3 at level 1. <br/>
4) There might be more than one numbers with the same frequency. So, we can use linked list to store more than one elements at the same level. <br/>
5) Now, iterate over the bucket elements and keep a counter to match with the input value k.

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
### Space Complexity - O(n)
