#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,e; cin>>n>>e;
    int adj_mtrx[n][n];
    memset(adj_mtrx,0,sizeof(adj_mtrx));
    for (int i = 0; i < n; i++)
    {
        adj_mtrx[i][i]=1;
    }
    
    
    while (e--)
    {
        int a,b; cin>>a>>b;
        adj_mtrx[a][b]=1;
        adj_mtrx[b][a]=1;
    }


    for (int i = 0; i < n; i++)
    {
        for(int j = 0; j<n;j++) cout<<adj_mtrx[i][j]<<" ";
        cout<<endl;
    }
    
    return 0;
}
