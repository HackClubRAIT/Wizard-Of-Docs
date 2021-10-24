# Heap Sort

<br>

## What is an Heap Sort ?

Heap Sort is a sorting technique which uses Binary Heap Data Structure to sort an array. <br>
Heap Sort is similar to selection sort. In this first the minimum element is fetched and placed at beginning.
<br>
<br>

## Algorithm

To arrange list of elements in ascending order using heap sort algorithm is done as follows:

1. With the given list of elements construct Binary tree.
2. Now, the Binary tree should be transformed in a Minimum Heap.
3. By Using the Heapify method the root element must be deleted from the Minimum Heap.
4. A sorted list must be created and the deleted element should be put in it.
5. Until the minimum heap becomes empty keep on repeating the same procedure.
6. Lastly the sorted list must be displayed.

<br><br>

## Code:

Here is the code for Heap Sort using C++ <br>
<br>

```

#include <iostream>

using namespace std;

void heapify(int arr[], int n, int i)
{
	int largest = i; 
	int l = 2 * i + 1; 
	int r = 2 * i + 2; 

	if (l < n && arr[l] > arr[largest])
		largest = l;

	if (r < n && arr[r] > arr[largest])
		largest = r;

	if (largest != i) {
		swap(arr[i], arr[largest]);

		heapify(arr, n, largest);
	}
}

void heapSort(int arr[], int n)
{
	
	for (int i = n / 2 - 1; i >= 0; i--)
		heapify(arr, n, i);

	for (int i = n - 1; i > 0; i--) {
	
		swap(arr[0], arr[i]);

		heapify(arr, i, 0);
	}
}

void printArray(int arr[], int n)
{
	for (int i = 0; i < n; ++i)
		cout << arr[i] << " ";
	cout << "\n";
}

int main()
{
	int arr[] = { 12, 11, 13, 5, 6, 7 };
	int n = sizeof(arr) / sizeof(arr[0]);

	heapSort(arr, n);

	cout << "Sorted array is \n";
	printArray(arr, n);
}



```

<br>

```
Input : 7, 12, 11, 13, 5, 6
Output : 5, 6, 7, 11, 12, 13
```

<br>

## Time Complexity

The time complexity for heap sort is O(nlog n).

<br>

## Space Complexity

The space complexity for heap sort is O(1).

<br>

### Auxiliary Space:

Heap Sort uses O(1) auxiliary space.

<br>

### Stability

Heap Sort is not stable by nature.

<br>

### Sorting In Place:

Heap sort is inplace algorithm.

<br>

### Advantages of Heap sort:

1. Heap Sort is efficient.
2. In Heap Sort memory usage is minimal.
3. Heap Sort is simpler to understand.
