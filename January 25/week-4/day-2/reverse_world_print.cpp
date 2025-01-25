#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s); // get line takes input with space; we use it for taking sentence
    stringstream ss(s);
    string word;
    while (ss>>word)
    {
        cout<<word<<endl;
    }
    
    return 0;
}