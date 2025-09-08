#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,e; cin>>n>>e;
    int adj_mtrx[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(i==j) adj_mtrx[i][j]=0;
            else 
            adj_mtrx[i][j]= INT_MAX;
        }
    }
    
    while (e--)
    {
        int a,b,c; 
        cin>>a>>b>>c;
        adj_mtrx[a][b]= c;
    }
    

    for (int k = 0; k < n; k++)
    {
        for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    if(adj_mtrx[i][k]!=INT_MAX && adj_mtrx[k][j]!=INT_MAX && adj_mtrx[i][k]+adj_mtrx[k][j]<adj_mtrx[i][j] )
                        adj_mtrx[i][j] = adj_mtrx[i][k]+adj_mtrx[k][j];
                } 
            }
    }
    
    

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(adj_mtrx[i][j]==INT_MAX) cout<<"I ";
            else cout<<adj_mtrx[i][j]<<" ";
        } 
        cout<<endl;
    }
    return 0;
}
