#include <bits/stdc++.h>
using namespace std;
vector<int> adj_mtrx[105];
bool vis[105];
int parents[105];
bool cycle = false;

void bfs(int src){
    queue<int>q;
    q.push(src);
    vis[src]=true;
    while (!q.empty())
    {
        int par = q.front();
        // cout<<par<<" ";
        q.pop();
        for(auto child: adj_mtrx[par]){
            if(vis[child] && parents[par] != child){
                cycle = true;
            }
            if(!vis[child]) {
                q.push(child);
                vis[child]=true;
                parents[child] = par; 
            } 

           
        }
    }
    
}


// void dfs(int src,int par){
//     par = src;
//     vis[src]=true;
//     for(auto child: adj_mtrx[src]){
//         if(vis[child]==true && child!=par){
//             flag = 1;
//         } else if(!vis[child]){
//             dfs(child,src);
//         }
//     }
// }

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
        if(!vis[i]) bfs(i);
    }
    if(cycle) cout<<"Cycle Detected"<<endl;
    else cout<<"No Cycle"<<endl;
    return 0;
}
