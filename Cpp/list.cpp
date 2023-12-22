#include <iostream>
#include<list>
using namespace std;
int main() {
 list<int>l;
  list<int>n(5,100);
  for(int i:n){
    cout<<i <<" ";
  }
  cout<<endl;
  l.push_back(1);
  l.push_front(2);
  for(int i:l){
    cout<<i<<" ";
  }
//time complexity begin,back,end,empty---O(1)except eraseO(n)bez we need to erase each element
  cout<<endl;
  l.erase(l.begin());
  cout<<"After erase"<<endl;
  for(int i:l)
    {
      cout<<i<<" ";
    }
cout<<"size of list--->"<<l.size()<<endl;
}