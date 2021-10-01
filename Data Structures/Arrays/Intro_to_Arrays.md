//The following content explains how *Arrays* work in C++

<----An array in C/C++ or be it in any programming language is
a collection of similar data items stored at contiguous
memory locations and elements can be accessed randomly
using indices of an array---->

//Declaration of Arrays in C++

# 1-> Size Specification
    int arr[10]; //this is one of the ways to declare an array with size *10* in this case
    int n = 10;
    int arr[n]; // the size the arrray can be an user input as well
    
# 2-> With values but no size
    int arr[] = {1,2,3,4,5}; //This way we can declare an array of some elements
# 3-> With values and size as well
    int arr2[5] = {2,3,4,5,6}; //This way we can declare an array of n elements where n = 5 in this case
# 4-> Dynamic array allocation 
    int * arr = new int[5];//this way we can allocate dynamic contiguous memory for our array
    
    --One more way to do it is with user input size--
    
    int n;
    cin>>n;
    
    int * arr = new int[n];//This way array memory will be allocated at the runtime of our program
    
    Accessing indices in this type of arrays is quite interesting for example,
    
    arr[i] //will allow us to access the integer value at the ith index;
    
    i[arr] //this will work same as the above
    
    * (i + arr) //even this way is just another way of accessing the ith index
    
    -- all thanks to the pointers in c++ --   
    
    
## Code Snippets


# Example1 :

    #include <iostream>
    using namespace std;

    int main()
    {
        int arr[5];
        arr[0] = 5;
        arr[2] = -10;

        // this is same as arr[1] = 2
        arr[3 / 3] = 2;
        arr[3] = arr[0];

        cout << arr[0] << " " << arr[1] << " " << arr[2] << " "
             << arr[3];

        return 0;
    }
  
# Example2 :

    #include <iostream>
    using namespace std;

    int main()
    {
        int * arr = new int[4];
        arr[0] = 5;
        arr[2] = -10;

        // this is same as arr[1] = 2
        arr[3 / 3] = 2;
        arr[3] = arr[0];

        cout << arr[0] << " " << arr[1] << " " << arr[2] << " "
             << arr[3];

        return 0;
    }


    Output : 5 2 -10 5




