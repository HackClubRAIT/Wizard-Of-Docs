# Insertion Sort

<br>

## What is an Insertion Sort ?

Insertion sort is a simple sorting algorithm that works similar to the way you sort playing cards in your hands. The array is virtually split into a sorted and an unsorted part. <br>
Values from the unsorted part are picked and placed at the correct position in the sorted part.
<br>
<br>

## Algorithm

To sort an array of size n in ascending order:

1. Iterate from arr[1] to arr[n] over the array.
2. Compare the current element (key) to its predecessor.
3. If the key element is smaller than its predecessor, compare it to the elements before. Move the greater elements one position up to make space for the swapped element.

<br><br>

## Code:

Here is the code for Insertion Sort using C++ <br>
<br>

```
#include <bits/stdc++.h>
using namespace std;


/* Function to sort an array using insertion sort */

void insertionSort(int arr[], int n)
{
	int i, key, j;
	for (i = 1; i < n; i++)
	{
		key = arr[i];
		j = i - 1;

		/* Move elements of arr[0..i-1], that are
		greater than key, to one position ahead
		of their current position */

		while (j >= 0 && arr[j] > key)
		{
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = key;
	}
}

// A utility function to print an array of size n

void printArray(int arr[], int n)
{
	int i;
	for (i = 0; i < n; i++)
		cout << arr[i] << " ";
	cout << endl;
}


/* Driver code */
int main()
{
	int arr[] = { 12, 11, 13, 5, 6 };
	int n = sizeof(arr) / sizeof(arr[0]);

	insertionSort(arr, n);
	printArray(arr, n);

	return 0;
}


```

<br>

```
Input : 12, 11, 13, 5, 6
Output : 5, 6, 11, 12, 13
```

<br>

## Time Complexity

The time complexity for insertion sort is O(n^2) in the worst case

<br>

### Auxiliary Space:

The sorting algorithm takes a constant space O(1)

<br>

### Boundary Cases:

Insertion sort takes maximum time to sort if elements are sorted in reverse order. And it takes minimum time (Order of n) when elements are already sorted.

<br>

### Algorithmic Paradigm:

Insertion sort uses the Incremental Approach

<br>

### Sorting In Place:

The sorting are done in place to avoid extra memory.
