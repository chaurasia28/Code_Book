#include <iostream>
#include<stack>
using namespace std;
int main() {
  stack<string>s;
s.push("Priya");
s.push("Chaurasia");
s.push("snehu");
cout<<"Top Element-->>"<<s.top()<<endl;
s.pop(); 
  cout<<"Top Element-->>"<<s.top()<<endl;
  cout<<"Size of stack-->>"<<s.size()<<endl;
  cout<<"empty or not-->>"<<s.empty()<<endl;
}