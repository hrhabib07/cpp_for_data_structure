#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while (t--)
    {
        int n; cin>>n;
        set<int>st;
        for (int i = 0; i < n; i++)
        {
            int x; cin>>x;
            st.insert(x);
        }
        for (auto i = st.begin(); i !=st.end(); i++)
        {
            cout<<*i<<" ";
        }
        cout<<endl;
        
        
    }
    
    return 0;
}
