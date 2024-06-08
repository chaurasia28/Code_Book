//Height of tree
#include<iostream>
#include<algorithm>
#include<queue>
using namespace std;
class Node{
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
        if(i<n && arr[i]!=-1 )
        {
            front->left=new Node(arr[i]);
            q.push(front->left);
            i++;
        }
        if(i<n && arr[i]!=-1)
        {
            front->right=new Node(arr[i]);
            q.push(front->right); 
            i++;
        }
    }
}
int height(Node* &root)
{
    if(root==NULL)
    {
        return 0;
    }
    int left=height(root->left);
    int right=height(root->right);
    int ans=max(left,right)+1;
    return ans;
}
void inordertraversal(Node* &root)
{
    if(root==NULL)
    {
        return ;
    }
    inordertraversal(root->left);
    cout<<root->data<<" ";
    inordertraversal(root->right);
}
int main()
{
    Node* root=NULL;
    int arr[100];
    int n,i=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        
    }
    buildtree(root,arr,n,i);
    inordertraversal(root);
    cout<<"Height of Tree:"<<height(root)<<endl;
    return 0;
}
