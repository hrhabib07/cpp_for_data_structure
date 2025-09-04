#include <bits/stdc++.h>
using namespace std;
vector<int> adj_mtrx[105];
bool vis[105];
bool vispath[105];
bool cycle = false;
void dfs(int src){
    vis[src]=true;
    vispath[src]=true;

    for(auto child: adj_mtrx[src]){
        if(!vis[child]){
            dfs(child);
        } else{
            if(vis[child] && vispath[child]) cycle = true;
        }
    }
    vispath[src] = false;
}

int main() {
    int n, e; cin>>n>>e;
    while (e--)
    {
        int a,b; cin>>a>>b;
        adj_mtrx[a].push_back(b);
    }
    memset(vis,false,sizeof(vis));
    memset(vispath,false,sizeof(vispath));

    for (int i = 0; i < n; i++)
    {
        if(!vis[i]){
            dfs(i);
        }
    }
    if(cycle) cout<<"Cycle Detected"<<endl;
    else cout<<"No Cycle"<<endl;
    
    return 0;
}
