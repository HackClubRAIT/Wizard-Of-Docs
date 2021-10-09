# Knapsack Problem

Knapsack problem states that you are given a bag with a finite capacity, and a set of items which carry a certain weight and a profit value.
The goal is to maximize the profit with the constraint that the weight of the bag must not exceed the capacity of the bag. \

So,
Let's say we are given the following data. \
$N$ - Number of elements.
$P$ - Array containing the profit value of each item.
$W$ - Weight of each element.
$K$ - Capacity of the bag.

Let's denote a binary variable $x$ which denotes whether an item is included.

Our goal - $ max Sigma P_i * x_i $
Constraint - $ Sigma W_i * x_i <= K $

Here I propose a solution using *Dynamic Programming*.

```
#include <bits/stdc++.h>
using namespace std;
 
// A utility function that returns
// maximum of two integers
int max(int a, int b)
{
    return (a > b) ? a : b;
}
 
// Returns the maximum value that
// can be put in a knapsack of capacity W
int knapSack(int W, int wt[], int val[], int n)
{
    int i, w;
      vector<vector<int>> K(n + 1, vector<int>(W + 1));
 
    // Build table K[][] in bottom up manner
    for(i = 0; i <= n; i++)
    {
        for(w = 0; w <= W; w++)
        {
            if (i == 0 || w == 0)
                K[i][w] = 0;
            else if (wt[i - 1] <= w)
                K[i][w] = max(val[i - 1] +
                                K[i - 1][w - wt[i - 1]],
                                K[i - 1][w]);
            else
                K[i][w] = K[i - 1][w];
        }
    }
    return K[n][W];
}
 
// Driver Code
int main()
{
    int val[] = { 60, 100, 120 };
    int wt[] = { 10, 20, 30 };
    int W = 50;
    int n = sizeof(val) / sizeof(val[0]);
     
    cout << knapSack(W, wt, val, n);
     
    return 0;
}
```
