#include<iostream>
#include<queue>
#include<map>
using namespace std;
class Node
{
    public:
           int data;
           Node*left;
           Node* right;
           Node(int data)
           {
            this->data=data;
            this->left=NULL;
            this->right=NULL;
           }

};
void buildtree(Node* &root,int *arr,int n,int i)
{
    queue<Node*>q;
    root=new Node(arr[0]);
    q.push(root);
    i=1;
    while(i<n && !q.empty())
    {
        Node* front=q.front();
        q.pop();
        if(i<n && arr[i]!=-1)
        {
           front->left=new Node(arr[i]);
           q.push(front->left);
        }
        i++;
        if(i<n && arr[i]!=-1)
        {
            front->right=new Node(arr[i]);
            q.push(front->right);
        }
        i++;
    }
}
void bottomview(Node* &root)
{
    if(root==NULL)
    {
        cout<<" ";
    }
    map<int,int>bottomview;
    queue<pair<Node*,int>>q;
    q.push(make_pair(root,0));
    while(!q.empty())
    {
        pair<Node*,int>temp=q.front();
        q.pop();
        Node* frontnode=temp.first;
        int hd=temp.second;
            bottomview[hd]=frontnode->data;
        if(frontnode->left!=NULL)
        {
            q.push(make_pair(frontnode->left,hd-1));
        }
        if(frontnode->right!=NULL)
        {
            q.push(make_pair(frontnode->right,hd+1));
        }
    }
    for(auto i:bottomview)
    {
        cout<<i.second<<" ";
    }
}
int main()
{
    Node* root=NULL;
    int n,i=0;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    buildtree(root,arr,n,i);
    bottomview(root);
    return 0;
}
