#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while (t--)
    {
        vector<int>v(3);
        for (int i = 0; i < 3; i++)
        {
            cin>>v[i];
        };
        sort(v.begin(),v.end());
        int a= v[0]; int b= v[1]; int c = v[2];
        if(c%a== 0 && b%a==0 && a>1){
            int count = 0;
            while (c>a)
            {
                count++; 
                c/=a;
            };
            while (b>a)
            {
                count++;
                b/=a;
            };
            if(count<=3){
                cout<<"YES"<<endl;
            } else cout<<"NO"<<endl;
        } else cout<<"NO"<<endl;
    }
    
    return 0;
}