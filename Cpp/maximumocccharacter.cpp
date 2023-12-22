#include<iostream>
using namespace std;
char getmaxoccchar(string s){
  int arr[26]={0};
  //counting the array element
  for(int i=0;i<s.size();i++){
    //lower char number
    int number=0;
    if(s[i]>='a' && s[i]<='z'){
      number=s[i]-'a';
    }
    else{
      number=s[i]-'A';
    }  
    arr[number]++;
    }
  //getmax character
  int maxi=-1,ans=0;
  for(int i=0;i<26;i++){
    if(maxi<arr[i]){
      ans=i;
      maxi=arr[i];
    }
  }
  return 'a'+ans;
  }
int main(){
  string s;
  cin>>s;
  char result= getmaxoccchar(s);
  cout<<result<<endl;
}

