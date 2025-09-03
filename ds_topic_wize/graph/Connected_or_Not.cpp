#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,e;
    cin>>n>>e;
    int adj_mtrx[n][n];
    memset(adj_mtrx,0,sizeof(adj_mtrx));
    while (e--)
    {
        int a,b; cin>>a>>b;
        adj_mtrx[a][b]=1;
    }
    
    int q; cin>>q;
    while (q--)
    {
        int a,b; cin>>a>>b;
        if(adj_mtrx[a][b]==1 || a==b) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }    
    return 0;
}
