#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        vector<int>a;
        vector<int>b;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin>>x;
            a.push_back(x);
            b.push_back(x);
        };
        sort(b.begin(),b.end());
        
        for (int i = 0; i < n; i++)
        {
            cout<<abs(a[i]-b[i])<<" ";  
        }
        
        cout<<endl;
    }
    
    return 0;
}
