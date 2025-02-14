#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin, s);
    int k;
    cin>>k;
    for (int i = 0; i < s.size(); i++)
    {
        s[i] = toupper(s[i]);
        int encr;
        if(s[i]==32){
            encr= s[i];
        } else{
        encr= int(s[i]);
        if(encr+k>90){
            encr +=k-26;
        } else{
            encr +=k;
        }
        }
       char en = char(encr);
        cout<<en;
    }
    
    return 0;
}