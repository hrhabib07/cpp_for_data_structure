#include<bits/stdc++.h>
using namespace std;
int main(){
    string s; cin>>s;
    string res="";
    for (int i = 0; i < s.size(); i++)
    {
        char c = s[i];
        if(c=='a'||c=='i'||c=='o'||c=='u'||c=='e'||c=='A'||c=='I'||c=='O'||c=='U'||c=='E'||c=='y'||c=='Y'){
            continue;
        } else{
            res+='.';
            res+=tolower(c);
        }
    };
    cout<<res;
    return 0;
}