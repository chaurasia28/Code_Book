#include<iostream>
#include<vector>
using namespace std;
int main(){
  vector<int>v;
  vector<int>a(5,1);
  vector<int>last(a);
  cout<<"print last"<<endl;
  for(int i:last){
    cout<<i<<endl;
  }
  // cout<<"print a"<<endl;
  // for(int i:a){
  //   cout<<i<<endl;
  // }
  cout<<"Capacity--->>"<<v.capacity()<<endl;//no element assign
  v.push_back(1);
    cout<<"Capacity--->>"<<v.capacity()<<endl;
  v.push_back(2);
  cout<<"Capacity--->>"<<v.capacity()<<endl;
  v.push_back(3);
  cout<<"Capacity--->>"<<v.capacity()<<endl;
 //capacity become 4 because it double the space ----capacity means memory assign for the element 
  cout<<"size--->>"<<v.size()<<endl;
  //size means no element in vector
  cout<<"Element at 2nd index"<<v.at(2)<<endl;
  cout<<"front"<<v.front()<<endl;
  cout<<"back"<<v.back()<<endl;
 cout<<"before pop_back"<<endl;
  for(int i:v){
    cout<<i<<endl;
  }
  v.pop_back();
  cout<<"after pop_back"<<endl;
  for(int i:v){
    cout<<i<<endl;
  }
  //size==0,capacity is not zero
  cout<<"size before clear"<<v.size()<<endl;
  v.clear();
  cout<<"size after clear"<<v.size()<<endl;
  //.begin for iterator value
}