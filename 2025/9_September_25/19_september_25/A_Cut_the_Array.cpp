#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while (t--)
    {
        int n; cin>>n;
        vector<int>v;
        int c0=0,c1=0,c2=0;
        for (int i = 0; i < n; i++)
        {
            int x;  cin>>x;
            x=x%3;
            if(x==1) c1++;
            if(x==0) c0++;
            if(x==2) c2++;
            v.push_back(x);
        }
        int ind1 = 0,ind2 =2;
        int sum1 = v[0];
        int sum2 =v[1];
        int sum3 = v[2];
        for (int i = 3; i < n; i++)
        {
            sum3+=v[i];
        }
        if((sum1==sum2 || sum1==sum3 || sum2==sum3 )&& (c1!=c2 && c2!=c0)){
            cout<<0<<" "<<0<<endl;
        } else {
            cout<<0<<" "<<2<<endl;
        }
        

        
        for(auto x:v) cout<<x<<" ";
        // cout<<endl;
    }
    
    return 0;
}
