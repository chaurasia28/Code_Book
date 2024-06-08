#include<iostream>
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
        if(i<n && arr[i]!=-1)
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
void countleaf(Node* &root,int &cnt)
{
    if(root==NULL)
    {
        return;
    }
    countleaf(root->left,cnt);
    if(root->left==NULL && root->right==NULL)
    {
        cnt++;
    }
    countleaf(root->right,cnt);

}
int main()
{
   Node* root=NULL;
   int n,cnt=0;
   int arr[100];
   int i=0;
   cin>>n;
   for(int i=0;i<n;i++)
   {
      cin>>arr[i];
   }
   buildtree(root,arr,n,i);
   countleaf(root,cnt);
   cout<<"LeafNode Count:"<<cnt<<endl;
}