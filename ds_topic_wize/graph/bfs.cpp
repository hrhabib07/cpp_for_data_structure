#include <bits/stdc++.h>
using namespace std;
vector<int> adj_list[1005];
bool vis[1005];

void bfs(int src){
    queue<int>q;
    q.push(src);
    vis[src] = true;
    while(!q.empty()){
        int cur = q.front();
        q.pop();
        cout<<cur<<" ";
        for(auto x:adj_list[cur]){
            if(vis[x]==false){
                q.push(x);
                vis[x]=true;
            }
        }
    }
}

int main() {
    int n,e,t; cin>>n>>e;
    memset(vis,false,sizeof(vis));
    while (e--)
    {
        int a,b; cin>>a>>b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }
    cin>>t;
    bfs(t);
    return 0;
}
