#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
void solve(string str,vector<string>&ans,string output,int i)
{
    if(i>=str.size())
    {
        ans.push_back(output);
        return;
    }
    //exclusive
    solve(str,ans,output,i+1);
    //inclusive
    char ch=str[i];
    output.push_back(ch);
    solve(str,ans,output,i+1);
}
int main()
{
    string str;
    int i=0;
    cin>>str;
    vector<string>ans;
    string output="";
    solve(str,ans,output,i);
    sort(ans.begin(),ans.end());
    for(auto ele:ans)
    {
        cout<<ele<<" ";
    }
   
    return 0;
}