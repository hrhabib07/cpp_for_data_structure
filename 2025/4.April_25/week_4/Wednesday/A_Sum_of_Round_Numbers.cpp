#include <bits/stdc++.h>
using namespace std;

void solve()
{
   int n; cin>>n;
   int count=1;
   vector<int>sum;
   while (n>0)
   {
       if(n%10!=0) {
           sum.push_back(count*(n%10));
           n/=10;
           count*=10;
        } 
        else{
        count*=10;
        n/=10;
    }
   }
   cout<<sum.size()<<endl;
   for (int i = 0; i < sum.size(); i++)
   {
    cout<<sum[i]<<' ';
   }
   cout<<endl;
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
