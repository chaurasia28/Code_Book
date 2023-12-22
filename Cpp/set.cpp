#include <iostream>
#include<set>
using namespace std;
int main() {
  //In set all unique elements are stored,no modification,sorted ordered mai return
  //unordered set are slow,random
  set<int>s;
  s.insert(5);
  s.insert(5);
  s.insert(5);
  s.insert(5);
  s.insert(0);
  s.insert(0);
  s.insert(0);
  s.insert(3);
  s.insert(98);
  for(auto i:s){
    cout<<i<<endl;
  }
  //complexity 0(logn)--binarysearch,find,erase,count,insert
  set<int>::iterator it=s.begin();
  it++;
  s.erase(it);
  for(auto i:s){
    cout<<i<<endl;
  }
  cout<<"Count if 5 present or not-->"<<s.count(5)<<endl;
  set<int>::iterator itr=s.find(5);
  for(auto it=itr;it!=s.end();it++){
    cout<<*it<<" ";
      cout<<endl;
  }
}