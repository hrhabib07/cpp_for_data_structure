#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while (t--)
    {
      string s; 
    getline(cin,s);
    stringstream ss(s);
    string word;
    map<string,int>mp;
    pair<string,int>curmx={"",0};
    while(ss>>word){
        mp[word]++;
        if(mp.count(word)>curmx.second){
            curmx = {word,mp[word]};
        }
    }  
    cout << curmx.first << " " << curmx.second << endl;
    }
    
    return 0;
}


