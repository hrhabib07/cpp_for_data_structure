#include <bits/stdc++.h>
using namespace std;
bool vis[105][105];
int level[105][105]; 
vector<pair<int,int>>d={{2,-1},{2,1},{-2,-1},{-2,1},{-1,2},{1,2},{-1,-2},{1,-2}};
int row,col;
bool valid(int i,int j){
    if(i<0 || i>=row || j<0 || j>=col)
        return false;
    return true;
}

void bfs(int si,int sj){
    queue<pair<int,int>>q;
    q.push({si,sj});
    vis[si][sj]= true;
    level[si][sj]=0;

    while(!q.empty()){
        pair<int,int>par = q.front();
        q.pop();
        int par_i = par.first;
        int par_j = par.second;
        
        for (int i = 0; i < 8; i++)
        {
            int ci = par_i+d[i].first;
            int cj = par_j+d[i].second;
            if(valid(ci,cj) && !vis[ci][cj]){
                q.push({ci,cj});
                vis[ci][cj]=true;
                level[ci][cj]=level[par_i][par_j]+1;
            }
        }
    }
}
int main() {
    int t; cin>>t;
    while (t--)
    {
        cin>>row>>col;
        memset(vis,false,sizeof(vis));
        memset(level,-1,sizeof(level));
        int si,sj,di,dj;
        cin>>si>>sj>>di>>dj;
        bfs(si,sj);
        if(level[di][dj]!=-1){
            cout<<level[di][dj]<<endl;
        } else{
            cout<<-1<<endl;
        }
    }
    return 0;
}
