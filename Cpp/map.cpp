#include <iostream>
#include<map>
using namespace std;
//map--->>key and value,unique,sorted 
//unordered map
int main() {
  map<int,string> m;
  m[1]="hello";
  m[13]="nice";
  m[2]="dear";
  m.insert({5,"bheem"});
  cout<<"Before erase"<<endl;
  for(auto i:m){
    cout<<i.first<<" "<<i.second<<endl;
  }
  cout<<"finding 3-->>"<<m.count(3)<<endl;
  cout<<"finding 13-->>"<<m.count(13)<<endl;
 // m.erase(13);
  cout<<"after erase"<<endl;
  cout<<"size after erase-->>"<<m.size()<<endl;
    //o(logn)--insert,erase,find,count
  //unoredered map---hashtable o(1);
  for(auto i:m){
    cout<<i.first<<" "<<i.second<<endl;
  }
 auto it=m.find(5);
    for(auto i=it;i!=m.end();i++){
     cout<<(*i).first<<endl; 
    }
  }