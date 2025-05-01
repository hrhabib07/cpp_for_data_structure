#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;cin>>n>>m;
    int sum = 0;
    vector<int>v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    };
    sort(v.begin(),v.end());
    
    for (int i = 0; i < m; i++)
    {
        int curr = v[i];
        if(curr<=0){
            sum+=curr;
        };
    }
    cout<<-sum;
    
    return 0;
}