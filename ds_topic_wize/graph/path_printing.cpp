#include <bits/stdc++.h>
using namespace std;
vector<int> adj_list[1005];
bool vis[1005];
int level[1005];
int parent[1005];

void bfs(int src){
    queue<int>q;
    q.push(src);
    vis[src]=true;
    level[src] = 0;
    
    while (!q.empty())
    {
        int per = q.front();
        q.pop();
        for(auto x:adj_list[per]){
            if(vis[x]==false){
                q.push(x);
                vis[x]=true;
                level[x]= level[per]+1;
                parent[x]=per;
            }
        }
    }
}

int main() {
    int n,e; cin>>n>>e;
    while (e--)
    {
        int a,b; cin>>a>>b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }
    int src,dest; cin>>src>>dest;
    memset(vis,false,sizeof(vis));
    memset(level,-1,sizeof(level));
    memset(parent,-1,sizeof(parent));
    bfs(src);
    cout<<level[dest]<<endl;
    vector<int>path;
    int node = dest;
    while (node!=-1)
    {
        path.push_back(node);
        node = parent[node];
    }
    reverse(path.begin(),path.end());
    for(auto x: path) cout<<x<<" ";

    return 0;
}
