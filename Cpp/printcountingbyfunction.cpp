#include<iostream>
using namespace std;
void printcount(int n){
  for(int i=0;i<=n;i++)
    {
      cout<<i<<endl;
    }
}
int main(){
  int n;
  cout<<"Enter the n value";
  cin>>n;
  printcount(n);
}