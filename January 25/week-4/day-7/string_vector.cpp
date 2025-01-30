#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n; cin.ignore();
    vector<string>v;
    for (int i = 0; i < n; i++)
    {
        string s;
        getline(cin,s);
        v.push_back(s);
    }
    for (string s:v)
    {
        cout<<s<<endl;
    }
    
    
    return 0;
}