# ⭐ Ternary Search

>Contributed by <a href="https://github.com/saikatsahana77">@saikatsahana77</a>

Ternary search is a divide and conquer algorithm that can be used to find an element in an array. It is similar to binary search where we divide the array into two parts but in this algorithm, we divide the given array into three parts and determine which has the key (searched element). We can divide the array into three parts by taking mid1 and mid2 which can be calculated as shown below. Initially, l and r will be equal to 0 and n-1 respectively, where n is the length of the array. 
> Note: Input must be in sorted order
#### Example: 

##### Input: `[1, 2, 3, 4, 5, 6, 7, 8, 9, 10], 6` 
###### input1: `array`
###### input2: `Target`

##### Explanation: 
`[1, 2, 3, 4, 5, 6, 7, 8, 9, 10]`<br/>
`Search ternm: 6`

## Steps to Perform Ternary Serach:

- First, we compare the key with the element at mid1. If found equal, we return mid1.
- If not, then we compare the key with the element at mid2. If found equal, we return mid2.
- If not, then we check whether the key is less than the element at mid1. If yes, then recur to the first part.
- If not, then we check whether the key is greater than the element at mid2. If yes, then recur to the third part.
- If not, then we recur to the second (middle) part.

## Visual Explanation:
![ternary](https://media.geeksforgeeks.org/wp-content/uploads/ternaryS-3.png)<br/>


### Pseudo Code (Iterative Approach)
``` py
function ternary_search(ar, n, key) is
    l := 0
    r := n − 1
    while r >= l do
        if key == ar[mid1]:
            return mid1
        if key == mid2:
            return mid2
        mid1 = l + (r - l) //3
        mid2 = r - (r - l) //3
        if key < ar[mid1]:
            r = mid1 - 1
        else if key > ar[mid2]:
            l = mid2 + 1
        else:
            l = mid1 + 1
            r = mid2 - 1
    return unsuccessful
```

### Code `Python` (Iterative Approach)
``` python 3 
def ternarySearch(r, key, ar):
	while r >= l:
        # Setting the upper and lower bounds
		l = 0 
        r = r-1 

		# Find mid1 and mid2
		mid1 = l + (r-l) // 3
		mid2 = r - (r-l) // 3

		# Check if key is at any mid
		if key == ar[mid1]:
			return mid1
		if key == mid2:
			return mid2

		# Since key is not present at mid,
		# Check in which region it is present
		# Then repeat the search operation in that region
		if key < ar[mid1]:
			# key lies between l and mid1
			r = mid1 - 1
		elif key > ar[mid2]:
			# key lies between mid2 and r
			l = mid2 + 1
		else:
			# key lies between mid1 and mid2
			l = mid1 + 1
			r = mid2 - 1

	# key not found
	return -1

# Driver code
if __name__ == '__main__':
    # Getting the sorted list
    ar = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]

    # Length of list
    r = len(ar)

    ### Test 1 ###

    # Checking for 5
    # Key to be searched in the list
    key = 5

    # Search the key using ternary search
    p = ternarySearch(r, key, ar)

    # Print the result
    print(p)

    ### Test 2 ###

    # Checking for 50
    # Key to be searched in the list
    key = 50

    # Search the key using ternary search
    p = ternarySearch(r, key, ar)

    # Print the result
    print(p)
```

### Pseudo Code (Recursive Approach)
``` py
function ternary_search(ar, n, key) is
    l := 0
    r := n − 1
    if r >= l 
        if key == ar[mid1]:
            return mid1
        if key == mid2:
            return mid2
        mid1 = l + (r - l) //3
        mid2 = r - (r - l) //3
        if key < ar[mid1]:
            ternary_search(l, mid1 - 1, key, ar)
        else if key > ar[mid2]:
            ternarySearch(mid2 + 1, r, key, ar)
        else:
            return ternarySearch(mid1 + 1, mid2 - 1, key, ar)
    return unsuccessful
```
### Code `Python` (Recursive Approach)
``` python 3
# Function to perform Ternary Search
def ternarySearch(r, key, ar):

	if (r >= l):
        # Setting the upper and lower bounds
		l = 0 
        r = r-1

		# Find the mid1 and mid2
		mid1 = l + (r - l) //3
		mid2 = r - (r - l) //3

		# Check if key is present at any mid
		if (ar[mid1] == key):
			return mid1
		
		if (ar[mid2] == key):
			return mid2
		
		# Since key is not present at mid,
		# check in which region it is present
		# then repeat the Search operation
		# in that region
		if (key < ar[mid1]):

			# The key lies in between l and mid1
			return ternarySearch(l, mid1 - 1, key, ar)
		
		elif (key > ar[mid2]):

			# The key lies in between mid2 and r
			return ternarySearch(mid2 + 1, r, key, ar)
		
		else:

			# The key lies in between mid1 and mid2
			return ternarySearch(mid1 + 1,
								mid2 - 1, key, ar)
		
	# Key not found
	return -1

# Driver code
if __name__ == '__main__':
    # Getting the sorted array
    ar = [ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 ]

    # Starting index
    l = 0

    # length of array
    r = len(ar)

    ### Test 1 ###
    
    # Checking for 5
    # Key to be searched in the array
    key = 5

    # Search the key using ternarySearch
    p = ternarySearch(r, key, ar)

    # Print the result
    print(p)

    ### Test 2 ###

    # Checking for 50
    # Key to be searched in the array
    key = 50

    # Search the key using ternarySearch
    p = ternarySearch(r, key, ar)

    # Print the result
    print(p)
```


#### ⏲️ Time Complexities:
`O(log`<sub>`3`</sub>` n) (array is divided into 1/3rd of it's size at each iteration/recursive call).`
<br/>
#### 👾 Space complexities:
`O(1) (no extra space is used, no extra array space is used).`