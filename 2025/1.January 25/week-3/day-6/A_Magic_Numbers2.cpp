#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    string res = "YES";
    if(s[0]!='1'){
        res = "NO";
    } else if(s[0]=='1'){
        for (int i = 1; i < s.size()-1; i++)
        {
            char current = s[i];
            cout<<current<<endl;
            if(current!='1' && current!='4'){
                res="NO";
                break;
            } else if(current=='1' && (s[i+1]!='1' && s[i+1]!='4')){
            res="NO";
            break;
        } else if(current=='4' && s[i+1] =='4' && s[i-1]=='4'){
            res="NO";
            break;
        }
         else if(current=='4' && (s[i+1]!='1' && (s[i+1]!='4'))){
            res="NO";
            break;
        }
    }
    }
   cout<<res;
    
    return 0;
}