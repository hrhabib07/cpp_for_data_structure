#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while (t--)
    {
        long long int n; cin>>n;
        vector<int>v(n);
        int temp =0;
        int count =1;
        for (int i = 0; i < n; i++)
        {
            int x; cin>>x;
            if(i==0){temp=x;}
            else if(x-temp>1 && i>0) {
                count++;
                temp=x;
            }
            v.push_back(x);
        };
        cout<<count<<endl;
    }
    
    return 0;
}
