#include <bits/stdc++.h>
using namespace std;
const int mx = 1e5+123;
vector<int>adj[mx];
bool visited[mx];
void dfs(int u){
    cout<<u<<" ";
    visited[u]=1;
    for(auto v: adj[u]){
        if(visited[v]==0) dfs(v);
    }
}

int main() {
    int n,m; cin>>n>>m;
    for (int i = 1; i <= m; i++)
    {
        int u,v; cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    };
    dfs(1);
    return 0;
}
