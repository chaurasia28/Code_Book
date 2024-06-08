#include<iostream>
#include<stack>
using namespace std;
bool balancebracket(string str)
{
    stack<int>s;
    for(int i=0;i<str.size();i++)
    {
        //current element
        char ch=str[i];
       // IF bracket are open then we need to push the element in stack
        if(ch=='('||ch=='['||ch=='{')
        {
            s.push(ch);
        }
        else 
        {
           //IF bracket are close then we need to pop the element from stack
           if(!s.empty())
           {
              char top=s.top();
              if(ch==')'&& top=='('
              ||ch==']' && top=='['
              ||ch=='}' && top=='{')
              {
                s.pop();
              }
              else
              {
                return false;//Donot match 
              }
           }
           else
           {
            //IF stack is empty then we comparing empty stack with close bracket that is unbalance
             return false;
           }
        }
    }
    if(s.empty())
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    string str;
    cin>>str;
    cout<<balancebracket(str)<<endl;
}