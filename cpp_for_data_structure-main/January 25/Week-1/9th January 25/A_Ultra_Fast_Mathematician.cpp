#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1,s2;
    cin>>s1>>s2;
    string s3=s1;
    for (int i = 0; i < s1.size(); i++)
    {
        s1[i]==s2[i] ? s3[i]='0' : s3[i]='1';
    }
    cout<<s3;
    return 0;
}