#include<iostream>
using namespace std;
int getpivot(int arr[],int n){
  int start=0;
  int end=n-1;
  int mid=start+(end-start)/2;
  while(start<end){
    if(arr[mid]>=arr[0]){
      start=mid+1;
    }
    else{
      end=mid;
    }
     mid=start+(end-start)/2;
  }
  return end;
}
int main(){
  int arr[100];
  int n,i,Result;
  cout<<"Enter the size of an array"<<endl;
  cin>>n;
  cout<<"Enter the elements of an array"<<endl;
  for(i=0;i<n;i++){
    cin>>arr[i];
  }
  Result=getpivot(arr,n);
  cout<<"Pivot Index is "<<Result;
}