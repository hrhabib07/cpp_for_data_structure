#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while (t--)
    {
        int n; cin>>n;
        int mx = 0;
        string s; cin>>s;
        for(char c:s){
            mx = max(mx,c-'a');
        }
        cout<<(mx+1)<<endl;
    }
    
    return 0;
}
