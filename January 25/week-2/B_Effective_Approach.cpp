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
        int countA=0;
        for (int j = 0; j < n; j++)
        {
            countA++;
            if(a[j]==target){
                va+=countA;
                pa+=n-countA+1;
            }
        }
    }
    cout<<va<<" "<<pa;
    return 0;
}