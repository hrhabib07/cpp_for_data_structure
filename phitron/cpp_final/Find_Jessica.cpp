#include <bits/stdc++.h>
using namespace std;

int main() {
    string s; 
    getline(cin,s);
    stringstream ss(s);
    string word;
    int flag = 0;
    while (ss>>word)
    {
        string target = "Jessica";
        if(word==target) {flag =1; break;}     
    }
    if(flag) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
