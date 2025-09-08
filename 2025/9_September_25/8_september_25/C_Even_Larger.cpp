#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while (t--)
    {
        int n; cin>>n;
        long long int res = 0;
        for (int i = 1; i <= n; i++)
        {
            int x; cin>>x;
            if(i%2) res -=x;
            else res +=x;
        }
        cout<<res<<endl;
    }
    
    return 0;
}
