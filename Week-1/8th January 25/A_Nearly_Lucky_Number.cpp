#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s=to_string(n);
    pair<int, int> p={0,0};
    for(char c : s){
        if(c=='4'){
            p.first++;
        } else if(c=='7'){
            p.second++;
        }
    }
    if(p.first+p.second==s.size()){
        cout<<"YES";
    } else{
        cout<<"NO";
    }
    return 0;
}