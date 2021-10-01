# MERGE SORT

Merge Sort is a Divide and Conquer algorithm.
It works by dividing an input array into two parts, calling itself for the two parts and then merging those two sorted arrays together.


## Merge Sort Algorithm

```
MergeSort(arr[], left,  right)
  If left < right
    1 Find the middle point of the array to divide it into two equal parts. 
    2 Call MergeSort for first part (or left side) of the array. 
    3 Call MergeSort for second part (or right side) of the array.
    4 Call Merge function to merge both the sorted parts of the array.

```

Here, MergeSort is a function which divides an array into two equal parts then calls itself for those two parts. Those sorted parts are then merged using Merge function. If 'arr' is the array, 'm' is the middle point of an array, 's' is the starting point of an array, 'e' is the ending point of the array 'arr' in Merge(arr, m, s, e), the arrays arr[s...m] and arr[m+1...e] will be assumed sorted and the Merge function  will merge those two subarrays into one.

## Code

```
void merge(int *Arr, int start, int mid, int end) {
	// 'temp' is a temporary array.
	int temp[end - start + 1];

	int i = start, j = mid+1, k = 0;

	// Traversing both the arrays and for each iteration, smaller of both the elements is being added in 'temp' array.
	while(i <= mid && j <= end) {
		if(Arr[i] <= Arr[j]) {
			temp[k] = Arr[i];
			k++; 
      i++;
		}
		else {
			temp[k] = Arr[j];
			k++; 
      j++;
		}
	}

	// Adding left elements from first half. 
	while(i <= mid) {
		temp[k] = Arr[i];
		k++;
    i++;
	}

	// Adding left elements from second half. 
	while(j <= end) {
		temp[k] = Arr[j];
		k++; 
    j ++;
	}

	// Copying elements from 'temp' array to original array 'Arr'.
	for(i = start; i <= end; i ++) {
		Arr[i] = temp[i - start]
	}
}

// 'Arr' is an integer array.
// 'start' and 'end' are the starting and ending index of array 'Arr'.

void mergeSort(int *Arr, int start, int end) {

	if(start < end) {
    // 'mid' is the middle point of the array 'Arr'.
		int mid = (start + end) / 2;
    // Calling mergeSort for first half of the array 'Arr'.
		mergeSort(Arr, start, mid); 
    // Calling mergeSort for second half of the array 'Arr'.
		mergeSort(Arr, mid+1, end);
    // Calling merge function to merge to two halves of the array Arr, i.e, Arr[start...mid] and Arr[mid+1...end].
		merge(Arr, start, mid, end);
	}

}

```

## Time Complexity

The time complexity for Merge Sort is O(nLogn) in all 3 cases (worst, average and best).

<br>

### Auxiliary Space:

Merge Sort takes O(n) auxiliary space.

<br>

### Algorithmic Paradigm:

Merge Sort uses Divide and Conquer approach.

### Stability

Merge Sort is stable by nature.

### Sorting In Place:

Merge Sort is not in place because it requires additional memory space to store the auxiliary arrays. 