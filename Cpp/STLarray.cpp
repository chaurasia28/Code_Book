#include<iostream>
#include<array>
using namespace std;
int main(){
  //int arr[4]={1,2,3,4};
  //stl array is static
  array<int,4> a={1,2,3,4};
  int size=a.size();
  for(int i=0;i<size;i++)
    {
      cout<<a[i]<<endl;
    }
  cout<<"Element at 2nd index"<<a.at(2)<<endl;
  cout<<"element or not-->> "<<a.empty()<<endl;
  cout<<"First element"<<a.front()<<endl;
  cout<<"Last element"<<a.back()<<endl;
}