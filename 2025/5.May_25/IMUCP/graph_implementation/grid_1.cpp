#include <bits/stdc++.h>
using namespace std;
const int mx = 1000;
char adjMat[mx][mx];

int main() {
    int n,m; cin>>n>>m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>adjMat[i][j];
        }
    }
    int si,sj,ti,tj;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(djMat[i][j] == 's') {si=i;sj=j;}
            if(djMat[i][j] == 't') {ti=i;tj=j;}
            // cout<<adjMat[i][j]<<" ";
        }
        // cout<<endl;
    };


    
    return 0;
}
