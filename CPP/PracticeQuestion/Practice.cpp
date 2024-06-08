// //Height of tree
// #include<iostream>
// #include<queue>
// using namespace std;
// class  Node
// {
//   public:
//          int data;
//          Node* left;
//          Node* right;
//          Node(int data)
//          {
//             this->data=data;
//             this->left=NULL;
//             this->right=NULL;
//          }

// };
// void buildtree(Node* &root,int *arr,int i,int n)
// {
//      queue<Node*>q;
//      root=new Node(arr[0]);
//      q.push(root);
//      i=1;
//      while(i<n && !q.empty())
//      {
//         Node* front=q.front();
//         q.pop();
//         if(i<n && arr[i]!=-1)
//         {
//            front->left=new Node(arr[i]);
//            q.push(front->left);
//         }
//         i++;
//         if(i<n && arr[i]!=-1)
//         {
//             front->right=new Node(arr[i]);
//             q.push(front->right);
//         }
//         i++;
//      }
// }
// int height(Node* &root)
// {
//     if(root==NULL)
//     {
//         return 0;
//     }
//     int h1=height(root->left);
//     int h2=height(root->right);
//     int ans=max(h1,h2)+1;
//     return ans;
// }
// int main()
// {
//    Node* root=NULL;
//    int arr[100];
//    int n;
//    int i=0;
//    cin>>n;
//    for(int i=0;i<n;i++)
//    {
//     cin>>arr[i];
//    }
//    buildtree(root,arr,i,n);
//    cout<<"Height of tree:"<<height(root)<<endl;
// }



// //Identical Tree
// #include<iostream>
// #include<queue>
// using namespace std;
// class Node
// {
//     public:
//            int data;
//            Node* left;
//            Node* right;
//            Node(int data)
//            {
//             this->data=data;
//             this->left=NULL;
//             this->right=NULL;
//            }           
// };
// void buildtree(Node* &root,int *arr,int i,int n)
// {
//     queue<Node*>q;
//     root=new Node(arr[0]);
//     q.push(root);
//     i=1;
//     while(i<n && !q.empty())
//     {
//         Node* front=q.front();
//         q.pop();
//         if(i<n && arr[i]!=-1)
//         {
//             front->left=new Node(arr[i]);
//             q.push(front->left);
//         }
//         i++;
//         if(i<n && arr[i]!=-1)
//         {
//              front->right=new Node(arr[i]);
//              q.push(front->right);
//         }
//         i++;
//     }
// }
// bool identicaltree(Node* &root1,Node* &root2)
// {
//     if(root1==NULL && root2==NULL)
//     {
//         return true;
//     }
//     if(root1!=NULL && root2==NULL)
//     {
//         return false;
//     }
//     if(root1==NULL && root2!=NULL)
//     {
//         return false;
//     }
//     //for both non null
//     bool left=identicaltree(root1->left,root2->left);
//     bool right=identicaltree(root1->right,root2->right);
//     bool ans=root1->data==root2->data;
//     if(left && right && ans)
//     {
//         return true;
//     }
//     else
//     {
//         return false;
//     }
// }
// int main()
// {
//     Node* root1=NULL;
//     Node* root2=NULL;
//     int arr[100];
//     int arr2[100];
//     int i=0;
//     int n;
//     cin>>n;
//     for(int i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     }
//     int n2;
//     cin>>n2;
//     for(int i=0;i<n2;i++)
//     {
//       cin>>arr2[i];
//     }
//     buildtree(root1,arr,i,n);
//     buildtree(root2,arr2,i,n2);
//     if(identicaltree(root1,root2))
//     {
//         cout<<"True"<<endl;
//     }
//     else
//     {
//         cout<<"False"<<endl;
//     }
//     return 0;
// }


// //Invert a Binary Tree
// #include<iostream>
// #include<queue>
// using namespace std;
// class Node
// {
//     public:
//            int data;
//            Node* left;
//            Node* right;
//            Node(int data)
//            {
//              this->data=data;
//              this->left=NULL;
//              this->right=NULL;
//            }
// };
// void buildtree(Node* &root,int *arr,int i,int n)
// {
//     queue<Node*>q;
//     root=new Node(arr[0]);
//     q.push(root);
//     i=1;
//     while(i<n && !q.empty())
//     {
//        Node* root=q.front();
//        q.pop();
//        if(i<n && arr[i]!=-1)
//        {
//           root->left=new Node(arr[i]);
//           q.push(root->left);
//        }
//        i++;
//        if(i<n && arr[i]!=-1)
//        {
//         root->right=new Node(arr[i]);
//         q.push(root->right);
//        }
//        i++;
//     }

// }
// void mirror(Node* &root)
// {
//     if(root==NULL)
//     {
//         return;
//     }
//     else
//     {
//         Node* temp=NULL;
//         mirror(root->left);
//         mirror(root->right);
//         temp=root->left;
//         root->left=root->right;
//         root->right=temp;
//     }
// }
// void inorder(Node* &root)
// {
//     if(root==NULL)
//     {
//         return;
//     }
//     inorder(root->left);
//     cout<<root->data<<" ";
//     inorder(root->right);
// }
// int main()
// {
//     Node* root=NULL;
//     int i=0;
//     int arr[100];
//     int n;
//     cin>>n;
//     for(int i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     }
//     buildtree(root,arr,i,n);
//     mirror(root);
//     inorder(root);
// }

//Symmeytric Tree
// #include<iostream>
// #include<queue>
// using namespace std;
// class Node
// {
//     public:
//            int data; 
//            Node* left;
//            Node* right;
//            Node(int data)
//            {
//                 this->data=data;
//                 this->left=NULL;
//                 this->right=NULL;
//            }

// };
// void buildtree(Node* &root,int *arr,int i,int n)
// {
//     queue<Node*>q;
//     root=new Node(arr[0]);
//     q.push(root);
//     i=1;
//     while(i<n && !q.empty())
//     {
//        Node* front=q.front();
//        q.pop();
//        if(i<n && arr[i]!=-1)
//        {
//           front->left=new Node(arr[i]);
//           q.push(front->left);
//        }
//        i++;
//        if(i<n && arr[i]!=-1)
//        {
//           front->right=new Node(arr[i]);
//           q.push(front->right);
//        }
//        i++;
//     }
// }
// bool symmetric(Node* root1,Node* root2)
// {
//     if(root1==NULL && root2==NULL)
//     {
//         return true;
//     }
//     if(root1 && root2 && root1->data==root2->data)
//     {
//         return symmetric(root1->left ,root2->right) && symmetric(root1->right ,root2->left);
//     }
//     return false;
// }
// int main()
// {
//     Node* root=NULL;
//     int n;
//     int i=0;
//     cin>>n;
//     int arr[100];
//     for(int i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     }
//     buildtree(root,arr,i,n);
//     if(symmetric(root,root))
//     {
//         cout<<"True"<<endl;
//     }
//     else
//     {
//         cout<<"False"<<endl;
//     }
// }


//Diameter of tree
// #include<iostream>
// #include<algorithm>
// #include<queue>
// using namespace std;
// class Node
// {
//     public:
//            int data;
//            Node* left;
//            Node* right;
//            Node(int data)
//            {
//             this->data=data;
//             this->left=NULL;
//             this->right=NULL;
//            }
// };
// void buildtree(Node* &root,int *arr,int i,int n)
// {
//     queue<Node*>q;
//     root=new Node(arr[0]);
//     q.push(root);
//     i=1;
//     while(i<n && !q.empty())
//     {
//         Node* front=q.front();
//         q.pop();
//         if(i<n && arr[i]!=-1)
//         {
//             front->left=new Node(arr[i]);
//             q.push(front->left);
//         }
//         i++;
//         if(i<n && arr[i]!=-1)
//         {
//             front->right=new Node(arr[i]);
//             q.push(front->right);
//         }
//         i++;
//     }
// }
// int height(Node* &root)
// {
//     if(root==NULL)
//     {
//         return 0;
//     }
//     int h1=height(root->left);
//     int h2=height(root->right);
//     int ans=max(h1,h2)+1;
//     return ans;
// }
// int diameter(Node* &root)
// {
//      if(root==NULL)
//      {
//         return 0;
//      }
//      int op1=diameter(root->left);
//      int op2=diameter(root->right);
//      int op3=height(root->left)+1+height(root->right);
//      int ans=max(op1,max(op2,op3));
//      return ans;
// }
// int main()
// {
//     Node* root=NULL;
//     int n,i=0;
//     cin>>n;
//     int arr[100];
//     for(int i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     }
//     buildtree(root,arr,i,n);
//     cout<<"Diameter of tree:"<<diameter(root)<<endl;
// }


// #include<iostream>
// #include<queue>
// #include<algorithm>
// using namespace std;
// class Node
// {
//     public:int data;
//            Node* left;
//            Node* right;
//            Node(int data)
//            {
//             this->data=data;
//             this->left=NULL;
//             this->right=NULL;
//            }
// };
// void buildtree(Node* &root,int *arr,int i,int n)
// {
//     queue<Node*>q;
//     root=new Node(arr[i]);
//     q.push(root);
//     i=1;
//     while(i<n && !q.empty())
//     {
//         Node* front=q.front();
//         q.pop();
//         if(i<n && arr[i]!=-1)
//         {
//             front->left=new Node(arr[i]);
//             q.push(front->left);
//         }
//         i++;
//         if(i<n && arr[i]!=-1)
//         {
//             front->right=new Node(arr[i]);
//             q.push(front->right);
//         }
//         i++;
//     }
// }
// int height(Node* root)
// {
//     if(root==NULL)
//     {
//         return 0;
//     }
//     int h1=height(root->left);
//     int h2=height(root->right);
//     int ans=max(h1,h2)+1;
//     return ans;
// }
// bool balancetree(Node* &root)
// {
//     if(root==NULL)
//     {
//         return true;
//     }
//     int left=balancetree(root->left);
//     int right=balancetree(root->right);
//     bool diff=abs(height(root->left)-height(root->right))<=1;
//     if(left && right && diff)
//     {
//         return true;
//     }
//     else
//     {
//         return false;
//     }
// }
// int main()
// {
//    Node* root=NULL;
//    int n,i=0;
//    cin>>n;
//    int arr[100];
//    for(int i=0;i<n;i++)
//    {
//     cin>>arr[i];
//    }
//    buildtree(root,arr,i,n);
//    if(balancetree(root))
//    {
//     cout<<"True"<<endl;
//    }
//    else
//    {
//     cout<<"False"<<endl;
//    }
// }


//Check BT is BST-Inorder traversal of binary tree is sorted
// #include<iostream>
// #include<queue>
// #include<vector>
// using namespace std;
// class Node
// {
//     public:
//            int data;
//            Node* left;
//            Node* right;
//            Node(int data)
//            {
//             this->data=data;
//             this->left=NULL;
//             this->right=NULL;
//            }
// };
// void buildtree(Node* &root,int *arr,int i,int n)
// {
//     queue<Node*>q;
//     root=new Node(arr[0]);
//     q.push(root);
//     i=1;
//     while(i<n && !q.empty())
//     {
//         Node* front=q.front();
//         q.pop();
//         if(i<n && arr[i]!=-1)
//         {
//             front->left=new Node(arr[i]);
//             q.push(front->left);
//         }
//         i++;
//         if(i<n && arr[i]!=-1)
//         {
//             front->right=new Node(arr[i]);
//             q.push(front->right);
//         }
//         i++;
//     }
// }
// void inorder(Node* &root ,vector<int>&ans)
// {
//     if(root==NULL)
//     {
//         return ;
//     }
//     inorder(root->left,ans);
//     ans.push_back(root->data);
//     inorder(root->right,ans);
// }
// bool BST(Node* &root,vector<int>&ans)
// {
//     for(int i=0;i<ans.size()-1;i++)
//     {
//         if(ans[i]>=ans[i+1])
//         {
//           return false;
//         }
//     }
//     return true;
// }
// int main()
// {
//     Node* root=NULL;
//     int n;
//     int i=0;
//     int arr[100];
//     cin>>n;
//     for(int i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     }
//     buildtree(root,arr,i,n);
//     vector<int>ans;
//     inorder(root,ans);
//     if(BST(root,ans))
//     {
//         cout<<"BST"<<endl;
//     }
//     else
//     {
//         cout<<"NOT BST"<<endl;
//     }
   
// }

//Sorted Array to Balance  Binary Search tree
// #include<iostream>
// using namespace std;
// class Node
// {
//     public:
//            int data;
//            Node* left;
//            Node* right;
//            Node(int data)
//            {
//             this->data=data;
//             this->left=NULL;
//             this->right=NULL;
//            }
// };
// Node* SortedArrayBST(int *arr,int s,int e)
// {
//     Node* root=NULL;
//      if(s>e)
//      {
//         return NULL;
//      }
//      int mid=s+(e-s)/2;
//      root=new Node(arr[mid]);
//      root->left=SortedArrayBST(arr,s,mid-1);
//      root->right=SortedArrayBST(arr,mid+1,e);
//      return root;
// }
// void preorder(Node*&root)
// {
//     if(root==NULL)
//     {
//         return;
//     }
//     cout<<root->data<<" ";
//     preorder(root->left);
//     preorder(root->right);
// }
// int main()
// {
//     int n;
//     cin>>n;
//     int arr[100];
//     for(int i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     }
//     Node* root=SortedArrayBST(arr,0,n-1);
//     preorder(root);
// }


////******************************Zig-Zag Traversal*********************************//
// #include<iostream>
// #include<queue>
// #include<vector>
// #include<algorithm>
// using namespace std;
// class Node
// {
//    public:
//           int data;
//           Node* left;
//           Node* right;
//           Node(int data)
//           {
//             this->data=data;
//             this->left=NULL;
//             this->right=NULL;
//           }
// };
// void buildtree(Node* &root,int *arr,int i,int n)
// {
//     queue<Node*>q;
//     root=new Node(arr[0]);
//     q.push(root);
//     i=1;
//     while(i<n && !q.empty())
//     {
//         Node* front=q.front();
//         q.pop();
//         if(i<n && arr[i]!=-1)
//         {
//             front->left=new Node(arr[i]);
//             q.push(front->left);
//         }
//         i++;
//         if(i<n && arr[i]!=-1)
//         {
//             front->right=new Node(arr[i]);
//             q.push(front->right);
//         }
//         i++;
//     }
// }
// vector<vector<int>>zigzag(Node* &root)
// {
//      queue<Node*>q;
//      bool lefttoright=true;
//      vector<vector<int>>ans;
//      q.push(root);
//      while(!q.empty())
//      {
//         int size=q.size();
//         vector<int>temp(size);
//         for(int i=0;i<size;i++)
//         {
//             Node* front=q.front();
//             q.pop();
//             int index=lefttoright?i:size-i-1;
//             temp[index]=front->data;
//             if(front->left!=NULL)
//             {
//                 q.push(front->left);
//             }
//             if(front->right!=NULL)
//             {
//                 q.push(front->right);
//             }
//         }
//         lefttoright=!lefttoright;
//         ans.push_back(temp);
//      }
//      return ans;
// }
// int main()
// {
//     Node* root=NULL;
//     int arr[100];
//     int n,i=0;
//     cin>>n;
//     for(int i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     }
//     buildtree(root,arr,i,n);
//     vector<vector<int>>ans=zigzag(root);
//     for(const auto&i:ans)
//     {
//         for(auto j:i)
//         {
//             cout<<j<<" ";
//         }
//     }
//     return 0;
// }

// #include<iostream>
// #include<queue>
// using namespace std;
// class Node
// {
//    public:
//           int data;
//           Node* left;
//           Node* right;
//           Node(int data)
//           {
//             this->data=data;
//             this->left=NULL;
//             this->right=NULL;
//           }
// };
// void buildtree(Node* &root,int *arr,int i,int n)
// {
//     queue<Node*>q;
//     root=new Node(arr[0]);
//     q.push(root);
//     i=1;
//     while(i<n && !q.empty())
//     {
//         Node* front=q.front();
//         q.pop();
//         if(i<n && arr[i]!=-1)
//         {
//             front->left=new Node(arr[i]);
//             q.push(front->left);
//         }
//         i++;
//         if(i<n && arr[i]!=-1)
//         {
//             front->right=new Node(arr[i]);
//             q.push(front->right);
//         }
//         i++;
//     }
// }
// void inorder(Node* &root)
// {
//     if(root==NULL)
//     {
//         return ;
//     }
//     inorder(root->left);
//     if(root->left==NULL && root->right==NULL)
//     {
//         cout<<root->data<<" ";
//     }
//     inorder(root->right);
// }
// void preorder(Node* root)
// {
//     if(root==NULL)
//     {
//         return;
//     }
//     cout<<root->data<<" ";
//     preorder(root->left);
//     preorder(root->right);
// }
// void postorder(Node* &root)
// {
//     if(root==NULL)
//     {
//         return;
//     }
//     postorder(root->left);
//     postorder(root->right);
//     cout<<root->data<<" ";
// }
// int main()
// {
//     Node* root=NULL;
//     int arr[100];
//     int n,i=0;
//     cin>>n;
//     for(int i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     }
//     buildtree(root,arr,i,n);
//     cout<<"Leaf Nodes:"<<endl;
//     inorder(root);
//     cout<<endl;
//     cout<<"Preorder Traversal:"<<endl;
//     preorder(root);
//     cout<<endl;
//     cout<<"Postorder Traversal:"<<endl;
//     postorder(root);
// }


// //Top view of binary Tree
// #include<iostream>
// #include<queue>
// #include<map>
// #include<vector>
// #include<algorithm>
// using namespace std;
// class Node
// {
//     public:
//             int data;
//             Node* left;
//             Node* right;
//             Node(int data)
//             {
//                  this->data=data;
//                  this->left=NULL;
//                  this->right=NULL;
//             }
// };
// void buildtree(Node* &root,int *arr,int i,int n)
// {
//     queue<Node*>q;
//     root=new Node(arr[0]);
//     q.push(root);
//     i=1;
//     while(i<n && !q.empty())
//     {
//        Node* front=q.front();
//        q.pop();
//        if(i<n && arr[i]!=-1)
//        {
//           front->left=new Node(arr[i]);
//           q.push(front->left);
//        }
//        i++;
//        if(i<n && arr[i]!=-1)
//        {
//           front->right=new Node(arr[i]);
//           q.push(front->right);
//        }
//        i++;
//     }
// }
// vector<int> toptraversal(Node* &root)
// {
//     vector<int>ans;
//      map<int,int>topview;//hd,nodesdata
//      queue<pair<Node*,int>>q;//nodes,hd
//      q.push(make_pair(root,0));
//      while(!q.empty())
//      {
//         pair<Node*,int>temp=q.front();
//         q.pop();
//         Node* front=temp.first;
//         int hd=temp.second;
//         if(topview.find(hd)==topview.end())
//         {
//             topview[hd]=front->data;
//         }
//         if(front->left!=NULL)
//         {
//             q.push(make_pair(front->left,hd-1));
//         }
//         if(front->right!=NULL)
//         {
//             q.push(make_pair(front->right,hd+1));
//         }
//      }
//      for(auto i:topview)
//      {
//         ans.push_back(i.second);
//      }
//   return ans;
// }
// int main()
// {
//     Node* root=NULL;
//     int arr[100];
//     int n,i=0;
//     cin>>n;
//     for(int i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     }
//     buildtree(root,arr,i,n);
//     vector<int>ans=toptraversal(root);
//     for(auto i:ans)
//     {
//         cout<<i<<" ";
//     }
// }

///////////////*****************Binary Tree Traversal********************////////////////////////
// #include<iostream>
// #include<vector>
// #include<queue>
// using namespace std;
// class Node
// {
//     public:
//            int data;
//            Node* left;
//            Node* right;
//            Node(int data)
//            {
//             this->data=data;
//             this->left=NULL;
//             this->right=NULL;
//            }
// };
// void buildtree(Node* &root,int *arr,int i,int n)
// {
//     queue<Node*>q;
//     root=new Node(arr[0]);
//     q.push(root);
//     i=1;
//     while(i<n && !q.empty())
//     {
//        Node* front=q.front();
//        q.pop();
//        if(i<n && arr[i]!=-1)
//        {
//          front->left=new Node(arr[i]);
//          q.push(front->left);
//        }
//        i++;
//        if(i<n && arr[i]!=-1)
//        {
//         front->right=new Node(arr[i]);
//         q.push(front->right);
//        }
//        i++;
//     }
// }
// void traversalleft(Node* &root,vector<int>&ans)
// {
//     if(root==NULL||(root->left==NULL && root->right==NULL))
//     {
//         return;
//     }
//     ans.push_back(root->data);
//     if(root->left!=NULL)
//     {
//         traversalleft(root->left,ans);
//     }
//     else
//     {
//         traversalleft(root->right,ans);
//     }   
// }
// void traversalleaf(Node* &root,vector<int>&ans)
// {
//     if(root==NULL)
//     {
//         return;
//     }
//     traversalleaf(root->left,ans);
//     if(root->left==NULL && root->right==NULL)
//     {
//         ans.push_back(root->data);
//         return;
//     }
//      traversalleaf(root->right,ans);
// }
// void traversalright(Node* &root,vector<int>&ans)
// {
//     if(root==NULL||(root->left==NULL && root->right==NULL))
//     {
//         return;
//     }
//     if(root->right!=NULL)
//     {
//         traversalright(root->right,ans);
//     }
//     else
//     {
//         traversalright(root->left,ans);
//     }
//     ans.push_back(root->data);
// }
// vector<int>boundary(Node* &root)
// {
//    vector<int>ans;
//    if(root==NULL)
//    {
//     return ans;
//    }
//    //Pushing the root node
//    ans.push_back(root->data);
//    //For traversing left subtree boundary and leave leaf node
//    traversalleft(root->left,ans);
//    //For traversing the leaf node
//    traversalleaf(root->left,ans);
//    traversalleaf(root->right,ans);
//    //For traversing the right subtree boundary  but in opposite direction
//    traversalright(root->right,ans);
//    return ans;
// }
// int main()
// {
//     Node* root=NULL;
//     int n,arr[100];
//     int i=0;
//     cin>>n;
//     for(int i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     }
//     buildtree(root,arr,i,n);
//     vector<int>ans=boundary(root);
//     for(auto i:ans)
//     {
//         cout<<i<<" ";
//     }
//     return 0;
// }

//Count leaf Nodes
// #include<iostream>
// #include<queue>
// using namespace std;
// class Node
// {
//     public:
//            int data;
//            Node* left;
//            Node* right;
//            Node(int data)
//            {
//             this->data=data;
//             this->left=NULL;
//             this->right=NULL;
//            }
// };
// void buildtree(Node* &root,int *arr,int i,int n)
// {
//     queue<Node*>q;
//     root=new Node(arr[0]);
//     q.push(root);
//     i=1;
//     while(!q.empty())
//     {
//         Node* front=q.front();
//         q.pop();
//         if(i<n && arr[i]!=-1)
//         {
//             front->left=new Node(arr[i]);
//             q.push(front->left);
//         }
//         i++;
//         if(i<n && arr[i]!=-1)
//         {
//             front->right=new Node(arr[i]);
//             q.push(front->right);
//         }
//         i++;
//     }
// }
// void countleaf(Node* &root,int &cnt)
// {
//     if(root==NULL)
//     {
//         return;
//     }
//     countleaf(root->left,cnt);
//     if(root->left==NULL && root->right==NULL)
//     {
//         cnt++;
//     }
//     countleaf(root->right,cnt);
// }
// int main()
// {
//      Node* root=NULL; 
//      int arr[100];
//      int i=0;
//      int n,cnt=0;
//      cin>>n;
//      for(int i=0;i<n;i++)
//      {
//         cin>>arr[i];
//      }

//      buildtree(root,arr,i,n);
//      countleaf(root,cnt);
//      cout<<cnt<<endl;

// }

//Perfect Tree
//#include<iostream>
// #include<vector>
// #include<queue>
// #include<algorithm>
// #include<math.h>
// using namespace std;
// class Node
// {
//     public:
//            int data;
//            Node* left;
//            Node* right;
//            Node(int data)
//            {
//             this->data=data;
//             this->left=NULL;
//             this->right=NULL;
//            }
// };
// void buildtree(Node* &root,int *arr,int i,int n)
// {
//     queue<Node*>q;
//     root=new Node(arr[0]);
//     q.push(root);
//     i=1;
//     while(i<n && !q.empty())
//     {
//        Node* front=q.front();
//        q.pop();
//        if(i<n && arr[i]!=-1)
//        {
//          front->left=new Node(arr[i]);
//          q.push(front->left);
//        }
//        i++;
//        if(i<n && arr[i]!=-1)
//        {
//         front->right=new Node(arr[i]);
//         q.push(front->right);
//        }
//        i++;
//     }
// }
// int height(Node* &root)
// {
//     if(root==NULL)
//     {
//         return 0;
//     }
//     int h1=height(root->left);
//     int h2=height(root->right);
//     int ans=max(h1,h2)+1;
//     return ans;

// }

 
// int main()
// {
//     Node* root=NULL;
//     int n,arr[100];
//     int i=0;
//     cin>>n;
//     for(int i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     }
//     buildtree(root,arr,i,n);
//     int h=height(root);
//     int exp_h=pow(2,h)-1;
//     if(n==exp_h)
//     {
//         cout<<"True"<<endl;
//     }
//     else
//     {
//         cout<<"False"<<endl;
//     }
//     return 0;
// }


//Sum of nodes
// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[100];
//     int n;
//     int sum=0;
//     cin>>n;
//     for(int i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     }
//     for(int i=0;i<n;i++)
//     {
//         sum+=arr[i];
//     }
//     cout<<sum<<endl;
//     return 0;
// }



//Complete Tree
// #include<iostream>
// #include<queue>
// using namespace std;
// class Node
// {
//    public:
//           int data;
//           Node* left;
//           Node* right;
//           Node(int data)
//           {
//             this->data=data;
//             this->left=NULL;
//             this->right=NULL;
//           }
// };
// void buildtree(Node* &root,int *arr,int i,int n)
// {
//     queue<Node*>q;
//     root=new Node(arr[0]);
//     q.push(root);
//     i=1;
//     while(i<n  &&!q.empty())
//     {
//         Node* front=q.front();
//         q.pop();
//         if(i<n && arr[i]!=-1)
//         {
//             front->left=new Node(arr[i]);
//             q.push(front->left);
//         }
//         i++;
//         if(i<n && arr[i]!=-1)
//         {
//             front->right=new Node(arr[i]);
//             q.push(front->right);
//         }
//         i++;
//     }
// }
// void count(Node* &root,int &cnt)
// {
//     if(root==NULL)
//     {
//         return;
//     }
//     count(root->left,cnt);
//     cnt++;
//     count(root->right,cnt);
// }
// bool complete (Node* &root,int i,int cnt)
// {
//    if(root==NULL)
//    {
//      return true;
//    }
//    if(i>=cnt)
//    {
//       return false;
//    }
//    else
//    {
//      bool left=complete(root->left,2*i+1,cnt);
//      bool right= complete(root->right,2*i+2,cnt);
//      return (left&&right);
//    }
// }
// int main()
// {
//     Node* root=NULL;
//     int n,cnt=0;
//     int arr[100];
//     int i=0;
//     cin>>n;
//     for(int i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     }
//     buildtree(root,arr,i,n);
//     count(root,cnt);
//     if(complete(root,0,cnt))
//     {
//         cout<<"Complete Binary Tree"<<endl;
//     }
//     else
//     {
//         cout<<"Not Complete Binary Tree"<<endl;
//     }
//     return 0;
// }


//Largest element in each level
// #include<iostream>
// #include<queue>
// using namespace std;
// class Node
// {
//    public:
//           int data;
//           Node* left;
//           Node* right;
//           Node(int data)
//           {
//             this->data=data;
//             this->left=NULL;
//             this->right=NULL;
//           }
// };
// void buildtree(Node* &root,int *arr,int i,int n)
// {
//     queue<Node*>q;
//     root=new Node(arr[0]);
//     q.push(root);
//     i=1;
//     while(i<n  &&!q.empty())
//     {
//         Node* front=q.front();
//         q.pop();
//         if(i<n && arr[i]!=-1)
//         {
//             front->left=new Node(arr[i]);
//             q.push(front->left);
//         }
//         i++;
//         if(i<n && arr[i]!=-1)
//         {
//             front->right=new Node(arr[i]);
//             q.push(front->right);
//         }
//         i++;
//     }
// }
// vector<int>largestelement(Node* &root)
// {
//     vector<int>ans;
//     queue<Node*>q;
//     q.push(root);
//     while(!q.empty())
//     {
//         int size=q.size();
//         vector<int>tempans;
//         for(int i=0;i<size;i++)
//         {
//             Node* front=q.front();
//             q.pop();
//             tempans.push_back(front->data);
//             if(front->left!=NULL)
//             {
//                 q.push(front->left);
//             }
//             if(front->right!=NULL)
//             {
//                 q.push(front->right);
//             }
//         }
//         int maxi=INT_MIN;
//         for(int i=0;i<tempans.size();i++)
//         {
//             if(tempans[i]>maxi)
//             {
//                maxi=tempans[i];
//             }
//         }
//         ans.push_back(maxi);
//     }
//     return ans;
// }
// int main()
// {
//     Node* root=NULL;
//     int n,cnt=0;
//     int arr[100];
//     int i=0;
//     cin>>n;
//     for(int i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     }
//     buildtree(root,arr,i,n);
//     vector<int>ans=largestelement(root);
//     for(auto i:ans)
//     {
//         cout<<i<<" ";
//     }
//     return 0;
// }


//Insert the element in BST,Search in BST,Delete in BST
// #include<iostream>
// #include<queue>
// using namespace std;
// class Node
// {
//     public:
//            int data;
//            Node* left;
//            Node* right;
//            Node(int data)
//            {
//              this->data=data;
//              this->left=NULL;
//              this->right=NULL;
//            }
// };
// Node* insertinBST(Node* &root,int data)
// {
//     if(root==NULL)
//     {
//         return new Node(data);
//     }
//     if(root->data>data)
//     {
//         root->left=insertinBST(root->left,data);
//     }
//     else
//     {
//         root->right=insertinBST(root->right,data);
//     }
//     return root;
// }
// void levelorder(Node* &root)
// {
//     queue<Node*>q;
//     q.push(root);
//     while(!q.empty())
//     {
//         Node* front=q.front();
//         q.pop();
//         cout<<front->data<<" ";
//         if(front->left!=NULL)
//         {
//             q.push(front->left);
//         }
//         if(front->right!=NULL)
//         {
//             q.push(front->right);
//         }
//     }
// }
// void inorder(Node* &root)
// {
//     if(root==NULL)
//     {
//         return;
//     }
//     inorder(root->left);
//     cout<<root->data<<" ";
//     inorder(root->right);
// }
// bool search(Node* &root,int key)
// {
//       Node* temp=root;
//       while(temp!=NULL)
//       {
//         if(temp->data==key)
//         {
//             return true;
//         }
//         else if(temp->data>key)
//         {
//             temp=temp->left;
//         }
//         else
//         {
//             temp=temp->right;
//         }
//       }
//       return false;
// }
// Node* minval(Node* &root)
// {
//     Node* temp=root;
//     while(temp->left!=NULL)
//     {
//         temp=temp->left;
//     }
//     return temp;
// }
// Node* deleteNode(Node* &root,int val)
// {
//     if(root==NULL)
//     {
//         return root;
//     }
//     if(root->data==val)
//     {
//        //0child 
//        if(root->left==NULL && root->right==NULL)
//        {
//           delete root;
//           return NULL;
//        }
//        //1child
//         if(root->left!=NULL && root->right==NULL)
//         {
//             Node* temp=root->left;
//             delete root;
//             return temp;
//         }
//         if(root->left==NULL && root->right!=NULL)
//         {
//             Node* temp=root->right;
//             delete root;
//             return temp;
//         }
//         //2child
//         if(root->left!=NULL && root->right!=NULL)
//         {
//             int mini=minval(root->right)->data;
//             root->data=mini;
//             root->right=deleteNode(root->right,mini);
//             return root;
//         }

//     }
//     else if(root->data>val)
//     {
//        root->left=deleteNode(root->left,val);
//        return root;
//     }
//     else
//     {
//         root->right= deleteNode(root->right,val);
//         return root;
//     }
//     return root;
// }
// int main()
// {
//     Node* root=NULL;
//     int n,arr[100];
//     cin>>n;
//     for(int i=0;i<n;i++)
//     {
//         cin>>arr[i];
//         root=insertinBST(root,arr[i]);
//     }
//    // levelorder(root);
//    inorder(root);
//    int key;
//    cin>>key;
//    if(search(root,key))
//    {
//     cout<<"Present"<<endl;
//    }
//    else
//    {
//     cout<<"Not Present"<<endl;
//    }
//    Node* ans=deleteNode(root,key);
//    inorder(ans);
//    return 0;
// }



//Kth Largest element in the BST
// #include<iostream>
// #include<vector>
// using namespace std;
// class Node
// {
//    public:
//           int data;
//           Node* left;
//           Node* right;
//           Node(int data)
//           {
//             this->data=data;
//             this->left=NULL;
//             this->right=NULL;
//           }
// };
// Node* insert(Node* &root,int data)
// {
//     if(root==NULL)
//     {
//         return new Node(data);
//     }
//     else if(root->data>data)
//     {
//         root->left=insert(root->left,data);
//     }
//     else
//     {
//         root->right=insert(root->right,data);
//     }
//     return root;
// }
// void inorder(Node* &root,vector<int>&ans)
// {
//     if(root==NULL)
//     {
//         return ;
//     }
//     inorder(root->left,ans);
//     ans.push_back(root->data);
//     inorder(root->right,ans);
// }
// int main()
// {
//    vector<int>ans;
//    Node* root=NULL;
//    int n;
//    cin>>n;
//    int arr[100];
//    for(int i=0;i<n;i++)
//    {
//     cin>>arr[i];
//     root=insert(root,arr[i]);
//    }
//    int k;
//    cin>>k;
//    inorder(root,ans);
//    int n2=ans.size();
//    cout<<ans[n2-k]<<endl;
// }


//LCA
// #include<iostream>
// #include<queue>
// #include <bits/stdc++.h> 
// using namespace std;
// class Node
// {
//     public:int data;
//            Node* left;
//            Node* right;
//            Node(int data)
//            {
//              this->data=data;
//              this->left=NULL;
//              this->right=NULL;
//            }
// };
// void buildtree(Node* &root,int *arr,int i,int n)
// {
//     queue<Node*>q;
//     root=new Node(arr[0]);
//     q.push(root);
//     i=1;
//     while(i<n && !q.empty())
//     {
//         Node* front=q.front();
//         q.pop();
//         if(i<n && arr[i]!=-1)
//         {
//             front->left=new Node(arr[i]);
//             q.push(front->left);
//         }
//         i++;
//         if(i<n && arr[i]!=-1)
//         {
//             front->right=new Node(arr[i]);
//             q.push(front->right);
//         }
//         i++;
//     }
// }
// Node* lca(Node* &root,int p,int q)
// {
//     if(root==NULL)
//     {
//         return NULL;
//     }
//     if(root->data==p ||root->data==q)
//     {
//         return root;
//     }
//     Node* left=lca(root->left,p,q);
//     Node* right=lca(root->right,p,q);
//     if(left!=NULL && right==NULL)
//     {
//         return left;
//     }
//     if(left==NULL && right!=NULL)
//     {
//         return right;
//     }
//      if(left!=NULL && right!=NULL)
//     {
//         return  root;
//     }
//     else
//     {
//         return NULL;
//     }

// }
// int main()
// {
//     Node* root=NULL;
//     int n,i=0,arr[100];
//     cin>>n;
//     for(int i=0;i<n;i++)
//     {
//      cin>>arr[i];
//     }
//     buildtree(root,arr,i,n);
//     int p,q;
//     cin>>p;
//     cin>>q;
//     Node* lac_node=lca(root,p,q);
//   if(lac_node!=NULL)
//   {
//     cout<<lac_node->data<<endl;
//   }
//   else
//   {
//     cout<<-1<<endl;
//   }
// }



