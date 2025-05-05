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

        int tripple=0;
        for (int i = 0; i < n-2; i++)
        {
            if(v[i]==v[i+1] && v[i]==v[i+2]){tripple=v[i]; break;}
        }
        if(!tripple) cout<<-1<<endl;
        else cout<<tripple<<endl;
        
    }
    
    return 0;
}
