#include<iostream>
using namespace std;
class StringManipulator
{
public:
       string s;
       StringManipulator(string str)
      {
        s=str;
      }
      bool operator>(StringManipulator &obj)
      {
        return s>obj.s;
      }
      bool operator<(StringManipulator &obj)
      {
        return s<obj.s;
      }
      bool operator==(StringManipulator &obj)
      {
        return s==obj.s;
      }
};
int main()
{
  string str1,str2;
  cout<<"Enter two string:";
  cin>>str1>>str2;
  StringManipulator s1(str1);
  StringManipulator s2(str2);
  string g,s,e;
  s1<s2?g="True":g="False";
  s1>s2?s="True":s="False";
  s1==s2?e="True":e="False";
  cout<<"S1<S2:"<<g<<endl;
  cout<<"S1>S2:"<<s<<endl;
  cout<<"S1==S2:"<<e<<endl;
}