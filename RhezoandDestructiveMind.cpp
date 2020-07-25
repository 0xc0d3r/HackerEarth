#include <iostream>
#include <vector>
#include <climits>
 
using namespace std;
 
vector<int> adj[101];
bool visited[101],ap[101];
int disc[101],low[101],parent[101];
 
void init(int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        visited[i]=false;
        ap[i]=false;
        low[i]=INT_MAX;
        parent[i]=-1;
    }
}
 
void dfs(int v,int t)
{
    disc[v]=low[v]=t+1;
    visited[v]=true;
    int child=0;
    int i;
    for(i=0;i<adj[v].size();i++)
    {
        int x=adj[v][i];
        if(!visited[x])
        {
            child++;
            parent[x]=v;
            dfs(x,t+1);
            low[v]=min(low[v],low[x]);
            if(parent[v]==-1&&child>1)
            {
                ap[v]=true;
            }
            if(parent[v]!=-1&&low[x]>=disc[v])
            {
                ap[v]=true;
            }
        }
        else if(parent[v]!=x)
        {
            low[v]=min(low[v],disc[x]);
        }
    }
}
 
 
int main()
{
    std::ios::sync_with_stdio(false);
    int n,m;
    cin>>n>>m;
    while(m--)
    {
        int a,b;
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
 
    init(n+1);
//    for(int i=1;i<=n;i++)
//    {
//        cout<<i<<"- "<<low[i]<<endl;
//    }
    for(int i=1;i<=n;i++)
    {
        if(!visited[i])
        {
            dfs(i,0);
        }
    }
//    for(int i=1;i<=n;i++)
//    {
//        cout<<i<<"- "<<disc[i]<<" "<<low[i]<<endl;
//    }
    int q;
    cin>>q;
    while(q--)
    {
        int x;
        cin>>x;
        if(ap[x])
        {
            cout<<"Satisfied "<<adj[x].size()<<"\n";
        }
        else
        {
            cout<<"Not Satisfied\n";
        }
    }
    return 0;
}
