#include<iostream>
#include<algorithm>
#include<queue>
using namespace std;
class Node{
    public:int data;
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
int height(Node* &root)
{
    if(root==NULL)
    {
        return 0;
    }
    int h1=height(root->left);
    int h2=height(root->right);
    int ans=max(h1,h2)+1;
    return ans;
}
bool isBalance(Node* &root)
{
     if(root==NULL)
     {
        return true;
     }
     int diff=abs(height(root->left)-height(root->right));
     if(diff>1)
     {
        return false;
     }
     return isBalance(root->left)&& isBalance(root->right);
}
int main()
{
   Node* root=NULL;
   int i=0,n;
   int arr[100];
   cin>>n;
   for(int i=0;i<n;i++)
   {
    cin>>arr[i];
   }
   buildtree(root,arr,n,i);
   if(isBalance(root))
   {
    cout<<"Yes"<<endl;
   }
   else
   {
    cout<<"No"<<endl;
   }
}