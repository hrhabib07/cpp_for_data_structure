#include <bits/stdc++.h>
using namespace std;
char grid[1000][1000];
bool vis[1000][1000];
int r,c;
bool flag = 0;
vector<pair<int,int>>d={{0,-1},{0,1},{-1,0},{1,0}};
bool valid(int i,int j){
    if(i<0 || i>=r || j<0 || j>=c) return false;
    return true;
}

void dfs(int si,int sj){
    vis[si][sj]=true;
    for (int i = 0; i < 4; i++)
    {
        int ci = si+d[i].first;
        int cj = sj+d[i].second;

        if(valid(ci,cj) && !vis[ci][cj] && grid[ci][cj]!='#')
        dfs(ci,cj);
    }
}

int main() {
    cin>>r>>c;
    memset(vis,false,sizeof(vis));
    int si,sj,di,dj;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            char x; 
            cin>>x;
            grid[i][j]=x;
            if(x=='A') {si=i;sj=j;}
            if(x=='B') {di=i;dj=j;}
        }
    }

    dfs(si,sj);
    if(vis[di][dj]) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    
    
    return 0;
}
