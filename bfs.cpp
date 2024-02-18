#include<iostream>
#include<queue>
#include<vector>
#include<unordered_map>
#include<list>
using namespace std;
 class graph{
     public:
        unordered_map<int,list<int>> adj;
         void addedge(int u,int v,bool direction)
         {
               adj[u].push_back(v);
                  if(direction==0)
                   adj[v].push_back(u);
         }
            void print()
        {
              for(auto i:adj)
              {
                  cout<<i.first<<"->";
                  for(auto j:i.second)
                     cout<<j<<",";
                     cout<<endl;   
              }
        }
           void bfs(int source)
           {
              //vector<bool>visited( v,false)

           }

           
 };




int main()
{
   int n;  graph g;
    cout<<"enter the no of nodes"<<endl;
    cin>>n;
    int m;
     cout<<"enter the no of edges"<<endl;
    cin>>m;
            for(int i=0;i<m;i++)
             {
                 int u,v;
                 cin>>u>>v;
                 g.addedge(u,v,0);
             }
                g.print();
return 0;
}