-> What is priority_queue in STL?
std::priority_queue is a special type of queue where elements are stored based on priority, not insertion order.
By default, it works as a Max Heap
The largest element is always at the top

-> Header file:
#include <queue>

-> Types of Priority Queue :

1️. Max Heap (Default)
Largest element comes first
priority_queue<int> pq;

2️. Min Heap
Smallest element comes first
priority_queue<int, vector<int>, greater<int>> pq;

-> Adding Elements :

# push()
Adds element to the priority queue.

pq.push(10);
pq.push(5);
pq.push(20);
-> Removing Elements :

# pop()
Removes the top priority element.
pq.pop();

-> Accessing Top Element :

# top()
Returns the element with highest priority.
pq.top();

-> Important Priority Queue Functions :

# size()
Returns number of elements.
pq.size();

# empty()
Checks if priority queue is empty.
pq.empty();

-> Example: Max Heap
priority_queue<int> pq;

pq.push(1);
pq.push(4);
pq.push(3);

cout << pq.top();  // 4

-> Example: Min Heap
priority_queue<int, vector<int>, greater<int>> pq;

pq.push(1);
pq.push(4);
pq.push(3);

cout << pq.top();  // 1

-> Iterating Through Priority Queue
while(!pq.empty()) {
    cout << pq.top() << " ";
    pq.pop();
}

********* Popping removes elements permanently *********
