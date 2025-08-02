#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while (t--)
    {
        int n; cin>>n;
        vector<int>v(n);
        int prev;
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
            if(i==0) continue;
            if(v[i]<v[i-1]) count++; 
        }
        cout<<count<<endl;
    }
    
    return 0;
}
