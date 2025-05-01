#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    string res="YES";
    int sz=s.size()-1;
    if(sz==0){
        sz=1;
    };
    
    for (int i = 0; i < sz; i++)
    {
        char current = s[i];
        if(sz==1 && (current=='1')){
            break;
        } else if(current!='1' && current!='4'){
            res="NO";
            break;
        } else if(current=='1' && (s[i+1]!='1' && s[i+1]!='4')){
            res="NO";
            break;
        } else if(current=='4' && (s[i+1]!='1' && s[i+1]!='4')){
             res="NO";
            break;
        }
    }
    cout<<res;
    return 0;
}