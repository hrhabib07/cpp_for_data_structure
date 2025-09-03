#include <bits/stdc++.h>
using namespace std;
int n,m; 
char grid[1000][1000];
bool vis[1000][1000];
vector<pair<int,int>>d={{0,-1},{0,1},{-1,0},{1,0}};

bool valid(int i,int j){
    if(i<0 || i>=n || j<0 || j>=m)
    return false;
    return true;
}

void dfs(int si,int sj){
   
    vis[si][sj]=true;
    
    for (int i = 0; i < 4; i++)
    {
        int ci = si+d[i].first;
        int cj = sj+d[i].second;
        if(valid(ci,cj) && !vis[ci][cj] && grid[ci][cj]!='#'){
            dfs(ci,cj);      
        }
    }
    
}

int main() {
    cin>>n>>m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>grid[i][j];
        }
    }
    int count = 0;
    memset(vis,false,sizeof(vis));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(grid[i][j]=='.' && !vis[i][j]){
                dfs(i,j);
                count++;
            }
        }
    }
    
    cout<<count;

    return 0;
}
