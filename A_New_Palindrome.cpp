#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t; 
    while (t--)
    {
        string s; cin>>s;
        int len = s.length();
        int diff = 0;
        int mid = len/2;
            for (int i = 0; i < mid-1; i++) 
            {
                if(s[i]!=s[i+1]){
                    diff++;
                }
            }
            
    if(diff>=1) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;    
    }
    return 0;
}
