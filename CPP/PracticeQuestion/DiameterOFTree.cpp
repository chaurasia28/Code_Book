#include<iostream>
#include<queue>
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
int diameter(Node* &root)
{
    if(root==NULL)
    {
        return 0;
    }
    int leftdiam=diameter(root->left);
    int rightdiam=diameter(root->right);
    int comb=height(root->left)+1+height(root->right);
    return max(leftdiam,max(rightdiam,comb));
}
int main()
{
    Node* root=NULL;
    int n,arr[100],i=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    buildtree(root,arr,n,i);
    cout<<"Diameter of Tree:"<<diameter(root)<<endl;
}