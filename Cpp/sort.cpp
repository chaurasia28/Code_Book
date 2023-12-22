#include<iostream>
using namespace std;
void print(int arr[],int n){
  cout<<"Elemts of an array"<<endl;
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
}
void sort(int arr[],int n){
  int i=0,j=n-1;
  while(i<j){
    while((arr[i]==0)&&i<j){
      i++;
    }
    while(arr[j]==1&&i<j){
      j--;
    }
    //arr[i]==1&&arr[j]==0
    if(i<j){
   swap(arr[i],arr[j]);
      i++;
      j--;
    }
  }
}
int main(){
  int i,n;
  int arr[100];
  cout<<"Enter the size of an array"<<endl;
  cin>>n;
  cout<<"Enter the elements of an array"<<endl;
  for(i=0;i<n;i++){
    cin>>arr[i];
  }
  sort(arr,n);
  print(arr,n);
  return 0;
}