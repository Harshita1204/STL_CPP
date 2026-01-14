#include <iostream>
#include<queue>
using namespace std;
int main() {
  // max heap
  priority_queue<int>maxi;
  // insert elements into the max heap
  maxi.push(1);
  maxi.push(4);
  maxi.push(3);
  maxi.push(5);
  maxi.push(9);

  //prints elements in decreasing order
  int n= maxi.size(); // it is written seperately because size changes when we pop elements
  for(int i=0;i<n;i++){
      cout<<maxi.top()<<" "; // prints greatest element
      maxi.pop(); // removes top element
  }cout<<endl;
  
  //min heap
  priority_queue<int,vector<int>,greater<int>>mini; // priority queue with greater <int> creates a min heap

  // insert values into the min heap
   mini.push(1);
   mini.push(6);
   mini.push(2);
   mini.push(7);
   mini.push(3);

  // prints elements in increasing order
    int m = mini.size();
  for(int i=0;i<m;i++){
      cout<<mini.top()<<" "; // prints smallest element
      mini.pop(); // removes top element
  }cout<<endl;

  cout<< "empty or not"<<mini.empty()<<endl;  // 1
   cout<< "empty or not"<<maxi.empty()<<endl; // 1 because we are popping every element after printing it
    return 0;
}
