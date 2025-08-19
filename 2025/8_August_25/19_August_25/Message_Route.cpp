#include <bits/stdc++.h>
#define N 100005
using namespace std;

vector<int> adj_list[N];
bool vis[N];
int level[N];
int parent[N];

void bfs(int src){
    queue<int>q;
    q.push(src);
    vis[src]=true;
    level[src]=0;

    while (!q.empty())
    {
        int par = q.front();
        q.pop();
        for(auto x: adj_list[par]){
            if(vis[x]==false){
                q.push(x);
                vis[x]=true;
                level[x]=level[par]+1;
                parent[x]=par;
            }
        }
    }
    
}

int main() {
    int n,e; cin>>n>>e;
    while (e--)
    {
        int a,b; cin>>a>>b;
        --a;--b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }
    int src=0,dest=n-1;
    
    memset(vis,false,sizeof(vis));
    memset(level,-1,sizeof(level));
    memset(parent,-1,sizeof(parent));


    bfs(src);
    int lvl = level[dest];
    if(lvl!=-1){
        cout<<(level[dest]+1)<<endl;
        
        vector<int>path;
        int node = dest;
        while (node!=-1)
        {
            path.push_back(node);
            node = parent[node];
        }
        reverse(path.begin(),path.end());
        for(auto x: path) cout<<(x+1)<<" ";
    } else {
        cout<<"IMPOSSIBLE"<<endl;
    }

    return 0;
}
