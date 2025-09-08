#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while (t--)
    {
        int n,a,b; cin>>n>>a>>b;
        int red = n-a+1;
        int blue = n-b+1;
        
        
        cout<<red<<" "<<blue<<endl;
        // if(b>a || b==a || (a%2 && 2*b==n+1)) cout<<"YES"<<endl;
        // else cout<<"NO"<<endl;
    }
    
    return 0;
}
