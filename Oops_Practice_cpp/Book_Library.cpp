#include<iostream>
#include<string.h>
using namespace std;
class Book
{
public:
        string author,title;
        int publication_year;
        Book(string au,string ti,int yr)
        {
          author=au;
          title=ti;
          publication_year=yr;
        }
       void display()
      {
        cout<<"Author:"<<author<<endl;
        cout<<"Title:"<<title<<endl;
        cout<<"Publication Year:"<<publication_year<<endl;
      }
     ~Book()
      {
        cout<<"Destructor of the Book:"<<author<<endl;
      }
};
int main()
{
  string au,ti;
  int yr;
  cout<<"Enter author:\n";
  getline(cin,au);
  cout<<"Enter title:\n";
  getline(cin,ti);
  cout<<"Enter P_Year:\n";
  cin>>yr;
  Book b1(au,ti,yr);
  b1.display();
}