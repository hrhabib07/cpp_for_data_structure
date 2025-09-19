#include <bits/stdc++.h>
using namespace std;

int  main() {
    int  t; cin>>t;
    while (t--)
    {
        long long  n,m,x,y; 
        cin>>n>>m>>x>>y;
        long long  cnt = 0;
        for (long long  i = 0; i < n; i++)
        {
            long long  nx; cin>>nx;
            if(nx<=y) cnt++;
        }
        for (long long  i = 0; i <m; i++)
        {
            long long  ny; cin>>ny;
            if(ny<=x) cnt++;
        }
        cout<<cnt<<endl;
    }
    
    return 0;
}
