## Description 
Radix sort is a sorting technique which is different from the concept of bubble sort,selection,merge ot quisk sort as radix sort is done by depending on the digits of the elements from the right most bit to the left most bit and by sorting the positional digits at 
n<sup>th</sup> element of the array.
Radix sort is a non-comparison based sorting algorithm.It depends on the place values of the numbers and grouped together according to the place values and thus sorting is performed.

## Code  
```cpp

#include <iostream>
using namespace std;


int getMax(int arr[], int size) {
  int max = arr[0];
  for (int i = 1; i < size; i++)
    if (arr[i] > max)
      max = arr[i];
  return max;
}


void CountingSort(int arr[], int size, int place) {
  const int max = 10;
  int output[size];
  int count[max];

  for (int i = 0; i < max; ++i)
    count[i] = 0;


  for (int i = 0; i < size; i++)
    count[(arr[i] / place) % 10]++;


  for (int i = 1; i < max; i++)
    count[i] += count[i - 1];


  for (int i = size - 1; i >= 0; i--) {
    output[count[(arr[i] / place) % 10] - 1] = arr[i];
    count[(arr[i] / place) % 10]--;
  }

  for (int i = 0; i < size; i++)
    arr[i] = output[i];
}

void RadixSort(int arr[], int size) {

  int max = getMax(arr, size);

 
  for (int place = 1; max / place > 0; place *= 10)
    CountingSort(arr, size, place);
}


void printArray(int array[], int size) {
  for (int i = 0; i < size; i++)
    cout << array[i] << " ";
  cout << endl;
}


int main() {
  int arr[] = {12, 132, 164, 23, 1, 45, 78};
  int size = sizeof(arr) / sizeof(arr[0]);
  RadixSort(arr, size);
  printArray(arr, size);
}
```

## Complexities
### Time complexity   : 
Best Case  : O(n+k)

Worst Case : O(n+k)

Average    : O(n+k)

### Space complexity  : 
O(max)


