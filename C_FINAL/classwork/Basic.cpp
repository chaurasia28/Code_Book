#include<iostream>
using namespace std;
void reachhome(int src,int dest)
{
  cout<<"source "<<src<<" destination"<<dest<<endl;
  if(src==dest)
  {
    cout<<"You reached !!"<<endl;
    return ;
  }
      src++;
      reachhome(src,dest); 
}
int main()
{
   int src;
   int dest;
   cin>>src>>dest;
   reachhome(src,dest);
}