#include<iostream>
using namespace std;
void reverse(char name[],int n){
  int s=0;
  int e=n-1;
  while(s<=e){
  swap(name[s++],name[e--]);
  }
}
int getlength(char name[]){
 int count=0;
  for(int i=0;name[i]!='\0';i++)
{
 count++; 
}
  return count;
}
int main(){
  char name[20];
  cout<<"Enter Your name"<<endl;
  cin>>name;
 cout<<"Your name is "<<name<<endl;
  int len=getlength(name);
  cout<<"length-->>"<<len<<endl;
  reverse(name,len);
  cout<<"Reverse-->>"<<name<<endl;
  return 0;
}