#include <bits/stdc++.h>
using namespace std;
const int mx = 1e5+123;
vector<int>adj[mx];
bool vis[mx];

void dfs(int u){
    cout<<u<<" ";
    vis[u]=1;
    for(auto v:adj[u]){
        if(vis[v]==0) dfs(v);
    };
    return;
}

int main() {
    adj[1].push_back(2);
    adj[2].push_back(1);

    
    adj[2].push_back(3);
    adj[3].push_back(2);

    adj[3].push_back(4);
    adj[4].push_back(3);

    dfs(3);

    return 0;
}
