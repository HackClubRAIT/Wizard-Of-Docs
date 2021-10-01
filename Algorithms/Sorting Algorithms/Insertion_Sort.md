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
#include <iostream.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the total elements" << endl;
    cin >> n;

    int arr[n];

	// taking input

    cout << "Enter the elements" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

	// sorting the array

    for (int i = 1; i < n; i++)
    {
        int current = arr[i];
        int j = i - 1;

        while (arr[j] > current && j >= 0)
        {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = current;
    }

    cout << "The sorted array :" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

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
