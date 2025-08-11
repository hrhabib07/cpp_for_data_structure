#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while (t--)
    {
        int n; cin>>n;
        int k; cin>>k;
        vector<int>v1,v2;
        for (int i = 0; i < n; i++)
        {
            int x; cin>>x; 
            v1.push_back(min((x%k), (k - (x%k)) % k));
        }
        for (int i = 0; i < n; i++)
        {
            int x; cin>>x; 
            v2.push_back(min((x%k), (k - (x%k)) % k));
        }

        // for(auto i:v1) cout<<i<<" ";
        // cout<<endl;
        // for(auto i:v2) cout<<i<<" ";
        // cout<<endl;
        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());
        if(v1==v2) cout<<"YES"<<endl;
        else cout<<"NO"<<endl; 
    }
    
    return 0;
}
