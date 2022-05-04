#include<iostream>'
#include<vector>
#include<queue>
using namespace std;
int dfs_vist(int i,vector<int>adj[],vector<int>&visited)
{
    int j;
    visited[i]=1;
    cout<<i;
    for(int j=0;j<=adj[i].size();j++)
    {
        if(visited[adj[i][j]]==0)
            dfs_vist(adj[i][j],adj,visited);
    }
    visited[i]=2;
}

int main()
{
    int k,u,N;
    cout<<"enter no of vrtx";
    cin>>N;
    vector<int>adj[N];
    for(int i=0;i<N-1;i++)
    {
        cout<<"hoew many vertices are connected to the vertex";
        cin>>u;
        for(int j=0;j<u-1;j++)
        {
            cout<<"vertex"<<i<<"connected with";
            cin>>k;
            adj[i].push_back(k);
        }
    }
    for(int i=0;i<k-1;i++)
    {

    cout<<i<<":";
    for(int j=0;j<adj[i].size();j++)
        cout<<adj[i][j]<<",";
    cout<<endl;
    }
    vector<int>visited(N,0);

        for(int j=0;j<=N-1;j++)
        {
            if(visited[j]==0)
            {
                dfs_vist(j,adj,visited);
            }
        }

        }






