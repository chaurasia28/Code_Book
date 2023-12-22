#include<iostream>
using namespace std;
int main()
{
  int r1,r10,r20,r50;
  int amt;
  cout<<"Enter the amount";
  cin>>amt;
  switch(1){
    case 1:r50=amt/50;
    amt=amt%50;
    cout<<"Total number of 50 rupees"<< r50<<endl;
    case 2:r20=amt/20;
    amt=amt%20;
   cout<<"Total number of 20 rupees"<< r20<<endl;
    case 3:r10=amt/10;
    amt=amt%10;
    cout<<"Total number of 10 rupees"<< r10<<endl;
    case 4:r1=amt/1;
    amt=amt%1; 
    cout<<"Total number of 1 rupees"<< r1<<endl;
  }
}