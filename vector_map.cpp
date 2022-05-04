#include<iostream>'
#include<vector>
#include<queue>
using namespace std;

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
        queue<int>q;
        q.push(0);
        visited[0]=1;
        while(q.size()!=0)
        {

        int x=q.front();
        q.pop();
        visited[x]=2;
        cout<<x;
        for(int j=0;j<adj[x].size();j++)
        {
            if(visited[adj[x][j]]!=0)
            {
                q.push(adj[x][j]);
                visited[adj[x][j]]=1;
            }
        }
        }




}
