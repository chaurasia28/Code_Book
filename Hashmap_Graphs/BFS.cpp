#include<iostream>
#include<queue>
#include<vector>
#include<list>
#include<set>
#include<unordered_map>
using namespace std;
class Graph
{
   public:
          unordered_map<int,set<int>>adj;
          vector<int>ans;
          void addedge(int u,int v,bool direction)
          {
            if(direction==0)
            {
             adj[u].insert(v);
             adj[v].insert(u);
            }
          }
          void bfs(vector<bool>&visited,int node)
          {
            queue<int>q;
            q.push(node);
            visited[node]=1;
            while(!q.empty())
            {
                int frontnode=q.front();
                q.pop();
                ans.push_back(frontnode);
                for(auto i:adj[frontnode])
                {
                    if(!visited[i])
                    {
                        q.push(i);
                        visited[i]=1;
                    }
                }
            }
          }
          void print()
          {
             for(int i=0;i<ans.size();i++)
             {
                cout<<ans[i]<<" ";
             }
          }
};
int main()
{
    Graph g;
    int n,m;
    cout<<"Enter no of node"<<endl;
    cin>>n;
    cout<<"Enter no of edges"<<endl;
    cin>>m;
    for(int i=0;i<m;i++)
    {
        int u,v;
        cin>>u;
        cin>>v;
        g.addedge(u,v,0);
    }
    vector<bool>visited(n,false);
    g.bfs(visited,0);
    g.print();
}