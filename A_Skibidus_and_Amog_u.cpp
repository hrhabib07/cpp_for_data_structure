#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while (t--)
    {
        string s; cin>>s;
        int flag=0;
        int sz=s.size();
        if(s[sz-1]=='s' && s[sz-2]=='u'){
            s[sz-2]='i';
            s.erase(sz-1,1);
        }
        cout<<s<<endl;
    }
    
    return 0;
}