#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    string word="";
    for (int i = 0; i < s.size(); i++)
    {
        if(isalpha(s[i])){
            word+=s[i];
        } else{
            if(!word.empty()){
            int sz= word.size()-1;
            string newWord ="";
            for (int i = sz; i >=0; i--){
            newWord+=word[i];
            }
            word="";
            cout<<newWord;
            if(i!=s.size()-1){
                cout<<" ";
            }
            } 
        }
    }
    if(!word.empty()){
            int sz= word.size()-1;
            string newWord ="";
            for (int i = sz; i >=0; i--){
            newWord+=word[i];
            }
            word="";
            cout<<newWord;
            } 
    
    return 0;
}