#include<iostream>
using namespace std;
int main(){
  int arr[100];
  int n,i,sum=0;
  cout<<"Enter the size of an array";
  cin>>n;
  for( i=0;i<n;i++){
    cin>>arr[i];
  }
  for(i=0;i<n;i++){
    sum=sum+arr[i];
  }
  cout<<"Sum of all Element of an array ="<<sum<<endl;
}