#include<iostream>
using namespace std;
//remember for binary search array must be in in increasing or decreasing order: 
int binary_search(int arr[],int n,int key){
  int start=0;
  int end=n-1;
  int mid=(start+(end-start)/2);
  while(start<=end){
    if(arr[mid]==key){
      return mid;
    }
    //right move:
    if(arr[mid]<key){
      start=mid+1;
    }
    //left move:
    else{
      end=end-1;
    }
    mid=(start+(end-start)/2);
  }
 return-1; 
}
int main(){
  int arr[100];
  int i,n,key,Index;
  cout<<"Enter the size of an array"<<endl;
  cin>>n;
  cout<<"Enter the elements of an array"<<endl;
  for(i=0;i<n;i++){
    cin>>arr[i];
  }
  cout<<"Enter the key you want to search"<<endl;
  cin>>key;
Index=binary_search(arr,n,key);
  cout<<"Index of"<<key<<"is"<<" "<<Index<<endl;
}