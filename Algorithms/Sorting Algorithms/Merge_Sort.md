# ⭐ MERGE SORT

Merge Sort is a Divide and Conquer algorithm.
It works by splitting input array into two halves, making a recursive call and then merging the sorted subarrays. 


## Merge Sort Algorithm

```
MergeSort(arr[], l,  r)
If r > l
     1. Find the middle point to divide the array into two halves:  
             middle m = l+ (r-l)/2
     2. Call mergeSort for first half:   
             Call MergeSort(arr, l, m)
     3. Call mergeSort for second half:
             Call MergeSort(arr, m+1, r)
     4. Merge the two halves sorted in step 2 and 3:
             Call merge(arr, l, m, r)

```

Here, MergeSort function divides the input array into two halves, calls itself for the two halves, and then merges the two sorted halves. The merge() function is used for merging two halves of te array. The merge(arr, l, m, r) assumes that arr[l..m] and arr[m+1..r] are two sorted arrays and then merges those two sorted arrays. 

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
			k += 1; i += 1;
		}
		else {
			temp[k] = Arr[j];
			k += 1; j += 1;
		}
	}

	// Adding left elements from first half. 
	while(i <= mid) {
		temp[k] = Arr[i];
		k += 1; i += 1;
	}

	// Adding left elements from second half. 
	while(j <= end) {
		temp[k] = Arr[j];
		k += 1; j += 1;
	}

	// Copying elements from 'temp' array to original array 'Arr'.
	for(i = start; i <= end; i += 1) {
		Arr[i] = temp[i - start]
	}
}

// 'Arr' is an integer array.
// 'start' and 'end' are the starting and ending index of array 'Arr'.

void mergeSort(int *Arr, int start, int end) {

	if(start < end) {
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