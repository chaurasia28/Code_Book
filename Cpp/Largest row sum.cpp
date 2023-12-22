#include<iostream>
using namespace std;
void Largestsum(int arr[][100],int a,int b){
  int maxi=-10;
  int rowindex=-1;
  for(int i=0;i<a;i++){
    int sum=0;
    for(int j=0;j<b;j++){
      sum=sum+arr[i][j];
    }
      if(sum>maxi){
       maxi=sum;
       rowindex=i; 
  }
}
    cout<<"Maximum sum -->>"<<maxi<<endl;
    cout<<"Maximum sum index-->>"<<rowindex<<endl;
}
int main()
{
  int arr[100][100];
  int a,b;
  cout<<"Enter total no of rows"<<endl;
  cin>>a;
  cout<<"Enter total no of columns"<<endl;
  cin>>b;
  cout<<"Enter Elements-->>"<<endl;
  for(int i=0;i<a;i++){
    for(int j=0;j<b;j++){
      cin>>arr[i][j];
    }
  }
  Largestsum(arr,a,b);
  return 0;
}