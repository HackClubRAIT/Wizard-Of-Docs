# ⭕ **Question:** 
## Segregate Even and Odd numbers in an Array


> Time Complexity = O(n) & Space Complexity = O(1)
> 
## ⭕ Methodology:
#### Using Counter method, Iterate the array and check if the number is even, if yes swap the number else increment the counter.

## ⭕ Code:
```py
def segregateEvenOdd(arr,n):
    i = -1
    j = 0
    while j != n:
        if arr[j] % 2 == 0:
            i += 1
            arr[i],arr[j] = arr[j],arr[i]
        j += 1
    return arr

# Driver's Code
arr = [7, 5, 8, 4, 3, 6, 2, 11, 9, 2]
n = len(arr)
print(segregateEvenOdd(arr, n))
```
