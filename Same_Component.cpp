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

void dfs(int si,int sj){
    vis[si][sj]= true;
    for(int i = 0; i<4; i++){
        int ci = si+d[i].first;
        int cj = sj+d[i].second;
        if(valid(ci,cj) && !vis[ci][cj] && adj_mtrx[ci][cj]=='.')
            dfs(ci,cj);
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
    int si,sj,di,dj; cin>>si>>sj>>di>>dj;
    dfs(si,sj);
    if(vis[di][dj]) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
