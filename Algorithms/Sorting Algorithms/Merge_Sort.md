# ⭐ MERGE SORT

Merge Sort is a Divide and Conquer algorithm. It divides the input array into two halves, calls itself for the two halves, and then merges the two sorted halves. The Merge() function is used for merging two halves.

#### Example: 

Let us consider an example to understand the approach better.

1. Divide the unsorted array into n subarrays, each comprising 1 element (an array of 1 element is supposed sorted).
   #### Input Provided: [14 7 3 12 9 11 6 2]
![image](https://user-images.githubusercontent.com/66466865/135619443-5d0b0263-2d2b-4211-be66-facb10fb2f8e.png)

2. Repeatedly merge sublists to produce newly sorted sublists until there is only 1 sublist remaining. This will be the sorted list.

![image](https://user-images.githubusercontent.com/66466865/135654588-94affc6b-c2b9-43ce-9421-ee2c07235c01.png)

##### Output: [2 3 6 7 9 11 12 14]

### Drawbacks of Merge Sort:

- Slower comparative to the other sort algorithms for smaller tasks.
- Merge sort algorithm requires an additional memory space of 0(n) for the temporary array.
- It goes through the whole process even if the array is sorted.

### Solution in C/C++:

#### Code for taking user input:
```
main()
{
    int i, lower_bound, upper_bound;
    printf("\nEnter the length of array: ");
    scanf("%d", &len);
    lower_bound = 0;
    upper_bound = len-1;
    printf("\nEnter the elements of your array:\n");
    for (i=0; i<len; i++)
    {
        printf("array[%d] = ", i);
        scanf("%d", &array[i]);
    }
    mergesort(array, lower_bound, upper_bound);
    printArray(array);
}

```
#### Code for mergesort():
```
void mergesort(int a[], int lower_bound, int upper_bound)
{
    if (lower_bound<upper_bound)
    {
        mid = (lower_bound+upper_bound)/2;
        mergesort(a, lower_bound, mid);
        mergesort(a, mid+1, upper_bound);
        Merge(a, lower_bound, mid, upper_bound);
    }
}

```
#### Code for Merge():
```
void Merge(int a[], int lower_bound, int mid, int upper_bound)
{
    int b[len], l;
    for (l=0; l<len; l++)
    {
        b[l] = array[l];
    }
    int i, j, k;
    i = 0;
    j = mid+1;
    k = 0;
    while(i<=mid && j<=upper_bound)
    {
        if (b[i]<=b[j])
        {
            a[k] = b[i];
            i++;
        }
        else
        {
            a[k] = b[j];
            j++;
        }
        k++;
    }
    if(i>mid)
    {
        while(j<=upper_bound)
        {
            a[k] = b[j];
            j++; k++;
        }
    }
    else
    {
        while(i<=mid)
        {
            a[k] = b[i];
            i++; k++;
        }
    }
}

```
#### Code for printing the output array:
```
void printArray(int a[])
{
    int i;
    printf("\nPrinting the sorted array:\n");
    for (i=0; i<len; i++)
    {
        printf("array[%d] = %d\n", i, a[i]);
    }
}

```

#### ⏲️ Time Complexities:
Best: O(nlog n)
<br/>
Average: O(nlog n)
<br/>
Worst: O(nlog n)

#### 👾 Space complexities:
Best: O(n)
<br/>
Average: O(n)
<br/>
Worst: O(n)
