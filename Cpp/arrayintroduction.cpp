#include<iostream>
using namespace std;
int main(){
  //declaring the array
  int arr[5];
  cout<<"Everything is fine";
  //initialising the array
  int arr2[5]={0};
  int i, n=5;
  for(i=0;i<n;i++){
  cout<<arr2[i]<<endl;
  }
   //initialising the array
  int arr3[5]={25};
  int n1=5;
  for(int i=0;i<n1;i++){
  cout<<arr3[i]<<endl;
  }
    //initialising the array

  int n2=5;
  for(int i=0;i<n2;i++){
      int arr4[n2];
      arr4[i]={25};
  cout<<arr4[i]<<endl;
  }
  int size=sizeof(arr3[5]);
  cout<<size;
}