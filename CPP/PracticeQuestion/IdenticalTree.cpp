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
bool identicaltree(Node* &root1,Node* &root2)
{
    if(root1==NULL && root2==NULL)
    {
        return true;
    }
    if(root1!=NULL && root2==NULL)
    {
        return false;
    }
    if(root1==NULL && root2!=NULL)
    {
        return false;
    }
    bool leftans=identicaltree(root1->left,root2->left);
    bool rightans=identicaltree(root1->right,root2->right);
    bool dataans=root1->data==root2->data;
    if(leftans && rightans && dataans)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    Node* root1=NULL;
    Node* root2=NULL;
    int i1=0;
    int i2=0;
    int n1,n2,arr[100],arr2[100];
    cin>>n1>>n2;
    for(int i=0;i<n1;i++)
    {
       cin>>arr[i]; 
    }
    buildtree(root1,arr,n1,i1);
    for(int i=0;i<n2;i++)
    {
       cin>>arr2[i]; 
    }
    buildtree(root2,arr2,n2,i2);
    cout<<"Tree is identical or not:"<<identicaltree(root1,root2)<<endl;
    return 0;
}