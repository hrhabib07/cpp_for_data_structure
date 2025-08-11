#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while (t--)
    {
        
        int n; cin>>n;
        for (int i = 0; i < n-2; i++)
        {
            if(i%2){ cout<<3<<" ";}
            else cout<<-1<<" ";
        }
        if(n%2) cout<<3<<" "<<-1;
        else cout<<-1<<" "<<2<<" ";
        cout<<endl;  
    }
    
    return 0;
}
