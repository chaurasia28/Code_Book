#include<iostream>
using namespace std;
long long sqrtinteger(int n){
  int start=0;
  int end=n-1;
  long long mid=start+(end-start)/2;
  long long ans=0;
  while(start<=end){
    if(mid*mid==n){
      return mid;
    }
    else if(mid*mid>n){
      end=end-1;
    }
    else{
      ans=mid;
      start=start+1;
    }
    mid=start+(end-start)/2;
  }
  return ans;
}
double moreprecision(int n,int tempsol,int precision ){
  double factor=1;
  double ans=tempsol;
  for(int i=0;i<precision;i++){
    factor=factor/10;
    for(double j=ans;j*j<n;j=j+factor){
      ans=j;
    }
  }
  return ans;
}
int main(){
  int n,tempsol;
  double result;
  cout<<"Enter the n number"<<endl;
  cin>>n;
  tempsol=sqrtinteger(n);
  result=moreprecision(n,tempsol,3);
  cout<<"square root of "<<n<<"is "<<result;
  return 0;
}