#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t; cin>>t;
    while (t--)
    {
        int n; long long int m; cin>>n>>m;
        vector<int>v(n);
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
        }
        sort(v.begin(),v.end());
 
        long long int sum = 0; 
        long long int k = min<long long>(n, m);
        
            for (int i = 0; i < k; i++)
            {
                sum+= v[n-i-1]*(m-i);
            }
        
        cout<<sum<<endl;          
    }
    
    return 0;
}
