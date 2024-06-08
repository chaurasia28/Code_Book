#include<iostream>
#include<queue>
using namespace std;
int main()
{
    priority_queue<int>pq;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
    int data;
    cin>>data;
    pq.push(data);
    }
    cout<<"Topmost Element:"<<pq.top()<<endl;
    pq.pop();
    cout<<"Size of Max-Heap:"<<pq.size()<<endl;
    if(pq.empty())
    {
    cout<<"Priority queue is empty"<<endl;
    }
    else
    {
    cout<<"Priority queue is not empty"<<endl;
    }

    //MIN-HEAP
    priority_queue<int,vector<int>,greater<int>>pq2;
    int n2;
    cin>>n2;
    for(int i=0;i<n2;i++)
    {
    int data;
    cin>>data;
    pq2.push(data);
    }
    cout<<"Topmost Element:"<<pq2.top()<<endl;
    pq2.pop();
    cout<<"Size of Max-Heap:"<<pq2.size()<<endl;
    if(pq2.empty())
    {
    cout<<"Priority queue is empty"<<endl;
    }
    else
    {
    cout<<"Priority queue is not empty"<<endl;
    }
}