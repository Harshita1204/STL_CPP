What is list in STL?
std::list is a doubly linked list in C++ STL.
It allows fast insertion and deletion anywhere in the list.

-> Header file:
#include <list>

-> How to Initialize a List : 

1️. Empty List
list<int> l;

2️-> Initialization with Values
list<int> l = {1, 2, 3, 4};

3️. List with Size
list<int> l(5);     // size 5, all values = 0

4️. List with Size and Value
list<int> l(5, 10); // size 5, all values = 10

-> Adding Elements :

# push_back()
Adds element at the end.
l.push_back(10);

# push_front()
Adds element at the front.
l.push_front(5);

# insert()
Insert element at specific position.
auto it = l.begin();
advance(it, 2);
l.insert(it, 100);

->  Removing Elements : 

# pop_back()
Removes last element.
l.pop_back();

# pop_front()
Removes first element.
l.pop_front();

# erase()
Remove element using iterator.
l.erase(l.begin());

-> Accessing Elements :

 Direct indexing like l[2] is NOT allowed
 Use iterators:

for(int x : l) {
    cout << x << " ";
}

-> Important List Functions :

# size()
l.size();

# empty()
l.empty();

# clear()
l.clear();

# remove()
Removes all occurrences of a value.
l.remove(10);

# reverse()
Reverses the list.
l.reverse();

# sort()
Sorts the list.
l.sort();

-> How to Copy a List 
 Method 1: Copy Constructor
list<int> l1 = {1, 2, 3};
list<int> l2(l1);

 Method 2: Assignment Operator
list<int> l2 = l1;

 Method 3: Using Iterators
list<int> l2(l1.begin(), l1.end());
