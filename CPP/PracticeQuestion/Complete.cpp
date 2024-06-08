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
        if( arr[i]!=-1)
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
void totalcount(Node*&root,int &total)
{
   if(root==NULL)
   {
      return;
   }
   totalcount(root->left,total);
   if(root->data!=-1)
   {
     total++;
   }
   totalcount(root->right,total);
}
bool completetree(Node* &root,int i,int total)
{
 
    if(root==NULL && i<total)
    {
      return false;
    }
   else if(root==NULL)
   {
      return true;
   }
    else 
    {
      bool left=completetree(root->left,2*i+1,total);
      bool right=completetree(root->right,2*i+2,total);
      return left&&right;
    }
}
int main()
{
   Node* root=NULL;
   int arr[100];
   int n,index=0;
   cin>>n;
   for(int i=0;i<n;i++)
   {
    cin>>arr[i];
   }
   int i=0,total=0;
   buildtree(root,arr,n,i);
   totalcount(root,total);
   if(completetree(root,index,total))
   {
      cout<<"True"<<" ";
   }
   else
   {
      cout<<"False"<<" ";
   }
   return 0;
}
//1 3 5 -1 2 -1 2 -1 -1 -1 -1