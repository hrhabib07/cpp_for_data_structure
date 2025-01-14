#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    };
    int m;
    cin>>m;
    int b[m];
    for (int i = 0; i < m; i++)
    {
        cin>>b[i];
    };
    int va = 0;
    int pa=0;
    for (int i = 0; i < m; i++)
    {
        int target = b[i];
        for (int j = 0; j < n; j++)
        {
            if(a[j]==target){
                va+=j+1;
            }
        }
        int count = 0;
        for (int j = n-1; j >=0; j--)
        {
            count++;
            if(a[j]==target){
                pa+=count;
            }
        }
        
    }
    cout<<va<<" "<<pa;
    return 0;
}