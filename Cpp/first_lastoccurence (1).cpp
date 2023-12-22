#include<iostream>
using namespace std;
int first_occurence(int arr[],int n,int key){
  int start=0;
  int end=n-1;
  int mid;
  mid=start+(end-start)/2;
  int ans=-1;
  while(start<=end){
    if(arr[mid]==key){
      ans=mid;
      end=mid-1;
    }
    else if(arr[mid]<key){
     start=start+1; 
    }
    else{
      end=end-1;
    }
   mid=start+(end-start)/2;
  }
  return ans;
}
int last_occurence(int arr[],int n,int key){
  int start=0;
  int end=n-1;
  int mid;
  mid=start+(end-start)/2;
  int ans=-1;
  while(start<=end){
    if(arr[mid]==key){
      ans=mid;
      start=mid+1;
    }
    else if(arr[mid]<key){
     start=start+1; 
    }
    else{
      end=end-1;
    }
   mid=start+(end-start)/2;
  }
  return ans;
}
int main(){
  int arr[100];
  int n,key,result,result2;
  cout<<"Enter the size of an array"<<endl;
  cin>>n;
  cout<<"Enter the elements of an array"<<endl;
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  cout<<"Enter the key"<<endl;
  cin>>key;
result=first_occurence(arr,n,key);
  result2=last_occurence(arr,n,key);
  cout<<"First occurence "<<key<<" is"<<result<<endl;
  cout<<"Last occurence "<<key<<" is"<<result2<<endl;
  return 0;
}