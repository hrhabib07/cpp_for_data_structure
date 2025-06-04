#include <bits/stdc++.h>
using namespace std;
const int mx = 1e5+123;
long long int r = 1;
vector<int>adj[mx];
bool visited[mx];
void dfs(int u){
    visited[u]=1;
    for(auto v:adj[u]){
        if(!visited[v]) {
            r=2*r;
            dfs(v);
        }
    }
}

int main() {
    int n,m; cin>>n>>m;
    int init=-1;
    for (int i = 1; i <= m; i++)
    {
        int u,v; cin>>u>>v;
        if(i==1) init=u;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    if(init!=-1) dfs(init);
    cout<<r<<endl;
    return 0;
}
