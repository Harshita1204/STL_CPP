#include <iostream>
#include<set>
using namespace std;
int main() {
    set<int> s;
    
    s.insert(5);
    s.insert(1);
    s.insert(6);
    s.insert(0);
    s.insert(3);
    s.insert(5);
    s.insert(5);
    s.insert(5);  // if we try to add the same element for more than once , even then the set will consider it one only 
    
    for (auto i:s){
        cout<<i<<endl;
    }cout<<endl;
    
    // Erasing
    set<int>::iterator it= s.begin();
    it++;
    s.erase(it);
    
    for(auto i:s){
        cout<<i<<endl;
    }
     // count() -> will tell if the element is present or not
     cout<<endl;
     cout<<"Element present or not -> "<<s.count(5)<<endl; // will return 1
     cout<<"Element present or not -> "<<s.count(-5)<<endl; // will return 0
     
     set<int> :: iterator itr=s.find(5); // will return the iterator
     cout<<"value present at itr -> "<<*it<<endl;
     
     for(auto it=itr;it!=s.end();it++){ // will return the value after 5
         cout<<*it<<endl;
     }cout<<endl;
}
   
