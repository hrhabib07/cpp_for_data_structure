#include <bits/stdc++.h>
using namespace std;

void solve()
{
   string s; 
   cin>>s;
   int size=s.length();
   int flag=1;
   if(size%2==0){

    for (int i = 0; i < (s.length()/2); i++)
    {
        if(s[i]!=s[(size/2)+i]) {flag=0;
        break;
    }
    }
    if(flag) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;    
   }
   else{
    cout<<"NO"<<endl;    
   }

   
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
