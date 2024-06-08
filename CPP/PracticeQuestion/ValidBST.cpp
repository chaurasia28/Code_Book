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
bool validBST(vector<int>&ans)
{
    for(int i=0;i<ans.size()-1;i++)
    {
        if(ans[i]>ans[i+1])
        {
            return false;
        }
    }
    return true;
}
int main()
{
   vector<int>ans;
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
   inorder(root,ans);
   if(validBST(ans))
   {
       cout<<"True"<<endl;
   }
   else
   {
    cout<<"False"<<endl;
   }
   return 0;
}