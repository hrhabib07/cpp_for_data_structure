#include<bits/stdc++.h>
using namespace std;
int main(){
    int r,c;
    cin>>r>>c;
    int a[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin>>a[i][j];
        }
        
    }
    int b[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin>>b[i][j];
        }
        
    }
    int sum[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            sum[i][j]=a[i][j]+b[i][j];
        }
        // cout<<endl;   
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (j!=c-1)cout<<sum[i][j]<<" ";
            else cout<<sum[i][j];
        }
        cout<<endl;   
    }
    return 0;
}