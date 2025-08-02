#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while (t--)
    {
        int n; cin>>n;
        int max1=INT_MIN;
        int max2=INT_MIN;
        vector<int>v;
        for (int i = 0; i < n; i++)
        {
            int x; cin>>x;
            if(x>=max1){max2 = max1; max1 = x;}
            else if(x>max2 && x<max1) max2 = x;
            v.push_back(x);
        }
        for (int i = 0; i < n; i++)
        {
            if(v[i]==max1) cout<<v[i]-max2<<" ";
            else cout<<v[i]-max1<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}
