-> What is map in STL?
std::map stores elements in key–value pairs.
Keys are unique and elements are stored in sorted order by key.

Header file:
#include <map>

-> Key Properties of map
Stores data as (key, value)
Keys are unique
Automatically sorted by key
Implemented using Balanced BST
Access using key, not index

-> How to Initialize a Map
1. Empty map
map<int, string> m;

2. Insert key–value pairs
m[1] = "one";
m[2] = "two";
m[3] = "three";

3. Insert using insert()
m.insert({4, "four"});

-> Accessing Elements
Using key
cout << m[2];   // two

Using at()
cout << m.at(1);   // one

-> Important Map Functions
insert()
m.insert({5, "five"});

erase()
m.erase(2);    // removes key 2

size()
m.size();

empty()
m.empty();

count()
Checks if key exists.
m.count(3);    // returns 1 or 0

find()
Returns iterator to key.
auto it = m.find(1);

clear()
m.clear();

-> Iterating Through Map
for(auto i : m) {
    cout << i.first << " " << i.second << endl;
}


Example output:

1 one
3 three
4 four

-> Example Program
#include <iostream>
#include <map>
using namespace std;

int main() {
    map<int, string> m;

    m[1] = "apple";
    m[3] = "banana";
    m[2] = "orange";

    for(auto i : m) {
        cout << i.first << " -> " << i.second << endl;
    }
}


Output:

1 -> apple
2 -> orange
3 -> banana

