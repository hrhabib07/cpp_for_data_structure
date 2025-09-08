#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while (t--)
    {
        int n; cin>>n;
        vector<int>v(n);
        int crmax = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            int x; cin>>x;
            crmax = max(x,crmax);
            v[i] = x;
        }
        
        for (int i = 0; i < n; i++)
        {
           cout<< (n+1-v[i])<<" ";
        }
        
        cout << endl;
    }
    
    return 0;
}
