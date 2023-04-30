Introduction:
2D array is an array of arrays. In this we store data in tabular form, rows and columns. 
Syntax: datatype [size][size]
Example:- int twodarr[4][4];

Size of array: 
When you multiply the size of an array you can store that number of values in the 2D array. 
Example: int arr[3][3];
In this example multiply 3x3=9, so you can store 9 elements in the array.

Initializing the 2-D array:
Method 1:
int a[4][4] = {  
   {2,4,6,8} ,   /* values of row indexed 0 */
   {1,2,3,4} ,   /* values of row indexed 1 */
   {9,8,7,11},   /*  values of row indexed 2 */
   {4,8,10,5} /*  values of row indexed 3 */
};

Method 2:
int a[4][3] = {0,1,2,3,4,5,6,7,8,9,10,11};

Access the elements of an array:
We make use of row number and column number to access the elements. 
Example: 
int a[4][4] = {  
   {2,4,6,8} ,  
   {1,2,3,4} ,   
   {9,8,7,11}, 
   {4,8,10,5} 
};
int val = a[3][3];
This is return 5 by moving rowwise 0-3 an columnwise 0-3

Code:
#include <iostream>
   
using namespace std; 
int main () {
   
   // an array of 4 rows and 3 columns.
   int a[4][3] = { {0,4,5}, {1,2,3}, {2,4,9}, {3,6,8}};
 // output will be 2nd element from 3rd row                            
         cout << a[3][2]: ;
 
   return 0;
}

Output :
8
// As the array indexing starts from 0 we have 0 to 3 rows and 0 to 2 columns

Method to enter data to a 2-D array
Nested loops can be used to enter the elements in the array. We can use for loop or while depending upon the requirement.

#include<iostream>
using namespace std;
 
int main()
{ 
int matrix [5] [4];
for (int mat1=0 ; mat1<5 ; mat1++)
{
for (int mat2=0 ; mat2<4 ; mat2++)
{
matrix [m1] [m2] ;
}
}
}

Initializing the 2-D character array:
Write char instead of int at the time of initialization. 
Example:
char array[4] [3]= { 'm', 'a', 'n' ,
'b', 'a', 'n' ,
'g', 'r', 't' 
‘a’,’n’,’d’};

Code:
#include <iostream>
 
int main()
{
    // Initialize 2D array
    char array[5] [10]= { "man", "pot", "van", "run"};

 
    // Printing Strings stored in 2D array
    for (int i = 0; i < 4; i++)
        std::cout << array[i] << "\n";
 
    return 0;
}

Output:
man
pot
van
run


Summary:
It has become easy to store values in variables with the help of arrays. 
