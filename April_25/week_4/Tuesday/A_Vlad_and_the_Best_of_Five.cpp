#include <bits/stdc++.h>
using namespace std;

void solve()
{
   string s; cin>>s;
   int l = s.length();
   int a=0,b=0;
   for(auto c: s) {
    if(c=='A') a++;
    else if(c=='B')b++; 
   }
   if(a>b) cout<<'A'<<endl;
   else cout<<'B'<<endl;
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
