#include<iostream>
using namespace std;
 //remember in array we dont pass array instead we pass base address of array that means we tell in this base address array is store  so there is change in actual tooo...
void update(int arr[],int n){
  cout<<"Inside the function"<<endl;
  arr[0]=120;
  for(int i=0;i<3;i++){
    cout<<arr[i]<<endl;
  }
  cout<<"Going out of the update function to main function"<<endl;
}
int main(){
  int arr[3]={0,1,2};
  update(arr,3);
  for(int i=0;i<3;i++){
    cout<<arr[i]<<endl;
  }
}