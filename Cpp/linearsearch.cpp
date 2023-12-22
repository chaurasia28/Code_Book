#include<iostream>
using namespace std;
bool search(int arr[],int n,int key){
  for(int i=0;i<n;i++){
    if(arr[i]==key){
      return 1;
    }
  }
  return 0;
}
int main(){
  int arr[100];
  int n;
  int i,key;
  cin>>n;
  for(i=0;i<n;i++){
    cin>>arr[i];
  }
  cout<<"Enter the key value";
  cin>>key;
  bool found=search(arr,n,key);
  if(found){
    cout<<"Key is present";
  }
  else{
    cout<<"Key is not present";
  }
}
