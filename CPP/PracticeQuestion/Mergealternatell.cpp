// #include<iostream>
// #include<queue>
// using namespace std;
// void merge(queue<int>&q1,queue<int>&q2)
// {
//     if(q1.empty() && q2.empty())
//     {
//         cout<<"No Element"<<" ";
//         return;
//     }
//     while(!q1.empty()&&!q2.empty())
//     {
//         cout<<q1.front()<<" ";
//         q1.pop();
//         cout<<q2.front()<<" ";
//         q2.pop();
//     }
//     while(!q1.empty())
//     {
//         cout<<q1.front()<<" ";
//         q1.pop();
//     }
//      while(!q2.empty())
//     {
//         cout<<q2.front()<<" ";
//         q2.pop();
//     }

// }
// int main()
// {
//     queue<int>q1;
//     queue<int>q2;
//     int n1,n2;
//     cin>>n1>>n2;
//     for(int i=0;i<n1;i++)
//     {
//         int data;
//         cin>>data;
//         q1.push(data);
//     }
//     for(int i=0;i<n2;i++)
//     {
//         int data;
//         cin>>data;
//         q2.push(data);
//     }   
//     if(q1.empty() && q2.empty())
//     {
//         cout<<"No Element"<<" ";
//     }
//     merge(q1,q2); 
//     return 0;
// }
#include<iostream>
#include<vector>
using namespace std;
void merge(vector<int>&arr1,vector<int>&arr2)
{
    int i=0;
    int j=0;
    while(i<arr1.size() && j<arr2.size())
    {
        cout<<arr1[i]<<" ";
        i++;
        if(j<arr2.size())
        {
            cout<<arr2[j]<<" ";
            j++;
        }
    }
    while(i<arr1.size())
    {
        cout<<arr1[i]<<" ";
        i++;
    }
    while(j<arr2.size())
    {
        cout<<arr2[j]<<" ";
        j++;
    }
}
int main()
{
   int n1,n2;
   cin>>n1>>n2;
   vector<int>arr1(n1);
   vector<int>arr2(n2);
   for(int i=0;i<n1;i++)
   {
       cin>>arr1[i];
   }
    for(int i=0;i<n2;i++)
   {
     cin>>arr2[i];
   }
   if(n1==0 && n2==0)
   {
    cout<<"No element"<<endl;
   }
   else{
      merge(arr1,arr2);
   }
   return 0;
}