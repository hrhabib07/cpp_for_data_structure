#include <bits/stdc++.h>
using namespace std;
int adj_mtrx[1005][1005];
bool vis[1005][1005];
vector<pair<int,int>>d = {{0,1},{0,-1},{1,0},{-1,0}};
int r,c;
bool valid(int i, int j){
    if(i<0 || i>=r || j<0 || j>=c) return false;
    return true;
}
int cnt=0;

void dfs(int si,int sj){
    vis[si][sj]= true;
    for(int i = 0; i<4; i++){
        int ci = si+d[i].first;
        int cj = sj+d[i].second;
        if(valid(ci,cj) && !vis[ci][cj] && adj_mtrx[ci][cj]=='.'){
            cnt++;
            dfs(ci,cj);
        }
    }
}

int main() {
    cin>>r>>c;
    memset(vis,false,sizeof(vis));
    
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            char ch; cin>>ch;
            adj_mtrx[i][j]=ch;
        }
    }
    int res = INT_MAX;
    for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                if(!vis[i][j] && adj_mtrx[i][j]=='.'){
                    cnt++;
                    dfs(i,j);
                    res = min(cnt,res);
                    cnt = 0;
            }
            }
        }
        if(res!=INT_MAX){
            cout<<res<<endl;
        } else {
            cout<<-1<<endl;
        }
    
    
    return 0;
}
