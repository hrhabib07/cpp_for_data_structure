#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while (t--)
    {
        string s; cin>>s;
        stack<char>st;
        for(char c:s){
            if(st.empty()) st.push(c);
            else if(c=='1' && !st.empty()) {
                if(st.top()=='0') st.pop();
                else st.push(c);
            } else{
                if(st.top()=='1') st.pop();
                else st.push(c);
            }
        }
        if(st.empty()) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    
    return 0;
}
