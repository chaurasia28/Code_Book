#include<iostream>
#include<queue>
#include<map>
using namespace std;
class Node
{
    public:
           int data;
           Node* left;
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
void verticalprint(Node* &root)
{
   if(root==NULL)
   {
    cout<<" ";
   }
    map<int ,map<int,vector<int>>>nodes;
    queue<pair<Node*,pair<int,int > > > q;
    q.push(make_pair(root,make_pair(0,0)));
    while(!q.empty())
    {
       pair<Node*, pair<int,int>>temp=q.front();
       q.pop();
       Node* frontNode=temp.first;
       int hd=temp.second.first;
       int lvl=temp.second.second;
       nodes[hd][lvl].push_back(frontNode->data);
       if(frontNode->left!=NULL)
       {
           q.push(make_pair(frontNode->left,make_pair(hd-1,lvl+1)));
       }
       if(frontNode->right!=NULL)
       {
           q.push(make_pair(frontNode->right,make_pair(hd+1,lvl+1)));
       }

    }
    for(auto i:nodes)
    {
        for(auto j:i.second)
        {
             for(auto k:j.second)
             {
                cout<<k<<" ";
             }
        }
    }


}
int main()
{
    Node* root=NULL;
    int n,arr[100];
    int i=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    buildtree(root,arr,n,i);
    verticalprint(root);
    return 0;
}