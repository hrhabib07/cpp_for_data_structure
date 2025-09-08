#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,e,q; cin>>n>>e>>q;
    long long int adj_mtrx[n+5][n+5];
    for (int i = 1; i<=n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if(i==j) adj_mtrx[i][j]=0;
            else 
            adj_mtrx[i][j]= LLONG_MAX;
        }
    }
    
    while (e--)
    {
        long long int a,b,c; 
        cin>>a>>b>>c;
        adj_mtrx[a][b]= min(adj_mtrx[a][b],c);
        adj_mtrx[b][a]= min(adj_mtrx[b][a],c);
    }
    

    for (int k = 1; k<=n; k++)
    {
        for (int i = 1; i<=n; i++)
            {
                for (int j = 1; j <= n; j++)
                {
                    
                    if(adj_mtrx[i][k]!=LLONG_MAX && adj_mtrx[k][j]!=LLONG_MAX && adj_mtrx[i][k]+adj_mtrx[k][j]<adj_mtrx[i][j] )
                        adj_mtrx[i][j] = adj_mtrx[i][k]+adj_mtrx[k][j];
                } 
            }
    }
    
    while(q--){
        int a,b; cin>>a>>b;
        if(adj_mtrx[a][b]!=LLONG_MAX)
        cout<<adj_mtrx[a][b]<<endl;
        else cout<<-1<<endl;
    }

    return 0;
}
