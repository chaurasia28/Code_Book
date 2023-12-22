#include<iostream>
using namespace std;
int main(){
  int arr[3][4];
  cout<<"Enter input"<<endl;
  for(int i=0;i<3;i++){
    for(int j=0;j<4;j++){
      cin>>arr[i][j];
    }
  }
  cout<<"Printing 2d array\n";
  for(int i=0;i<3;i++){
    for(int j=0;j<4;j++){
      cout<<arr[i][j]<<" ";
    }
    cout<<endl;
  }
  cout<<"Row wise sum:\n";
  for(int i=0;i<3;i++){
    int sum=0;
    for(int j=0;j<4;j++){
      sum=sum+arr[i][j];
    }
    cout<<sum<<endl;
  }
}