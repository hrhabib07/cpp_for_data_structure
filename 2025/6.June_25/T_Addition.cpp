#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin>>n;
    int oc =0;
    for (int i = 0; i < n; i++)
    {
        long long x; cin>>x;
        if(x%2) oc++;
    };
    if(oc%2==0) cout<<"YES";
    else cout<<"NO";
    
    return 0;
}
