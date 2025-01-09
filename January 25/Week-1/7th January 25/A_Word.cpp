#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    pair<int,int>p={0,0};
    
    for(char c : s){
        int sml=int(c);
        // cout<<c<<" : "<<sml<<endl;
        if(sml>=97){
            p.first++;
        } else{
            p.second++;
        }
}

// cout<<p.first<<" "<<p.second;
    if(p.first<p.second){
        transform(s.begin(), s.end(), s.begin(), ::toupper);
    } else{
        transform(s.begin(), s.end(), s.begin(), ::tolower); 
    } 
    cout<<s;
    return 0;
}