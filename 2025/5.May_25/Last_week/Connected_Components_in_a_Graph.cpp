#include <bits/stdc++.h>
using namespace std;
const int mx = 1e5+123;
vector<int>adj[mx];
bool vis[mx]; 

void dfs(int u){
    vis[u]=true;
    for(auto v:adj[u]){
        if(!vis[v]) dfs(v);
    }
}

int main() {
    int n,m; cin>>n>>m;
    for (int i = 1; i <=m; i++)
    {
        int u,v; cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    };
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        if(vis[i]==0){
            dfs(i);
            count++;
        }
    }
    cout<<count;
    
    return 0;
}
