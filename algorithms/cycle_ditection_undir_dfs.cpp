#include <bits/stdc++.h>
using namespace std;
vector<int> adj_mtrx[105];
bool vis[105];
int parents[105];
bool cycle = false;


void dfs(int src){
    vis[src]=true;
    for(auto child: adj_mtrx[src]){
        if(vis[child]==true && parents[src]!=child){
            cycle = true;
        } else if(!vis[child]){
            parents[child] = src;
            dfs(child);
        }
    }
}

int main() {
    int n,e; cin>>n>>e;
    
    while (e--)
    {
        int a,b;
        cin>>a>>b;
        adj_mtrx[a].push_back(b);
        adj_mtrx[b].push_back(a);
    }

    memset(vis,false,sizeof(vis));
    memset(parents,-1,sizeof(parents));
    for(int i = 0; i<n; i++){
        if(!vis[i]) dfs(i);
    }
    if(cycle) cout<<"Cycle Detected"<<endl;
    else cout<<"No Cycle"<<endl;
    return 0;
}
