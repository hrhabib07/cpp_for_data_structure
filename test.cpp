#include <bits/stdc++.h>
using namespace std;

int main() {
    string s; 
    getline(cin,s);
    stringstream ss(s);
    string word;
    map<string,int>mp;
    while (ss>>word)
    {
        if(mp.count(word)) mp[word]+=1;
        else mp[word]=1;
    }
    for (auto it = mp.begin(); it != mp.end(); it++)
    {
        cout<<it->first<<": "<<it->second<<endl;
    }
    
    return 0;
}
