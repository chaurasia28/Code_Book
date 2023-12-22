#include<iostream>
using namespace std;
void print(int arr[],int size){
  cout<<"Elements of an array"<<endl;
  for(int i=0;i<size;i++)
  cout<<arr[i]<<" ";
}
void swapalternate(int arr[],int size){
  int i=0;
  while(i<size){
    if(i+1<size){    
  // swap(arr[i],arr[i+1]);
  //   }
     int temp=arr[i];
      arr[i]=arr[i+1];
      arr[i+1]=temp;
    }
    i=i+2;
  }
  cout<<endl;
  cout<<"Elements after swapping"<<endl;
  for(i=0;i<size;i++){
    cout<<arr[i]<<" ";
  }
}
int main(){
  int arr[100],n;
  cout<<"Enter the size of an array"<<endl;
  cin>>n;
  cout<<"Enter the elements of an array";
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  print(arr,n);
  swapalternate(arr,n);
  return 0;
}