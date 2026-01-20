What is array in STL?
std::array is a fixed-size container in C++ STL.
It works like a normal array but provides built-in functions and better safety.

 Header file:
#include <array>

->  How to Initialize an STL Array :
1. Basic Initialization
array<int, 5> arr = {1, 2, 3, 4, 5};


int → data type
5 → size (fixed, cannot change)

2️. Initialize All Elements with Zero
array<int, 5> arr = {0};

3️. Declaration Without Initialization
array<int, 5> arr;


Note******* Values will be garbage until assigned.

->  Accessing Elements
arr[0];        // access first element
arr.at(2);     // safer access (checks bounds)


arr[i] → faster, no bounds check

arr.at(i) → safer, throws error if index is invalid

-> Important Functions of array:

 # size()
Returns number of elements.
arr.size();

# front()
Returns first element.
arr.front();

# back()
Returns last element.
arr.back();

# empty()
Checks if array is empty.
arr.empty();   // returns true or false

# fill()
Fills all elements with same value.
arr.fill(10);

# swap()
Swaps contents of two arrays.
arr1.swap(arr2);

-> Iterating Through STL Array
Using for loop
for(int i = 0; i < arr.size(); i++) {
    cout << arr[i] << " ";
}

Using range-based loop
for(int x : arr) {
    cout << x << " ";
}
