#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while (t--)
    {
        string s; cin>>s;
        int countL =0;
        int countR =0;

        for (int i = 0; i < s.size(); i++)
        {
            if(i<=s.size()/2 && s[i]=='(' ) countL++;
            else if(i>=s.size()/2 && s[i]==')' ) countR++;
            else break;
        }
        for (int i = 1; i < s.size()-2; i+=2)
        {
            if(s[i]=='(' && s[i+1]==')' ) {countL++;countR++;}
            // else if(i>=s.size()/2 && s[i]==')' ) 
            else break;
        }
        if(countL== countR) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    
    return 0;
}
