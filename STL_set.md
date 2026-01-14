-> What is set in STL?
std::set is an ordered container that stores unique elements only.
Elements are automatically stored in sorted order (ascending).

Header file:
#include <set>

-> Key Properties of set

Stores only unique elements
Elements are sorted automatically
Implemented using Balanced BST
No indexing like s[0]

-> How to Initialize a Set
1. Empty set
set<int> s;

2. Initialization with values
set<int> s = {5, 1, 3, 3, 2};


Stored as:
1 2 3 5

-> Inserting Elements
insert()
s.insert(10);
s.insert(5);
s.insert(10);   // duplicate ignored

-> Removing Elements
erase()
s.erase(5);

-> Accessing Elements

Direct indexing is not allowed.
Use loops or iterators.

for(int x : s) {
    cout << x << " ";
}

-> Important Set Functions
size()
s.size();

empty()
s.empty();

count()
Checks if element exists.
s.count(10);    // returns 1 or 0

find()
auto it = s.find(3);

clear()
s.clear();

-> Example Program
#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> s;

    s.insert(5);
    s.insert(1);
    s.insert(3);
    s.insert(3);

    for(int x : s) cout << x << " ";
    // Output: 1 3 5
}
