#include<iostream>
using namespace std;
void print(int arr[],int n){
  cout<<"Elements of an array"<<endl;
  for(int i=0;i<n;i++){
    cout<<arr[i]<<endl;
  }
}
int findunique(int arr[],int n){
  int ans=0;
 for(int i=0;i<n;i++){
    ans=ans^arr[i];
  } 
  return ans;
}
int main(){
  int arr[100],i,n;
  int result;
  cout<<"Enter the size of an array"<<endl;
  cin>>n;
  cout<<"Enter the Elements of an array"<<endl;
  for(i=0;i<n;i++){
    cin>>arr[i];
  }
  print(arr,n);
  result=findunique(arr,n);
  cout<<"Unique number"<<endl;
  cout<<result<<endl;
}