//Graph Implementation
// #include<iostream>
// #include<vector>
// #include<list>
// #include<unordered_map>
// #include<algorithm>
// using namespace std;
// class graph
// {
//     public:
//            unordered_map<int,list<int>>adj;
//            void addedge(int u,int v,bool direction)
//            {
//                adj[u].push_back(v);
//                //dirction==0 means undirected graph
//                if(direction==0)
//                {
//                    adj[v].push_back(u);
//                }
//            }
//            //Printing adjaceny list
//         void print()
//         {
//           for(auto i:adj)
//           {
//             cout<<i.first<<"->";
//             for(auto j:i.second)
//             {
//                  cout<<j<<",";
//             }
//             cout<<endl;
//           }
//         }
 
// };
// int main()
// {
//     int n,m;
//     cout<<"Enter no of nodes"<<endl;
//     cin>>n;
//     cout<<"Enter no of edges"<<endl;
//     cin>>m;
//     graph g;
//     for(int i=0;i<m;i++)
//     {
//         int u,v;
//         cin>>u>>v;
//         g.addedge(u,v,0);
//     }
//     g.print();
// }



//Breadth First Search for graph algorithm
// #include<iostream>
// #include<queue>
// #include<vector>
// #include<list>
// #include<unordered_map>
// using namespace std;
// class Graph
// {
//     public:
//             unordered_map<int,list<int>>adj;
//             void addedge(int u,int v,bool direction)
//             {
//                  adj[u].push_back(v);
//                  if(direction==0)
//                  {
//                     adj[v].push_back(u);
//                  } 
//             }
//             void bfs(unordered_map<int,bool>&visited,int node)
//             {
//                 queue<int>q;
//                 q.push(node);
//                 visited[node]=1;
//                 while(!q.empty())
//                 {
//                     int front=q.front();
//                     q.pop();
//                     cout<<front<<" ";
//                     for(auto neigh:adj[node])
//                     {
//                         if(!visited[neigh])
//                         {
//                             q.push(neigh);
//                             visited[neigh]=1;
//                         }
//                     }
//                 }

//             }
// };
// int main()
// {
//     Graph g;
//     unordered_map<int,bool>visited;
//     int n,m;
//     cout<<"Enter no of nodes";
//     cin>>n;
//     cout<<"Enter no of vertex";
//     cin>>m;
//     cout<<"Enter edges list";
//     for(int i=0;i<m;i++)
//     {
//         int u,v;
//         cin>>u;
//         cin>>v;
//         g.addedge(u,v,0);
//     }
//     for(int i=0;i<n;i++)
//     {
//         if(!visited[i])
//         {
//            g.bfs(visited,i);
//         }
//     }
// }


//Depth First Search
// #include<iostream>
// #include<queue>
// #include<vector>
// #include<unordered_map>
// #include<list>
// using namespace std;
// class graph
// {
//    public:
//           unordered_map<int,list<int>>adj;
//           void addedge(int u,int v,int direction)
//           {
//                adj[u].push_back(v);
//                if(direction==0)
//                {
//                  adj[v].push_back(u);
//                }
//           }
//           void dfs(unordered_map<int,bool>&visited,int node,vector<int>&component)
//           {
//              component.push_back(node);
//              visited[node]=1;
//              for(auto neigh:adj[node])
//              {
//                 if(!visited[neigh])
//                 {
//                     dfs(visited,neigh,component);
//                 }
//              }
//           }

// };
// int main()
// {
//     graph g;
//     unordered_map<int,bool>visited;
//     int m,n;
//      cout<<"Enter no of nodes";
//      cin>>n;
//      cout<<"Enter no of edges";
//      cin>>m;
//      for(int i=0;i<m;i++)
//      {
//         int u;
//         int v;
//         cin>>u>>v;
//         g.addedge(u,v,0);
//      }
//      vector<vector<int>>ans;
//      for(int i=0;i<n;i++)
//      {
//         if(!visited[i])
//         {
//             vector<int>component;
//             g.dfs(visited,i,component);
//             ans.push_back(component);
//         }
//      }
//      for(auto i:ans)
//      {
//         for(auto j:i)
//         {
//             cout<<j<<" ";
//         }
//      }
// }



//Cycle Detection in a  Directed graph 
// #include<iostream>
// #include<unordered_map>
// #include<list>
// using namespace std;
// class graph
// {
//     public:
//            unordered_map<int,list<int>>adj;
//            void addedge(int u,int v)
//            {
//               adj[u].push_back(v);
//            }
//            bool cycledetect(unordered_map<int,bool>&visited,int node,unordered_map<int,bool>&dfsvisited)
//            {
//               visited[node]=1;
//               dfsvisited[node]=1;
//               for(auto neigh:adj[node])
//               {
//                 if(!visited[neigh])
//                 {
//                     bool cycle=cycledetect(visited,neigh,dfsvisited);
//                     if(cycle==true)
//                     {
//                         return 1;
//                     }
//                 }
//                 else if(dfsvisited[neigh]==true)
//                 {
//                     return 1;
//                 }
//               }
//               dfsvisited[node]=0;
//               return 0;
//            }
           

// };
// int main()
// {
//     unordered_map<int,bool>visited;
//     unordered_map<int,bool>dfsvisited;
//     graph g;
//     int n;
//     cin>>n;
//     int m;
//     cin>>m;
//     for(int i=0;i<m;i++)
//     {
//       int u,v;
//       cin>>u>>v;
//       g.addedge(u,v);
//     }
//     bool flag=0;
//     for(int i=0;i<n;i++)
//     {
//        if(!visited[i])
//        {
//            bool cycle=g.cycledetect(visited,i,dfsvisited);
//            if(cycle)
//            {
//                flag=1;
//                break;
//            }
//        } 
//     }
//     if(flag==1)
//     {
//         cout<<"true"<<endl;
//     }
//     else
//     {
//         cout<<"false"<<endl;
//     }
// }



//Given graph is Bipartitie or not in undirected graph
// #include<iostream>
// #include<vector>
// #include<unordered_map>
// #include<list>
// using namespace std;
// class graph
// {
//    public:
//            unordered_map<int,list<int>>adj;
//            void addedge(int u,int v)
//            {
//               adj[u].push_back(v);
//               adj[v].push_back(u);
//            }
//           bool checkBG(int node,int fill,int *color)
//           {
//             color[node]=fill;
//             for(auto neigh:adj[node])
//             {
//                 if(color[neigh]==-1)
//                 {
//                     bool ans=checkBG(neigh,!fill,color);
//                     if(ans==false)
//                     {
//                         return false;
//                     }
//                 }
//                 else if(color[neigh]==color[node])
//                 {
//                     return false;
//                 }
//             }
//             return true;
//           }
          
// };
// int main()
// {
//    graph g;
//    int n;
//    cin>>n;
//    int color[n];
//    int m;
//    cin>>m;
//    for(int i=0;i<m;i++)
//    {
//       int u,v;
//       cin>>u>>v;
//       g.addedge(u,v);
//    }
//    for(int i=0;i<n;i++)
//    {
//      color[i]=-1;
//    }
//    int flag=1;
//    for(int i=0;i<n;i++)
//    {
//         if(color[i]==-1)
//         {
//             bool ans=g.checkBG(i,0,color);
//             if(ans==false)
//             {
//                 flag=0;
//                 break;
//             }
//         }
//    }
//    if(flag==0)
//    {
//     cout<<"false"<<endl;
//    }
//    else
//    {
//     cout<<"true"<<endl;
//    }
// }




///*****************************************************Linked List******************************************//
// #include<iostream>
// using namespace std;
// class Node
// {
//     public:
//            int data;
//            Node* next;
//            Node(int data)
//            {
//             this->data=data;
//             this->next=NULL;
//            }          
// };
// Node* insert(Node* &head,int data)
// {
//     if(head==NULL)
//     {
//         return new Node(data);
//     }
//     Node* temp=head;
//     while(temp->next!=NULL)
//     {
//         temp=temp->next;
//     }
//     temp->next=new Node(data);
//     return head;
// }
// Node* reverse(Node* &head)
// {
//     if(head==NULL||head->next==NULL)
//     {
//         return NULL;
//     }
//     Node* prev=NULL;
//     Node* curr=head;
//     while(curr!=NULL)
//     {
//         Node* forward=curr->next;
//         curr->next=prev;
//         prev=curr;
//         curr=forward;
//     }
//     return prev;
// }
// void print(Node* &head)
// {
//     if(head==NULL)
//     {
//         cout<<" ";
//     }
//     Node* temp=head;
//     while(temp!=NULL)
//     {
//         cout<<temp->data<<" ";
//         temp=temp->next;
//     }
// }
// int main()
// {
//     Node* root=NULL;
//     int n,arr[100];
//     cin>>n;
//     for(int i=0;i<n;i++)
//     {
//         cin>>arr[i];
//         root=insert(root,arr[i]);
//     }
//     Node* ans=reverse(root);
//     print(ans);
// }


//Middle of the Linked list
// #include<iostream>
// using namespace std;
// class Node
// {
//     public:
//            int data;
//            Node* next;
//            Node(int data)
//            {
//               this->data=data;
//               this->next=NULL;
//            }

// };
// Node* insert(Node* &head,int data)
// {
//    if(head==NULL)
//    {
//     return new Node(data);
//    }
//    Node* temp=head;
//    while(temp->next!=NULL)
//    {
//      temp=temp->next;
//    }
//    temp->next=new Node(data);
//    return head;
// }
// Node* getmiddle(Node* &head)
// {
//     if(head==NULL||head->next==NULL)
//     {
//         return NULL;
//     }
//     Node* slow=head;
//     Node* fast=head->next;
//     while(fast!=NULL)
//     {
//         fast=fast->next;
//         if(fast!=NULL)
//         {
//             fast=fast->next;
//         }
//         slow=slow->next;
//     }
//     return slow;
// }
// int main()
// {
//    Node* root=NULL;
//    int n,arr[100];
//    cin>>n;
//    for(int i=0;i<n;i++)
//    {
//       cin>>arr[i];
//       root=insert(root,arr[i]);
//    }
//    Node* middle=getmiddle(root);
//    if(middle==NULL)
//    {
//      cout<<" ";
//    }
//    else{
//      cout<<middle->data<<endl;
//    }
// }


//Reverse a Linked List in Kth group
// #include<iostream>
// using namespace std;
// class Node
// {
//     public:
//            int data;
//            Node* next;
//            Node(int data)
//            {
//             this->data=data;
//             this->next=NULL;
//            }
// };
// Node* insert(Node* &head,int data)
// {
//    if(head==NULL)
//    {
//       return new Node(data);
//    }
//    Node* temp=head;
//    while(temp->next!=NULL)
//    {
//      temp=temp->next;
//    }
//    temp->next=new Node(data);
//    return head;
// }
// Node* reverse(Node* &head,int k)
// {
//     if(head==NULL)
//     {
//         return NULL;
//     }
//     Node* prev=NULL;
//     Node* curr=head;
//     Node* forward=NULL;
//     int cnt=0;
//     while(cnt<k && curr!=NULL)
//     {
//         forward=curr->next;
//         curr->next=prev;
//         prev=curr;
//         curr=forward;
//         cnt++;
//     }
//     if(forward!=NULL)
//     {
//         head->next=reverse(forward,k);
//     }
//     return prev;
// }
// void print(Node* &head)
// {
//     if(head==NULL)
//     {
//         cout<<" ";
//     }
//     Node* temp=head;
//     while(temp!=NULL)
//     {
//         cout<<temp->data<<" ";
//         temp=temp->next;
//     }
// }
// int main()
// {
//    Node* root=NULL;
//    int n,arr[100];
//    cin>>n;
//    for(int i=0;i<n;i++)
//    {
//     cin>>arr[i];
//     root=insert(root,arr[i]);
//    }
//    int k;
//    cin>>k;
//    Node* ans=reverse(root,k);
//    print(ans);
// }


//Remove duplicates from sorted Linked List
// #include<iostream>
// using namespace std;
// class Node
// {
//     public:
//             int data;
//             Node* next;
//             Node(int data)
//             {
//                  this->data=data;
//                  this->next=NULL;
//             }
// };
// Node* insert(Node* &root,int data)
// {
//   if(root==NULL)
//   {
//     return new Node(data);
//   }
//   Node* temp=root;
//   while(temp->next!=NULL)
//   {
//     temp=temp->next;
//   }
//   temp->next=new Node(data);
//   return root;
// }
// void print(Node* &root)
// {
//     if(root==NULL)
//     {
//         cout<<" ";
//     }
//     Node* temp=root;
//     while(temp!=NULL)
//     {
//         cout<<temp->data<<" ";
//         temp=temp->next;
//     }
// }
// Node* duplicate(Node* &root)
// {
//     Node* dummy=new Node(-1);
//     dummy->next=root;
//     Node* prev=dummy;
//     Node* curr=root;
//     while(curr!=NULL)
//     {
//         if((curr->next!=NULL)&&(curr->data==curr->next->data))
//         {
//             while((curr->next!=NULL)&&(curr->data==curr->next->data))  
//             {
//                 curr=curr->next;
//             }
//              prev->next=curr->next;
//         } 
//         else
//         {
//             prev=curr;
//         }
//         curr=curr->next;
//     }
//     return dummy->next;
// }
// int main()
// {
//     Node* root=NULL;
//     int arr[100];
//     int n;
//     cin>>n;
//     for(int i=0;i<n;i++)
//     {
//         cin>>arr[i];
//         root=insert(root,arr[i]);
//     }
//     Node* ans=duplicate(root);
//     print(ans);

// }

//Sort 0,1,2
// #include<iostream>
// using namespace std;
// class Node
// {
//     public:
//             int data;
//             Node* next;
//             Node(int data)
//             {
//                  this->data=data;
//                  this->next=NULL;
//             }
// };
// Node* insert(Node* &root,int data)
// {
//   if(root==NULL)
//   {
//     return new Node(data);
//   }
//   Node* temp=root;
//   while(temp->next!=NULL)
//   {
//     temp=temp->next;
//   }
//   temp->next=new Node(data);
//   return root;
// }
// void print(Node* &root)
// {
//     if(root==NULL)
//     {
//         cout<<" ";
//     }
//     Node* temp=root;
//     while(temp!=NULL)
//     {
//         cout<<temp->data<<" ";
//         temp=temp->next;
//     }
// }
// Node* sort(Node* &root)
// {
//     Node* temp=root;
//     int countzero=0;
//     int countone=0;
//     int counttwo=0;
//     while(temp!=NULL)
//     {
//         if(temp->data==0)
//         {
//             countzero++;
//         }
//         else if(temp->data==1)
//         {
//             countone++;
//         }
//         else if(temp->data==2)
//         {
//             counttwo++;
//         }
//         temp=temp->next;
//     }
//     temp=root;
//     while(temp!=NULL)
//     {
//        if(countzero!=0)
//        {
//           temp->data=0;
//           countzero--;
//        }
//        else if(countone!=0)
//        {
//           temp->data=1;
//           countone--;
//        }
//        else if(counttwo!=0)
//        {
//          temp->data=2;
//          counttwo--;
//        }
//        temp=temp->next;
//     }
//     return root;
// }
// int main()
// {
//     Node* root=NULL;
//     int arr[100];
//     int n;
//     cin>>n;
//     for(int i=0;i<n;i++)
//     {
//         cin>>arr[i];
//         root=insert(root,arr[i]);
//     }
//     Node* ans=sort(root);
//     print(ans);
// }

//Merge two Sorted Linked List
// #include<iostream>
// using namespace std;
// class Node
// {
//    public:int data;
//           Node* next;
//           Node(int data)
//           {
//             this->data=data;
//             this->next=NULL;
//           }
// };
// Node* insert(Node* &root,int data)
// {
//     if(root==NULL)
//     {
//         return new Node(data);
//     }
//     Node* temp=root;
//     while(temp->next!=NULL)
//     {
//         temp=temp->next;
//     }
//     temp->next=new Node(data);
//     return root;
// }
// Node*  merge(Node* &root1,Node* &root2)
// {
//     if(root1==NULL)
//     {
//         return root2;
//     }
//     if(root2==NULL)
//     {
//         return root1;
//     }
//     Node* root=NULL;
//     while(root1!=NULL && root2!=NULL)
//     {
//         root=insert(root,root1->data);
//         root=insert(root,root2->data);
//         root1=root1->next;
//         root2=root2->next;
//     }
//     while(root1!=NULL)
//     {
//          root=insert(root,root1->data);
//          root1=root1->next;
//     }
//     while(root2!=NULL)
//     {
//         root=insert(root,root2->data);
//          root2=root2->next;
//     }
//    return root;
// }
// void print(Node* &ans)
// {
//    if(ans==NULL)
//    {
//       cout<<" ";
//    }
//    Node* temp=ans;
//    while(temp!=NULL)
//    {
//       cout<<temp->data<<" ";
//       temp=temp->next;
//    }
// }
// int main()
// {
//     Node* root1=NULL;
//     Node* root2=NULL;
//     int n,n2,arr[100];
//     cin>>n;
//     cin>>n2;
//     for(int i=0;i<n;i++)
//     {
//         cin>>arr[i];
//         root1=insert(root1,arr[i]);
//     }
//     int arr2[100];
//     for(int i=0;i<n2;i++)
//     {
//         cin>>arr2[i];
//         root2=insert(root2,arr2[i]);
//     }
//     Node* ans=merge(root1,root2);
//     print(ans);
// }


//Merge two sorted LL
// #include<iostream>
// using namespace std;
// class Node
// {
//    public:int data;
//           Node* next;
//           Node(int data)
//           {
//             this->data=data;
//             this->next=NULL;
//           }
// };
// Node* insert(Node* &root,int data)
// {
//     if(root==NULL)
//     {
//         return new Node(data);
//     }
//     Node* temp=root;
//     while(temp->next!=NULL)
//     {
//         temp=temp->next;
//     }
//     temp->next=new Node(data);
//     return root;
// }
// Node*  solve(Node* &head1,Node* &head2)
// {
//     if(head1->next==NULL)
//     {
//         head1->next=head2;
//         return  head1;
//     }
//      Node* curr1=head1;
//      Node* next1=curr1->next;
//      Node* curr2=head2;
//      Node* next2=curr2->next;
//      while(curr1!=NULL && next1!=NULL && curr2!=NULL)
//      {
//            if(curr1->data<=curr2->data && curr2->data<=next1->data)
//            {
//                 curr1->next=curr2;
//                 next2=curr2->next;
//                 curr2->next=next1;
//                 curr1=curr2;
//                 curr2=next2;
//            }
//            else
//            {
//                 curr1=curr1->next;
//                 next1=next1->next;
//                 if(next1==NULL)
//                 {
//                     curr1->next=curr2;
//                     return head1;
//                 }
//            }
//      }
//      return head1;
// }
// Node* merge(Node* &root1,Node* &root2)
// {
//      Node* ans=NULL;
//      if(root1==NULL)
//      {
//         return root2;
//      }
//      if(root2==NULL)
//      {
//         return root1;
//      }
//      if(root1->data<=root2->data)
//      {
//         ans=solve(root1,root2);  
//      }
//      else
//      {
//         ans=solve(root2,root1);
//      }
//      return ans;

// }
// void print(Node* &ans)
// {
//    if(ans==NULL)
//    {
//       cout<<" ";
//    }
//    Node* temp=ans;
//    while(temp!=NULL)
//    {
//       cout<<temp->data<<" ";
//       temp=temp->next;
//    }
// }
// int main()
// {
//     Node* root1=NULL;
//     Node* root2=NULL;
//     int n,n2,arr[100];
//     cin>>n;
//     cin>>n2;
//     for(int i=0;i<n;i++)
//     {
//         cin>>arr[i];
//         root1=insert(root1,arr[i]);
//     }
//     int arr2[100];
//     for(int i=0;i<n2;i++)
//     {
//         cin>>arr2[i];
//         root2=insert(root2,arr2[i]);
//     }
//     Node* ans=merge(root1,root2);
//     print(ans);
// }



//Add two numbers in Linked List
// #include<iostream>
// using namespace std;
// class Node
// {
//     public:
//            int data;
//            Node* next;
//            Node(int data)
//            {
//             this->data=data;
//             this->next=NULL;
//            }
// };
// Node* insert(Node* &root,int data)
// {
//    if(root==NULL)
//    {
//       return new Node(data);
//    }
//    Node* temp=root;
//    while(temp->next!=NULL)
//    {
//       temp=temp->next;
//    }
//    temp->next=new Node(data);
//    return root;

// }

// void print(Node* &root)
// {
//    if(root==NULL)
//    {
//     cout<<" ";
//    } 
//    Node* temp=root;
//    while(temp!=NULL)
//    {
//         cout<<temp->data<<" ";
//         temp=temp->next;     
//    }

// }
// Node* reverse(Node* &root)
// {
//     if(root==NULL)
//     {
//         return NULL;
//     }
//     Node* prev=NULL;
//     Node* curr=root;
//     while(curr!=NULL)
//     {
//         Node* forward=curr->next;
//         curr->next=prev;
//         prev=curr;
//         curr=forward;
//     }
//     return prev;
// }
// void insertathead(Node* &head,Node* &tail,int data)
// {
//     Node* temp=new Node(data);
//     if(head==NULL)
//     {
//        head=temp;
//        tail=temp;
//     }
//     else
//     {
//         tail->next= temp;
//         tail=temp;
//     }
// }
// Node* sum(Node* &first,Node* &second)
// {
//    Node* head=NULL;
//    Node* tail=NULL;
//    int value,value2;
//    int carry=0;
//    while(first!=NULL || second!=NULL ||carry!=0)
//    {
//         value=0;
//         if(first!=NULL)
//         {
//             value=first->data;
//         }
//         value2=0;
//         if(second!=NULL)
//         {
//             value2=second->data;
//         }
//         int sum=value+value2+carry;
//         int digit=sum%10;
//         insertathead(head,tail,digit);
//         carry=sum/10;
//         if(first!=NULL)
//         {
//             first=first->next;
//         }
//         if(second!=NULL)
//         {
//             second=second->next;
//         }
//    }
//    return head;
// }
// Node* add(Node* &first,Node* &second)
// {
//     first=reverse(first);
//     second=reverse(second);
//     Node* ans=sum(first,second);
//     Node* final=reverse(ans);
//     return final;
// }
// int main()
// {
//    Node* root=NULL;
//    Node* root2=NULL;
//    int n,n2;
//    int arr[100],arr2[100];
//    cin>>n;
//    cin>>n2;
//    for(int i=0;i<n;i++)
//    {
//       cin>>arr[i];
//       root=insert(root,arr[i]);
//    }
//    for(int i=0;i<n2;i++)
//    {
//       cin>>arr2[i];
//       root2=insert(root2,arr2[i]);
//    }
//    Node* ans=add(root,root2);
//    print(ans);
//    return 0;
// }


//Delete node
// #include<iostream>
// using namespace std;
// class Node
// {
//     public:
//            int data;
//            Node* next;
//            Node(int data)
//            {
//             this->data=data;
//             this->next=NULL;
//            }
// };
// Node* insert(Node* &root,int data)
// {
//     if(root==NULL)
//     {
//         return new Node(data);
//     }
//     Node* temp=root;
//     while(temp->next!=NULL)
//     {
//         temp=temp->next;
//     }
//     temp->next=new Node(data);
//     return root;
// }

// void print(Node* &root)
// {
//     if(root==NULL)
//     {
//         cout<<" ";
//     }
//     Node* temp=root;
//     while(temp!=NULL)
//     {
//        cout<<temp->data<<" ";
//        temp=temp->next;
//     }
// }
// Node* deleteNode(Node* &root)
// {
//     if(root==NULL )
//     {
//         return NULL;
//     }
//     if(root->next==NULL)
//     {
//         delete root;
//         return NULL;
//     }
//     Node* temp=root;
//     while(temp->next->next!=NULL)
//     {
//         temp=temp->next;
//     }
//     delete temp->next;
//     temp->next=NULL;
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
//         root=insert(root,arr[i]);
//     }
//     Node* ans=deleteNode(root);
//     print(ans);
// }

/////////////////////////////**********************************************////////////////////////////////
//Reverse a intger
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int rev=0;
//     while(n!=0)
//     {
//         int rem=n%10;
//         rev=rev*10+rem;
//         n=n/10;
//     }
//     cout<<rev<<endl;
// }


//Reverse a string
// #include<iostream>
// #include<stack>
// using namespace std;
// int main()
// {
//     stack<char>s;
//     string str;
//     cin>>str;
//     for(int i=0;i<str.length();i++)
//     {
//         char ch=str[i];
//         s.push(ch);
//     }
//     while(!s.empty())
//     {
//         char ch=s.top();
//         cout<<ch;
//         s.pop();
//     }
//     return 0;
// }


//Chcek given string is valid parentheses
// #include<iostream>
// #include<stack>
// using namespace std;
// bool solve(string str)
// {
//     stack<char>s;
//     for(int i=0;i<str.length();i++)
//     {
//         char ch=str[i];
//         if(ch=='('||ch=='['||ch=='{')
//         {
//             s.push(ch);
//         }
//         else
//         {
//             //stack contain an closing bracket then chcek with stack top
//             if(!s.empty())
//             {
//                 char top=s.top();
//                 if((ch==')'&& top=='(')||(ch==']'&& top=='[')||(ch=='}'&& top=='{'))
//                 {
//                     s.pop();
//                 }
//                 else
//                 {
//                     return false;
//                 }
//             }
//             else
//             {
//                 return false;
//             }
//         }
//     }
//     if(s.empty())
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
  
//     string str;
//     cin>>str;
//     if(solve(str))
//     {
//         cout<<"True"<<endl;
//     }
//     else
//     {
//         cout<<"False"<<endl;
//     }
// }



//First Non-repeating 
// #include<iostream>
// #include<queue>
// using namespace std;
// int main()
// {
//     queue<char>q;
//     int arr[26]={0};
//     string str;
//     string ans="";
//     cin>>str;
//     for(int i=0;i<str.length();i++)
//     {
//         int index=str[i]-'A';
//         arr[index]++;
//         if(arr[index]==1)
//         {
//            q.push(str[i]);
//         }
//         while(!q.empty() && arr[q.front()-'A']>1)
//         {
//             q.pop();
//         }
//         if(q.empty())
//         {
//             ans=ans+"#";
//         }
//         else
//         {
//             ans+=q.front();
//         }

//     }
//     cout<<ans<<" ";
// }


//Climb Stairs:Fibonacci Series
// #include<iostream>
// #include<vector>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     if(n==0 || n==1)
//     {
//         cout<<1<<endl;
//     }
//     vector<int>dp(n+1,0);
//     dp[0]=0;
//     dp[1]=1;
//     dp[2]=2;
//     for(int i=3;i<=n;i++)
//     {
//         dp[i]=dp[i-1]+dp[i-2];
//     }
//     cout<<dp[n]<<endl;
// }

//Frequency of each character in lexiographically order
// #include<iostream>
// #include<string>
// using namespace std;
// int main()
// {
//     int freq[256]={0};
//     string str;
//     getline(cin,str);
//     //cin>>str;
//     for(int i=0;i<str.length();i++)
//     {
//         freq[str[i]]++;
//     }
//     for(int i=0;i<256;i++)
//     {
//         if(freq[i]!=0)
//         {
//            cout<<char(i)<<":"<<freq[i]<<endl;
//         }
//     }
//   return 0;
// }

//Sort an array
// #include<iostream>
// #include<algorithm>
// using namespace std;
// int main()
// {
//     int n,arr[100];
//     cin>>n;
//     for(int i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     }
//     sort(arr+0,arr+n);
//     for(int i=0;i<n;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
// }


//Kth element from list
// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[100];
//     int n;
//     cin>>n;
//     for(int i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     }
//     int key;
//     cin>>key;
//     int ans;
//     for(int i=n-2;i>=0;i--)
//     {
//         if(key==i)
//         {
//             ans=arr[i];
//         }
//     }
//     cout<<ans;
// }

//Convert 0 to five
// #include<iostream>
// using namespace std;
// int reverse(int n)
// {
//     int rev=0;
//     while(n!=0)
//     {
//         int rem=n%10;
//         rev=rev*10+rem;
//         n=n/10;
//     }
//     return rev;
// }
// int main()
// {
//     int n;
//     cin>>n;
//     if(n==0)
//     {
//         cout<<5;
//     }
//     int rev=0;
//     while(n!=0)
//     {
//         int rem=n%10;
//         if(rem==0)
//         {
//             rem=5;
//         }
//         rev=rev*10+rem;
//         n=n/10;
//     }
//     cout<<reverse(rev)<<endl;

// }


// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     for(int i=n;i>=1;i--)
//     {
//        if(i%2!=0)
//        {
//         cout<<i<<endl;;
//        }
//     }
//     for(int i=1;i<n;i++)
//     {
//         if(i%2==0)
//         {
//             cout<<i<<endl;
//         }
//     }
// }

//Backtracking
//Subset of string
// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// void subset(string str,int index,string output,vector<string>&ans)
// {
//     if(index>=str.length())
//     {
//         ans.push_back(output);
//         return ;
//     }
//     //exclude
//     subset(str,index+1,output,ans);
//     //include
//     char ch=str[index];
//     output.push_back(ch);
//     subset(str,index+1,output,ans);
// }
// int main()
// {
//     string output="";
//     vector<string>ans;
//     string str;
//     cin>>str;
//     int index=0;
//     subset(str,index,output,ans);
//     sort(ans.begin(),ans.end());
//     for(auto i:ans)
//     {
//         cout<<i<<" ";
//     }
// }


//Permutation of string
// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// void solve(string str,vector<string>&ans,int index)
// {
//     if(index>=str.length())
//     {
//         ans.push_back(str);
//         return ;
//     }
//     for(int j=index;j<str.length();j++)
//     {
//         swap(str[index],str[j]);
//         solve(str,ans,index+1);
//         swap(str[index],str[j]);//backtracking
//     }
// }
// int main()
// {
//    vector<string>ans;
//    int n,index=0;
//    cin>>n;
//    string str;
//    cin>>str;
//    solve(str,ans,index);
//    sort(ans.begin(),ans.end());
//    for(auto i:ans)
//    {
//     cout<<i<<" ";
//    }
   
// }



// #include<iostream>
// #include<vector>
// using namespace std;
// bool issafe(int row,int col,vector<vector<int>>&board,int n)
// {
//     int x=row;
//     int y=col;
//     while(y>=0)
//     {
//         if(board[x][y]==1)
//         {
//             return false;
//         }
//         y--;
//     }
//     x=row;
//     y=col;
//     while(x>=0 &&y>=0)
//     {
//         if(board[x][y]==1)
//         {
//             return false;
//         }
//         x--;
//         y--;
//     }
//     x=row;
//     y=col;
//     while(x<n && y>=0)
//     {
//         if(board[x][y]==1)
//         {
//             return false;
//         }
//         x++;
//         y--;
//     }
//     return true;
// }
// void add(vector<vector<int>>&board,vector<vector<int>>&ans,int n)
// {
//     vector<int>temp;
//     for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<n;j++)
//         {
//             temp.push_back(board[i][j]);        
//         }
//         ans.push_back(temp);
//     }
// }
// int queen(vector<vector<int>>&board,int j,int n)
// {
//    //base case
//    vector<vector<int>>ans;
//    if(j==n)
//    {
//       add(board,ans,n);
//       return 1;
//    } 
//    int count=0;
//    for(int i=0;i<n;i++)
//    {
//         if(issafe(i,j,board,n))
//         {
//             board[i][j]=1;
//             count+=queen(board,j+1,n);
//             board[i][j]=0;
//         } 
//    }
//    return count;
// }
// int main()
// {
//     int n;
//     cin>>n;
//     vector<vector<int>>board(n,vector<int>(n,0));
//     cout<<queen(board,0,n);
// }


// #include<iostream>
// #include<vector>
// using namespace std;

// void rec(int i,int j,int rows,int cols,int& ans,vector<vector<int> >&maze){
//     if(i==rows-1 && j==cols-1){
//         ans++;
//         return;
//     }
//     if(i<0 || i>=rows || j<0 || j>=cols) return;
//     if(maze[i][j]==1) return;
//     maze[i][j]=1;
//     rec(i+1,j,rows,cols,ans,maze);
//     rec(i-1,j,rows,cols,ans,maze);
//     rec(i,j+1,rows,cols,ans,maze);
//     rec(i,j-1,rows,cols,ans,maze);
//     maze[i][j]=0;
// }

// int main(){
//     int rows,cols;
//     cin >> rows>>cols;
//     int ans=0;
//     vector<vector<int> > maze(rows,vector<int>(cols,0));
//     rec(0,0,rows,cols,ans,maze);
//     cout << ans<<endl;
// }

// #include<iostream>
// #include<vector>
// using namespace std;
// void solve(int i,int j,int row,int col,int &ans,vector<vector<int>>&grid)
// {
//     if(i==row-1 && j==col-1)
//     {
//         ans++;
//         return;
//     }
//     if(i<0 ||i>=row ||j<0 || j>=col)
//     {
//         return;
//     }
//     if(grid[i][j]==1)
//     {
//         return;
//     }
//     grid[i][j]=1;
//     solve(i+1,j,row,col,ans,grid);
//     solve(i-1,j,row,col,ans,grid);
//     solve(i,j+1,row,col,ans,grid);
//     solve(i,j-1,row,col,ans,grid);
//     grid[i][j]=0;

// }

// int main()
// {
//     int row,col;
//     cin>>row>>col;
//     int ans=0;
//     vector<vector<int>>grid(row,vector<int>(col,0));
//     solve(0,0,row,col,ans,grid);
//     cout<<ans<<endl;
// }


//Longest non repeating string
// #include<iostream>
// #include<queue>
// #include<unordered_map>
// using namespace std;
// int main()
// {
//     unordered_map<char,int>mp;
//     string str;
//     queue<char>q;
//     int start=0;
//     int end=0;
//     int maxi=0;
//     cin>>str;
//     for(int i=0;i<str.length();i++)
//     {
//           q.push(str[i]);
//           mp[str[i]]++;
//           while(mp[str[i]]>1)
//           {
//             mp[q.front()]--;
//             q.pop();
//           }
//           while(q.size()>maxi)
//           {
//              maxi=q.size();
//              end=i;
//              start=i-q.size()+1;
//           } 
//     }
//     for(int i=start;i<=end;i++)
//     {
//         cout<<str[i]<<" ";
//     }

// }

//Toogle the string
// #include<iostream>
// using namespace std;
// int main()
// {
//     string str;
//     cin>>str;
//     for(int i=0;i<str.length();i++)
//     {
//         if(str[i]>='A' && str[i]<='Z')
//         {
//             str[i]+=32;
//         }
//         else if(str[i]>='a' && str[i]<='z')
//         {
//             str[i]-=32;
//         }
//     }
//     cout<<str<<endl;
// }

//palindrome
// #include<iostream>
// using namespace std;
// bool palindrome(string str)
// {
//     int s=0;
//     int e=str.length()-1;
//     while(s<e)
//     {
//         if(str[s]!=str[e])
//         {
//             return 0;
//         }
//         s++;
//         e--;
//     }
//     return 1;
// }
// int main()
// {
//     string str;
//     cin>>str;
//     if(palindrome(str))
//     {
//         cout<<"True"<<endl;
//     }
//     else
//     {
//         cout<<"false"<<endl;
//     }
// }

// #include<iostream>
// #include<unordered_map>
// using namespace std;
// int main()
// {
//     char mp[256]={0};
//     string str;
//     cin>>str;
//     for(int i=0;i<str.length();i++)
//     {
//         mp[str[i]]++;
//     }
//     int maxi=0;
//     char extra='\0';//Use this
//     for(int i=0;i<256;i++)
//     {
//          if(mp[i]>maxi)
//          {
//             extra=char(i);//i index convert to char
//             maxi=mp[i];
//          }
//     }
//     cout<<extra<<endl;
// }


//Heap Array
// #include<iostream>
// #include<queue>
// using namespace std;
// int main()
// {
//     priority_queue<int>pq;
//     int n;
//     int arr[100];
//     cin>>n;
//     for(int i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     } 
//     for(int i=0;i<n;i++)
//     {
//         pq.push(arr[i]);
//     }
//     while(!pq.empty())
//     {
//         cout<<pq.top()<<" ";
//         pq.pop();
//     }
// }

// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[100][100];
//     int n,m;
//     cin>>n>>m;
//     for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<m;j++)
//         {
//             cin>>arr[i][j];
//         }
//     }
//     int sr=0;
//     int sc=0;
//     int er=n-1;
//     int ec=m-1;
//     int count=0;
//     int total=n*m;
//     while(count<total)
//     {
//         for(int i=sc;i<=ec && count<total;i++)
//         {
//             cout<<arr[sr][i]<<" ";
//             count++;
//         }
//         sr++;
//         for(int i=sr;i<=er&&count<total;i++)
//         {
//             cout<<arr[i][ec]<<" ";
//             count++;
//         }
//         ec--;
//         for(int i=ec;i>=sc&&count<total;i--)
//         {
//             cout<<arr[er][i]<<" ";
//             count++;
//         }
//         er--;
//         for(int i=er;i>=sr && count<total;i--)
//         {
//             cout<<arr[i][sc]<<" ";
//             count++;
            
//         }
//         sc++;
//     }
// }

// #include<iostream>
// #include<algorithm>
// using namespace std;
// int main()
// {
//     int arr[100][100];
//     int n;
//     cin>>n;
//     for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<n;j++)
//         {
//             cin>>arr[i][j];
//         }
//     }
//     for(int i=0;i<n;i++)
//     {
//         for(int j=i+1;j<n;j++)
//         {
//             int temp=arr[i][j];
//             arr[i][j]=arr[j][i];
//             arr[j][i]=temp;
//         }
//     }
//     for(int i=n-1;i>=0;i--)
//     {
//         for(int j=0;j<n;j++)
//         {
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
   
// }


// #include<iostream>
// #include<algorithm>
// using namespace std;
// void heapify(int i,int *arr,int n)
// {
//     int left=2*i+1;
//     int right=2*i+2;
//     int largest=i;
//     if(left<=n && arr[left]>arr[largest])
//     {
//         largest=left;
//     }
//     if(right<=n && arr[right]>arr[largest])
//     {
//         largest=right;
//     }
//     if(largest!=i)
//     {
//         swap(arr[largest],arr[i]);
//         heapify(largest,arr,n);
//     }
// }
// int main()
// {
//     int n,arr[100];
//     cin>>n;
//     for(int i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     }
//     for(int i=n/2-1;i>=0;i--)
//     {
//          heapify(i,arr,n);
//     }
//     for(int i=0;i<n;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
// }

