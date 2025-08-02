#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while (t--)
    {
        int n; cin>>n;
        int odd=0,even=0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin>>x;
            if(x%2) odd++;
            else even++;
        }
        if((n%2) && ((odd+1 == even)||(even+1==odd))) cout<<"YES"<<endl;
        else if(odd == even) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        
    }
    return 0;
}
