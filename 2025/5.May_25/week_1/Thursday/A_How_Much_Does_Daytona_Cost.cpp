#include <bits/stdc++.h>
using namespace std;

void solve()
{
   int a,n;
   cin>>a>>n;
   int flag =0;
   for (int i = 0; i < a; i++)
   {
    int x; cin>>x;
    if(x==n) flag=1;
   }
   if(flag) cout<<"YES"<<endl;
   else cout<<"NO"<<endl;
   
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
