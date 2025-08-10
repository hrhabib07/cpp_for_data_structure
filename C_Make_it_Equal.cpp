#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while (t--)
    {
        int n; cin>>n;
        int k; cin>>k;
        int no =0,ne=0;
        for (int i = 0; i < n; i++)
        {
            int x; cin>>x; 
            if(x%2) no++;
            else ne++;
        }
        int no2 =0,ne2=0;
        for (int i = 0; i < n; i++)
        {
            int x; cin>>x; 
            if(x%2) no2++;
            else ne2++;
        }
        if(no==no2 && ne2==ne) cout<<"YES"<<endl;
        else if(k%2==1 && no==ne2) cout<<"YES"<<endl;
        else cout<<"NO"<<endl; 
    }
    
    return 0;
}
