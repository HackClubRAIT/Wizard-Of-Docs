# Insertion Sort
## What is Insertion Sort?
Insertion sort is a sorting algorithm that places an unsorted element at its suitable place in each iteration.

Insertion sort works similarly as we sort cards in our hand in a card game.

We assume that the first card is already sorted then, we select an unsorted card. If the unsorted card is greater than the card in hand, it is placed on the right otherwise, to the left. In the same way, other unsorted cards are taken and put in their right place.

A similar approach is used by insertion sort.
## Algorithm
To sort an element in ascending order <br>
step 1: Iterate from arr[1] to arr[N] over the array. <br>
step 2: Compare the current element (key) to its predecessor. <br>
step 3:If the key element is smaller than its predecessor, compare it to the elements before. Move the greater elements one position up to make space for the swapped element.
<br>
## Code
Here is the code of Insertion Sort in Java
``` Java
package com.company;
import java.util.*;
public class InsertionSort {
    static  void swap(int[]arr,int a,int b)
    {
        int temp =arr[a];
        arr[a]= arr[b];
        arr[b]= temp;
    }
    static void insertionSort(int[]arr)
    {
        int n = arr.length;
        // Number of Passes
        for(int i=0;i<=n-2;i++)
        {
            //no of comparisons
            for (int j =i+1;j>0;j--)
            {
                if(arr[j-1]>arr[j])
                    swap(arr,j,j-1);
                else
                    break;
            }
        }
        System.out.println(Arrays.toString(arr));
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n;
        System.out.println("Enter Array Size");
        n = sc.nextInt();
        int[]arr = new int[n];
        System.out.println("Enter Array elements");
        for(int i=0;i<n;i++)
        {
            arr[i]= sc.nextInt();
        }
        System.out.println("Array before Sorting");
        System.out.println(Arrays.toString(arr));
        System.out.println("Array after Sorting");
        insertionSort(arr);
    }
}

```
Input: Enter Array elements <br>
9 7 5 4 1
<br>
Output: Array before Sorting <br>
[9, 7, 5, 4, 1] <br>
Array after Sorting <br>
[1, 4, 5, 7, 9]
<br>
## Time Complexity
**Worst Case:** When elements are arranged in descending order we take to iterators i(for countong pass) and j(for comparisons) <br>
[9, 7, 5, 4, 1] <br>
For Pass 1: when i=0
[9, 7, 5, 4, 1] -> [7, 9, 5, 4, 1] <br>no. of comparisons here  is 1 hence j=1. <br>
For Pass 2: when i=1
[7, 9, 5, 4, 1] -> [7, 5, 9, 4, 1]->[5, 7, 9, 4, 1] <br>no. of comparisons here  is 2 hence j=2.<br>
For Pass 3: when i=2
[5, 7, 9, 4, 1] -> [5, 7, 4, 9, 1]->[5, 4, 7, 9, 1]->[4, 5, 7, 9, 1]  <br>no. of comparisons here  is 3 hence j=3.<br>
For Pass 4: when i=3 <br>
[4, 5, 7, 9, 1]->[4, 5, 7, 1, 9]->[4, 5, 1, 7, 9]->[4, 1, 5, 7, 9]->[1, 4, 5, 7, 9]<br>
no. of comparisons here  is 4 hence j=4.<br><br>
**Note:** Here we see for 5 elements there are 4 passes and i runs from 0 to 3,therefore if there are n elements there will be n-1 passes and i will run from 0 to n-2 times which we have already done in  the code section.
<br><br>
**Analysis:** For pass 1 we have made 1 comparison, for pass 2 we have made 2 comparisons and so on.<br>
For 5 elements we have made 1+2+3+4 comparisons.<br> So according to it for n elements,we would have made 1+2+3+...+(n-1)comparisons.<br>
Summation of (n-1)terms: (n-1)n/2=(n*n-n)/2<br>
Therefore, time complexity in worst case is O(n^2).
<br><br>

**Best Case:** When elemnts are already arranged in ascending order <br>
For pass 1: [1, 2, 3, 4, 5,] no of comparisons 1,j=1.<br>
For pass 2: [1, 2, 3, 4, 5,] no of comparisons 1,j=1.<br>
For pass 3: [1, 2, 3, 4, 5,] no of comparisons 1,j=1.<br>
For pass 4: [1, 2, 3, 4, 5,] no of comparisons 1,j=1.<br>
<br>
Here,for 5 elements we have made only 1 comparison  in each step that is total 4 comparisons. Therefore, for n elments already sorted we would make total(n-1) comparisons hence Time complexity in best case is O(n).
<br><br>
## Algorithm Paradigm:
It uses incremental Approach.
<br><br>
---
# Conclusion
This is a  documentation of Insertion Sort in java.
<br>
Resource  for detailed study of Insertion Sort:
[GeeksforGeeks](https://www.geeksforgeeks.org/insertion-sort/)<br>
Resource  for detailed study of Other DSA topics:[Wizard-of_docs github repo](https://github.com/HackClubRAIT/Wizard-Of-Docs)
---
---
Don't forget to give a ⭐ to [Wizard-Of-Docs](https://github.com/HackClubRAIT/Wizard-Of-Docs) and keep contributing.
<br>
Happy Coding!
---