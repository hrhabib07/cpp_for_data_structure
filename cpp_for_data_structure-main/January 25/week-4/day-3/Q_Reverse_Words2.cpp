#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    stringstream ss(s);
    string word;
    while(ss>>word){
    int sz= word.size()-1;
    string newWord="";
    for (int i = sz; i >=0; i--)
    {
        newWord+=word[i];
    }
    cout<<newWord;
    cout<<" ";
    }
    
    return 0;
}