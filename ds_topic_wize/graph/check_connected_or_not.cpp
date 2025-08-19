#include <bits/stdc++.h>
using namespace std;
vector<int> adj_list[1005];
bool vis[1005];

void bfs(int src){
    queue<int>q;
    q.push(src);
    vis[src] = true;

    while (!q.empty())
    {
        int per = q.front();
        q.pop();
        
        for(auto x:adj_list[per]){
            if(vis[x]==false){
                q.push(x);
                vis[x]=true;
            }
        }
    }
    
};

int main() {
    int n, e; cin>>n>>e;
    while (e--)
    {
        int a,b; cin>>a>>b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }
    memset(vis,false,sizeof(vis));
    int src; cin>>src;
    int dest; cin>>dest;
    bfs(src);
    if(vis[dest]==true) cout<<"Connected"<<endl;
    else cout<<"Not connected"<<endl;
    return 0;
}
