-> What is vector in STL?
std::vector is a dynamic array in C++ STL.
Unlike arrays, its size can grow or shrink automatically.

-> Header file:
#include <vector>

-> How to Initialize a Vector:
1️. Basic Initialization
vector<int> v = {1, 2, 3, 4};

2️. Empty Vector
vector<int> v;

3️. Vector with Size
vector<int> v(5);   // size 5, all values = 0

4️. Vector with Size and Value
vector<int> v(5, 10);  // size 5, all values = 10

-> Adding Elements:

# push_back()
Adds element at the end.
v.push_back(10);
v.push_back(20);

-> Removing Elements:

# pop_back()
Removes last element.
v.pop_back();

-> Accessing Elements
v[0];        // fast access
v.at(2);     // safer access
v.front();   // first element
v.back();    // last element

-> Important Vector Functions:

# size()
Returns number of elements.
v.size();

# capacity()
Returns total allocated memory.
v.capacity();

-> empty()
Checks if vector is empty.
v.empty();

-> clear()
Removes all elements.
v.clear();

-> insert()
Insert element at specific position.
v.insert(v.begin() + 1, 50);

-> erase()
Remove element from position.
v.erase(v.begin() + 2);

-> Iterating Through Vector
Using for loop
for(int i = 0; i < v.size(); i++) {
    cout << v[i] << " ";
}

Using range-based loop
for(int x : v) {
    cout << x << " ";
