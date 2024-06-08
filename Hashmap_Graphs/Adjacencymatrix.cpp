#include<iostream>
#include<list>
#include<unordered_map>
using namespace std;
class Graph
{
   public:
   unordered_map<int,list<int>>adj;
   void addedge(int u,int v,bool direction)
   {
      //0->undirected graph
      //1->directed graph;
      //creatyion of edge
      adj[u].push_back(v);
      //IF graph is undirected
      if(direction==0)
      {
         adj[v].push_back(u);
      }
   }
   void print()
   {
       for(auto i:adj)
       {
          //Printing nodes
          cout<<i.first<<"->";
          //Printing neighbour of nodes
          for(auto j:i.second)
          {
              cout<<j<<",";
          }
          cout<<endl;
       }
   }
};
int main()
{
    Graph g;
    int n,m;
    cout<<"Enter no of nodes"<<endl;
    cin>>n;
    cout<<"Enter no of edges"<<endl;
    cin>>m;
    //List of edges
    bool dir=0;
    for(int i=0;i<m;i++)
    {
        int u,v;
        cin>>u;
        cin>>v;
        g.addedge(u,v,dir);
    }
    g.print();
}