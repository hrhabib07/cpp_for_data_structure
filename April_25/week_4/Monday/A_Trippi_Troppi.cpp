#include <bits/stdc++.h>
using namespace std;

void solve()
{
   string s; 
   getline(cin,s);
   string res="";
   res+=s[0];
    for (int i = 1; i <= s.length(); i++)
    {
        if(s[i]==' ' && s[i+1]!=' ' && s[i+1]!='\0') res+=s[i+1];
    }
    
   
   cout<<res<<endl;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        solve();
    }
    return 0;
}
