What is queue in STL?
std::queue is a FIFO (First In First Out) data structure.
The element inserted first is removed first.

-> Header file:
#include <queue>

-> How to Initialize a Queue
1️. Empty Queue
queue<int> q;

-> Adding Elements :

# push()
Adds an element at the back of the queue.
q.push(10);
q.push(20);

-> Removing Elements :

# pop()
Removes the front element.
q.pop();

-> Accessing Elements :

# front()
Returns the front element.
cout << q.front();

# back()
Returns the last element.
cout << q.back();

-> Important Queue Functions :

# empty()
Checks if queue is empty.
q.empty();   // true or false

# size()
Returns number of elements.
q.size();

-> Example: Queue Operations
queue<int> q;

q.push(1);
q.push(2);
q.push(3);

cout << q.front();  // 1

q.pop();

cout << q.front();  // 2
