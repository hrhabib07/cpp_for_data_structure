#include <bits/stdc++.h>
using namespace std;
const int mx = 1e5+123;
vector<int>adj[mx];
bool vis[mx]; 
int vc=0;
void dfs(int u){
    vis[u]=true;
    vc++;
   
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
    int ans = 0;
    int mn =INT_MAX;
    for (int i = 1; i <= n; i++)
    {
        if(!vis[i] && adj[i].size()){
            dfs(i);
            count++;
            ans=max(ans,vc);
            mn = min(mn,ans);
            vc=0;
        }
    }
    cout<<"disconnected : "<<count<<endl;
    cout<<"Max graph : "<<ans<<endl;
    cout<<"Min graph : "<<mn<<endl;
    
    return 0;
}
 
v.size() //vector size