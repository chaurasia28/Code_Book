#include<iostream>
#include<vector>
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
Node* insert(Node* &root,int val)
{
    if(root==NULL)
    {
       return new Node(val);
    }
    else if(root->data>val)
    {
        root->left=insert(root->left,val);
    }
    else
    {
        root->right=insert(root->right,val);
    }
    return root;

}
void inorder(Node* &root,vector<int>&ans)
{
    if(root==NULL)
    {
        return;
    }
    inorder(root->left,ans);
    ans.push_back(root->data);
    inorder(root->right,ans);
}
void preorder(Node* &root,vector<int>&ans,int &i)
{
    if(root==NULL)
    {
        return;
    }
    root->data=ans[i++];
    preorder(root->left,ans,i);
    preorder(root->right,ans,i);
}
void print(Node* &root)
{
    queue<Node*>q;
    q.push(root);
    while(!q.empty())
    {
        Node* front=q.front();
        q.pop();
        cout<<front->data<<" ";
        if(front->left!=NULL)        {
            q.push(front->left);
        }
        if(front->right!=NULL)
        {
            q.push(front->right);
        }
    }
}

void convertBSTtoMinheap(Node* &root)
{
    int i=0;
    vector<int>ans;
    inorder(root,ans);
    preorder(root,ans,i);
    print(root);
}

int main()
{
    Node* root=NULL;
    int arr[100];
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        root=insert(root,arr[i]);
    }
   convertBSTtoMinheap(root);
}