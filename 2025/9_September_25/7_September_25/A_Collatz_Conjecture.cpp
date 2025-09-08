#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while (t--)
    {
        long long int k,x;
        cin>>k>>x;
        long long int res = x;
        for (int i = 1; i <= k; i++)
        {
            res = res*2;
        }
        cout<<res<<endl;
        
    }
    
    return 0;
}
