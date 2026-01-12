What is stack in STL?
std::stack is a LIFO (Last In First Out) data structure.
The element inserted last is removed first.

-> Header file:
#include <stack>

-> How to Initialize a Stack:

1️. Empty Stack
stack<int> st;

-> Adding Elements : 

# push()
Adds an element to the top of the stack.
st.push(10);
st.push(20);

->  Removing Elements :

# pop()
Removes the top element.
st.pop();

-> Accessing Top Element :

# top()
Returns the top element.
cout << st.top();

-> Important Stack Functions :

# empty()
Checks if stack is empty.
st.empty();   // returns true or false

# size()
Returns number of elements.
st.size();

-> Example: Stack Operations
stack<int> st;

st.push(1);
st.push(2);
st.push(3);

cout << st.top();  // 3

st.pop();

cout << st.top();  // 2
