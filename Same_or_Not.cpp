#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m; cin>>n>>m;
    int flag = 1;
    stack<int>st;
    queue<int>q;
    while (n--)
    {
        int x; cin>>x;
        st.push(x);
    };
    while (m--)
    {
        int x; cin>>x;
        q.push(x);
    };
    while(!q.empty() && !st.empty()){
        int qt=q.front(),stt= st.top();
        if(qt!=stt) {flag = 0; break;}
        else{
            q.pop();
            st.pop();
        }
    }
    if(!q.empty() || !st.empty()){
        flag = 0;
    }
    if(flag) cout<<"YES";
    else cout<<"NO";
    return 0;
}
