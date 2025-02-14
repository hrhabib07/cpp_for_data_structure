#include<bits/stdc++.h>
using namespace std;
int main(){
    string s; cin>>s;
    char prev = '2';
    int count = 0;
    bool flag = false;
    for(int i = 0; i<=s.size();i++){
        char c = s[i];
        if(count>=7){
            flag=true;
            break;
        }
        if(c!=prev){
            prev=c;
            count=1;
        } else if(prev==c){
            count++;
        }
    }
    if(flag){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    return 0;
}