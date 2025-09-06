#include <bits/stdc++.h>
using namespace std;
char grid[1005][1005];
bool vis[1005][1005];
int level[1005][1005]; 
pair<int,int> parents[1005][1005]; 
vector<pair<int,int>>d={{0,1},{0,-1},{1,0},{-1,0}};

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
    parents[si][sj]= {-1,-1};
    while(!q.empty()){
        pair<int,int>par = q.front();
        q.pop();
        int par_i = par.first;
        int par_j = par.second;
        
        for (int i = 0; i < 4; i++)
        {
            int ci = par_i+d[i].first;
            int cj = par_j+d[i].second;
            if(valid(ci,cj) && !vis[ci][cj] && grid[ci][cj]!='#'){
                q.push({ci,cj});
                vis[ci][cj]=true;
                level[ci][cj]=level[par_i][par_j]+1;
                parents[ci][cj]= {par_i,par_j};
            }
        }
    }
}

int main() {
    cin>>row>>col;
    int si,sj,di,dj;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            char ch; cin>>ch;
            grid[i][j] = ch;
            if(ch=='D'){
                di = i; dj = j;
            } else if(ch=='R'){
                si = i; sj = j;
            }
        }  
    }
    bfs(si,sj);
    if(vis[di][dj]){
        pair<int,int> par_parnt = parents[di][dj];
        while(par_parnt.first!=-1 && par_parnt.second!=-1){
            grid[par_parnt.first][par_parnt.second] = 'X';
            par_parnt = parents[par_parnt.first][par_parnt.second];
        }
    }
    grid[si][sj]='R';
    grid[di][dj]='D';
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout<<grid[i][j];
        }  
        cout<<endl;
    }
    return 0;
}
