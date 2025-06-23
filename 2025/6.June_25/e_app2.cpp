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
            // cout<<"hello"<<endl;
            v.push_back(i);
            if(i != n/i){
                v2.push_back((n/i));
            }
        }    
    };
    ll sz1 = v.size();
    ll sz2 = v2.size();
    // cout<<v.size()<<" "<<v2.size()<<endl;
    if(sz1+sz2<k){
        cout<<-1<<endl;
    } else{
        if(sz1>=k){cout<<v[k-1]<<endl;}
        else {
            cout<<v2[k-sz1-1]<<endl;
        }
    }
    
    return 0;
}
