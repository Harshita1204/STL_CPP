#include <iostream>
#include<map>  // sorted order
using namespace std;
int main() {
  map<int,string> m;
  m[1]="Harshita";
  m[2]="Janvi";
  m[13]="pranaya";
  m[4]="sehraj";
  m[5]="anahat";
  
  for(auto i:m){
      cout<<i.first<<endl;
  }cout<<endl;
  
  m.insert({5,"bheem"});
  cout<<"before erase"<<endl;
  for(auto i:m){
      cout<<i.first<<" "<<i.second<<endl;
  }cout<<endl;
  
  cout<<"Finding 13 "<<m.count(13)<<endl; // will check if the 13 is present or not
  cout<<"Finding 13 "<<m.count(-13)<<endl;
  cout<<endl;
  
  m.erase(13);
  cout<<"after erase"<<endl;
  for(auto i:m){
      cout<<i.first<<" "<<i.second<<endl;
  }cout<<endl;
  
  // iterator
  auto it=m.find(5);
  for(auto i=it;i!=m.end();i++){
      cout<<(*i).first<<endl;
  }
    return 0;
}
