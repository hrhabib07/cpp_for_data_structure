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
        int frist = v[0],second = v[1], third = v[2];
        if(frist!=second){
            if(frist==third) cout<<2<<endl;
            else if(second == third) cout<<1<<endl;
        } else if(second!=third){
            if(frist==third) cout<<2<<endl;
            else if(second == frist) cout<<3<<endl;
        } else if(frist!=third){
            if(second==third) cout<<1<<endl;
            else if(second == frist) cout<<3<<endl;
        } else{
            int flag = 0;
            for (int i = 3; i < n; i++)
            {
                if(v[i]!=frist) {flag = i+1;break;}
            }
            cout<<flag<<endl;
        }


        
    }
    
    return 0;
}
