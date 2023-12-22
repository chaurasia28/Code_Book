#include<iostream>
using namespace std;
int getmax(int num[],int n){ 
    int max= -2^31;
    for(int i=0;i<n;i++){
      if(num[i]>max){
        max=num[i];
      }
    }
  return max;
     
}
int getmin(int num[],int n){ 
    int min= 2^31-1;
    for(int i=0;i<n;i++){
      if(num[i]<min){
        min=num[i];
      }
    }
  return min;
     
}
int main(){
  int num[100];
 int n;
  cin>>n;
 for(int i=0;i<n;i++){
   cin>>num[i];
 }
  cout<<"Maximum number = "<<getmax(num,n)<<endl;
  cout<<"Minimum number = "<<getmin(num,n)<<endl;
  
}