#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    ll n,k; cin>>n>>k;
    vector<ll>v;
    vector<ll>v2;
    for (ll i = 1; i*i <= n; i++)
    {
        if(n%i==0) {
            v.push_back(i);
            if(i != n/i){
                v.push_back((n/i));
            }
        }    
    };
    sort(v.begin(),v.end());
    if(k>v.size()) cout<<-1<<endl;
    else cout<<v[k-1]<<endl;
    
    return 0;
}
