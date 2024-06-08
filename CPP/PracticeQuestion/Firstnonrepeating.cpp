#include<iostream>
#include<queue>
using namespace std;
int main()
{
    string str,ans;
    cin>>str;
    queue<char>q;
    int arr[26]={0};
    for(int i=0;i<str.length();i++)
    {
       int value=str[i]-'a';
       arr[value]++;
       if(arr[value]==1)
       {
          q.push(str[i]);
       }  
       while(!q.empty() && arr[q.front()-'a']>1)
       {
           q.pop();
       }
       if(q.empty())
       {
          ans=ans+"0";
       }
       else
       {
         ans=ans+q.front();
       }
    }
    cout<<ans<<" ";
}