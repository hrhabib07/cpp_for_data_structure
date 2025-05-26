#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while (t--)
    {
        int n; cin>>n;
        vector<int>v(n);
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        for (int i = 0; i < n; i++)
        {
            v[i]=v[i]%2;
        }
        if(v[0]==v[n-1] && n>1) cout<<0<<endl;
        else if(n==1){
            if(v[0]%2) cout<<1<<endl;
            else cout<<0<<endl;
        }
        else{
            int cl=1,cr=1;
            for (int i = 1; i < n; i++)
            {
                if(v[i]==v[i-1]) cl++;
                else break;
            }
            for (int i = n-1; i >= 0; i--)
            {
                if(v[i]==v[i-1]) cr++;
                else break;
            }
            if(cr>=cl) cout<<cl<<endl;
            else cout<<cr<<endl;
            
        } 

    }
    
    return 0;
}
