#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    vector<int>v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    int a,b; cin>>a>>b;
    int sum = 0;
    for (int i = a; i <= b; i++)
    {
        sum+=v[i];
    }
    cout<<sum;
    
    return 0;
}