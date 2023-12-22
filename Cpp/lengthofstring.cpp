#include<iostream>
using namespace std;
int getlength(char name[]){
  int count=0;
  for(int i=0;name[i]!='\0';i++){
    count++;
  }
  return count;
}
int main(){
  char name[20];
  printf("Enter Your name ");
  cin>>name;
   //name[2]='\0';
  cout<<"Your name is "<<name<<endl;
  cout<<"Length-->>"<<getlength(name)<<endl;
}