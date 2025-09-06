#include <bits/stdc++.h>
using namespace std;
int grid[1005][1005];
bool vis[1005][1005];
int level[1005][1005];
pair<int,int> parent[1005][1005];
vector<pair<int,int>>d={{0,1},{0,-1},{1,0},{-1,0}};
int row,col;
bool valid(int i,int j){
    if(i<0 || i>=row || j<0 || j>=col) return false;
    else return true;
}
void bfs(int si,int sj){
    queue<pair<int,int>>q;
    q.push({si,sj});
    vis[si][sj]=true;
    level[si][sj] = 0;
    
    while (!q.empty())
    {
        int par = q.front();
        q.pop();

        int pci = par.first;
        int pcj = par.second;


        for(int i = 0; i<4; i++){
            int ci = pci+d[i].first;
            int cj = pcj+d[i].second;
            
            if(valid(ci,cj) &&  !vis[ci][cj] && grid[ci][cj]='.'){
                q.push({ci,cj});
                vis[ci][cj]=true;
                level[ci][cj]= level[pci][pcj]+1;
                parent[ci][cj]={pci,pcj};
            }
        }
    }
}

int main() {
    cin>>row>>col;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin>>grid[i][j];
        }  
    }
    int si,sj,di,dj; cin>>si>>sj>>di>>dj;
    memset(vis,false,sizeof(vis));
    memset(level,-1,sizeof(level));
    memset(parent,-1,sizeof(parent));

    bfs(si,sj);
    
    // cout<<level[dest]<<endl;
    vector<int>path;
    int node = dest;
    while (node!=-1)
    {
        path.push_back(node);
        node = parent[node];
    }
    reverse(path.begin(),path.end());
    for(auto x: path) cout<<x<<" ";

    return 0;
}
