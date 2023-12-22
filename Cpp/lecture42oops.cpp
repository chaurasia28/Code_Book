#include<iostream>
#include<string.h>
using namespace std;
class Hero{
//public is access modifier for accessing data member and function of an object outside the class
//private is access modifier for accessing data member and data function of an object inside the class
 private:
       //Property of class name Hero
       int health;
public:
       //Property of class name Hero
       char level;
       char *name;
      static int timetocomplete;
       //behaviour of class name Hero
       void print()
       {
        cout<<endl;
        cout<<"[";
        cout<<"Name :"<<name<<",";
        cout<<"Health :"<<health<<",";
        cout<<"level :"<<level<<"]";
        cout<<endl;
       }
      //Default Constructor
       Hero()
       {
        cout<<"Constructor created"<<endl;
         name=new char[100];
       }
      //Parameterised Constructor
       Hero(int health)
      {
        this->health=health;
        cout<<"This carrying current object address"<<this<<endl;
      }
      Hero(int health,char level)
      {
        this->health=health;
        this->level=level;
      }
      //Copy Constructor
      Hero (Hero& temp)
      {
        char *ch=new char[strlen(temp.name)+1];
        strcpy(ch,temp.name);
        this->name=ch;
        //due to static hero temp....therfore dot operator used
             this->health=temp.health;
             this->level=temp.level;
      }
      //Getter
       int gethealth()
      {
        return health;
      }
      int getlevel()
      {
        return level;
      }

      //Setter
      void sethealth(int h)
      {
        health=h;
      }
      void setlevel(char ch)
      {
        level=ch;
      }
     void setname(char name[])
     {
      strcpy(this->name,name);
     }
     ~Hero()
      {
        cout<<"Destructor called"<<endl;
      }
     static int  random()
     {
        return timetocomplete;
     }      
};
int Hero::timetocomplete=5;
int main()
{
  //static function:
 
  cout<<Hero::random()<<endl;
  
  //cout<<Hero::timetocomplete<<endl;
  /*Hero next;
  next.timetocomplete=6;
  cout<<Hero::timetocomplete<<endl;
  cout<<next.timetocomplete<<endl;*/
  
  
 /* Hero heroh1;
  heroh1.sethealth(90);
  heroh1.setlevel('D');
  char name[7]="Priya";
  heroh1.setname(name);
  // heroh1.print();
 //Default copy constructor
  Hero heroh2(heroh1);
  // heroh2.print();
  heroh1.name[0]='R';
  heroh1.print();
  heroh2.print();
  //Copy assignment operator
  heroh1=heroh2;
  heroh1.print();
  heroh2.print();*/
  
 /* Hero T(101,'C');
  T.print();
  Hero P(T);
  P.print();*/
  
  
 /*cout<<"Hi"<<endl;
  Hero a;
  Hero *b=new Hero;
 cout<<"Hello"<<endl;
 cout<<"Hi"<<endl;
  Hero c(90);
  cout<<"Address of c"<<&c<<endl;
  cout<<"Health :"<<c.gethealth()<<endl;
  Hero *d=new Hero(11);
  cout<<"Address of d"<<d<<endl;
  cout<<"Health :"<<c.gethealth()<<endl;
  cout<<"Hello"<<endl;
  cout<<"Hi"<<endl;
  Hero temp(100,'A');
  temp.print();
  cout<<"Hello"<<endl;*/

  
 /* //Static allocation:
  Hero h2;
  h2.sethealth(90);
  h2.setlevel('A');
  cout<<"Health is "<<h2.gethealth()<<endl;
  cout<<"Level is"<<h2.level<<endl;
  //Dynamic allocation:
  Hero *b=new Hero;
  b->sethealth(90);
  b->setlevel('A');
  cout<<"Health is"<<(*b).gethealth()<<endl;
  cout<<"Level is"<<(*b).level<<endl;
  cout<<"Health is"<<b->gethealth()<<endl;
  cout<<"Level is"<<b->level<<endl;*/

  
  /*//creating object of class name Hero:Hero is user-define datatype
  Hero h1;
  //size of object:
  cout<<"size of :"<<sizeof(h1)<<endl;
  //initialise the class member
  h1.sethealth(70);
  h1.level='A';
  //Accessing the class member
  cout<<"health :"<<h1.gethealth()<<endl;
  cout<<"level :"<<h1.level<<endl;*/
  
  //Destructor
  //statically-->destructor called automatically
  /*Hero e;
  //dynamiclly-->destructor called manually
  Hero *f=new Hero;
  delete f;*/
  return 0;
}