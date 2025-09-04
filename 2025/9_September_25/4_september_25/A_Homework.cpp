#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while (t--)
    {
        int n; cin>>n;
        string s1; cin>>s1;
        int m; cin>>m;
        string s2; cin>>s2;
        string s3; cin>>s3;
        for(int i=0; i<s3.size(); i++){
            char x = s3[i];
            if(x=='D') s1+=s2[i];
            else s1= s2[i]+s1;
        }
        cout<<s1<<endl;
    }
    
    return 0;
}
