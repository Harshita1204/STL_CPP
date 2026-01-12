-> What is deque in STL?
std::deque (Double Ended Queue) is a dynamic container that allows insertion and deletion from both front and back.

-> Header file:
#include <deque>

-> How to Initialize a Deque
1️. Empty Deque
deque<int> dq;

2️. Initialization with Values
deque<int> dq = {1, 2, 3, 4};

3️. Deque with Size
deque<int> dq(5);      // size 5, all values = 0

4️. Deque with Size and Value
deque<int> dq(5, 10);  // size 5, all values = 10

-> Adding Elements:

# push_back()
Adds element at the end.
dq.push_back(10);

-> push_front()
Adds element at the front.
dq.push_front(5);

-> Removing Elements:

# pop_back()
Removes last element.
dq.pop_back();

# pop_front()
Removes first element.
dq.pop_front();

-> Accessing Elements:
dq[0];         // first element
dq.at(2);      // safe access
dq.front();    // first element
dq.back();     // last element

-> Important Deque Functions:

# size()
Returns number of elements.
dq.size();

# empty()
Checks if deque is empty.
dq.empty();

# clear()
Removes all elements.
dq.clear();

-> Iterating Through Deque
Using for loop
for(int i = 0; i < dq.size(); i++) {
    cout << dq[i] << " ";
}

Using range-based loop
for(int x : dq) {
    cout << x << " ";
}
