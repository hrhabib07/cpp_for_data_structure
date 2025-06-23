#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    ll n; cin>>n;
    vector<ll>v;
    vector<ll>z;
    for (int i = 0; i < n; i++)
    {
        int x; cin>>x;
        if(x==0) z.push_back(i);
        v.push_back(x);
    };
    int count = 0,zs=z.size(),flag=0;
    for (int i = 0; i < n; i++)
    {
        if(v[i]==0) {
            cout<<0<<" ";
            if(flag) count++; 
            else flag=1;
         }
        else {
            if(count+flag==zs) flag=0;
            int cur =i, pre=z[count], next=z[count+flag];
            cout<< min( abs(i-pre), abs(next-i) )<<" ";
        }
    }
    
    
    return 0;
}
