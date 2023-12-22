rray//Reverse an array
#include<iostream>
using namespace std;
void printarray(int arr[],int n){
  cout<<"here are the array"<<endl;
  for(int i=0;i<n;i++){
    cout<<arr[i]<<endl;
  }
}
void reverse(int arr[],int n){
  int temp;
  int start=0;
 int  end=n-1;
  while(start<end){
     temp=arr[start];
     arr[start]=arr[end];
    arr[end]=temp;  //swap(arr[start],arr[end]);
    start=start+1;
    end=end-1;
  }
  cout<<"after Reversing the array"<<endl;
  for(int i=0;i<n;i++){
  cout<<arr[i]<<endl;
  }
}
int main(){
  int i,n,temp,arr[100];
  cout<<"Enter the n value";
  cin>>n;
  for(i=0;i<n;i++){
    cin>>arr[i];
  }
  printarray(arr,n);
  reverse(arr,n);
}