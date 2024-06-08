//Traversing Undirected Graph .Not disconnected graph
#include<iostream>
#include<vector>
#include<list>
#include<unordered_map>
using namespace std;
class Graph
{
   public:
          unordered_map<int,bool>visited;
          unordered_map<int,list<int>>adj;
          //creating the adj list
          void addedge(int u,int v,bool direction)
          {
              adj[u].push_back(v);
              if(direction==0)
              {
                 adj[v].push_back(u);
              }
          }
          //
          void dfs(int node,vector<int>&ans)
          {
               ans.push_back(node);
               visited[node]=true;
               for(auto i:adj[node])
               {
                  if(!visited[i])
                  {
                    dfs(i,ans);
                  }
               }
          }
};
int main()
{
    Graph g;
    int n,m;
    cout<<"Enter the no of nodes";
    cin>>n;
    cout<<"Enter the no of edges";
    cin>>m;
    for(int i=0;i<m;i++)
    {
        int u,v;
        cin>>u;
        cin>>v;
        g.addedge(u,v,0);
    }
    vector<int>ans;
    g.dfs(0,ans);
    for(auto i:ans)
    {
        cout<<i<<" ";
    }
}