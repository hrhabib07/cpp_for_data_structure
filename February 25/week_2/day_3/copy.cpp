#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while (t--)
    {
        string s; cin>>s;
        int count =0;
        int sp=0;
        int n=0;
        char prev, next;
        for (int i = 0; i < s.size(); i++)
        {
            if(sp){
                if(s[i]!=s[i+1] && i!=s.size()-1){
                sp=0;
            }    
            }
            if(i==0 && s[i]==s[i+1]){
                sp=1;
            }
            if(s[i]==s[i+1]){
                if(s[i]!=s[i-1]){
                    prev=s[i-1];
                } if(s[i+1]!=s[i+2]){
                    next=s[i+2];
                }
                if(prev==next && isalpha(prev)){
                    count++;
                }
                count++; 
            }
        };
        if(count==0){
            cout<<s.size()<<endl;
        } else if(sp){
            cout<<s.size()-count<<endl;
        } else{
            cout<<s.size()-1-count<<endl;
        }
    }
    

    return 0;
}