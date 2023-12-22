#include<iostream>
using namespace std;
char tolower(char ch,int len){
  if (ch>='a' && ch<='z'){
    return ch;
  }
  else{
    return ch-'A'+'a';
  }
}
int  Palindrome(char name[],int len){
  int s=0;
  int e=len-1;
  while(s<e){
    if(tolower(name[s])!=tolower(name[e])){
      return 0;
    }
    else{
      s++;
      e--;
    }
  }
  return 1;
}
int length(char name[]){
  int count=0;
  for(int i=0;name[i]!='\0';i++){
   count++; 
  }
  return count;
}
int main(){
  char name[100];
  cout<<"Enter Your Name"<<endl;
  cin>>name;
  //Finding the length of an name
  int len=length(name);
  cout<<"Length-->>"<<len<<endl;
  int pal=Palindrome(name,len);
  cout<<"palindrome"<<pal<<endl;
  return 0;
}