#include <bits/stdc++.h>
using namespace std;
vector<int> adj_list[1005];
bool vis[1005];
int level[1005];

void bfs(int src){
    queue<int>q;
    q.push(src);
    level[src]=0;

    while(!q.empty()){
        int per = q.front();
        q.pop();
        for(auto x: adj_list[per]){
            if(vis[x]==false){
                q.push(x);
                vis[x]=true;
                level[x]=level[per]+1;
            }
        }
    }
}

int main() {
    int n,e; cin>>n>>e;
    while (e--)
    {
        int a,b; cin>>a>>b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }
    int src,dest; cin>>src>>dest;
    memset(vis,false,sizeof(vis));
    memset(level,-1,sizeof(level));
    bfs(src);
    cout<<level[dest];
    return 0;
}
