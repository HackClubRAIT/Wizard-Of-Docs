# Given an array of intervals where intervals[i] = [starti, endi], merge all overlapping intervals, and return an array of the non-overlapping intervals that cover all the intervals in the input.

# PROGRAM: In python
def merge(intervals):
        if intervals==[]:
            return []
        result=[]
        intervals.sort()
        for interval in intervals:
            if result==[] or result[-1][1]<interval[0]:
                result.append(interval)
            else:
                result[-1][1]=max(result[-1][1],interval[1])
        return result

if __name__ == "__main__":
    intervals=[[1,3],[2,5]]
    print(merge(intervals))

# EXAPLINATION:
In the following problem, 
1) Sort all intervals in increasing order of start time.
2) Traverse sorted intervals starting from first interval, 
   do following for every interval.
      a) If current interval is not first interval and it 
         overlaps with previous interval, then merge it with
         previous interval. Keep doing it while the interval
         overlaps with the previous one.         
      b) Else add current interval to output list of intervals.
      
      
 For example, let the given set of intervals be {{1,3}, {2,4}, {5,7}, {6,8}}. The intervals {1,3} and {2,4} overlap with each other, so they should be merged and become {1, 4}. Similarly, {5, 7} and {6, 8} should be merged and become {5, 8}
 
# Other examples:
Input: intervals = [[1,3],[2,6],[8,10],[15,18]]
Output: [[1,6],[8,10],[15,18]]
Explanation: Since intervals [1,3] and [2,6] overlaps, merge them into [1,6].

Input: intervals = [[1,4],[4,5]]
Output: [[1,5]]
Explanation: Intervals [1,4] and [4,5] are considered overlapping.
