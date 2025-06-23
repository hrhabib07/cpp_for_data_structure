#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin>>n;
    vector<int>v(n);
    for (size_t i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    if(n%2) cout<<v[n/2];
    else cout<<v[n/2-1]; 
    return 0;
}
