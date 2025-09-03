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
int cnt = 0;
void dfs(int si,int sj){
    cnt++;
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
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        { 
            cin>>grid[i][j];
        }
    }
    vector<int>res;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if(!vis[i][j] && grid[i][j]!='#'){
                dfs(i,j);
                res.push_back(cnt);
                cnt = 0;
            }
        }
    } 
    int sz = res.size();
    if(sz){
        sort(res.begin(),res.end());
        for(auto x: res){
            cout<<x<<" ";
        }
    } else{
        cout<<0<<endl;
    }
    return 0;
}
