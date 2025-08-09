#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while (t--)
    {
        int n; cin>>n;
        int num0 =0, num1 = 0,first0=-1,last1=-1;
        vector<int>v;
        for (int i = 0; i < n; i++)
        {
            int x; cin>>x;
            if(x==1) {num1++;last1 = i;}
            else {
                num0++;
                if(first0==-1) first0 = i;
            }
            v.push_back(x);
        }
            int num0t = num0;
            int num1t = num1;

                long long int sum3 = 0;
                for (int i = 0; i < n; i++)
        {
            if(v[i]==1)
                sum3+=num0;
            if(v[i]==0) num0--;
        }
        num1 = num1t;
        num0 = num0t;

            long long int sum = 0;
           if(last1!=-1) {v[last1] = 0; num1--; num0++;}
        for (int i = 0; i < n; i++)
        {
            if(v[i]==1)
                sum+=num0;
            if(v[i]==0) num0--;
        }
        long long int sum2 = 0;
        num1 = num1t;
        num0 = num0t;
        if(last1!=-1) v[last1] = 1; 
        if(first0!=-1){ v[first0] = 1; num1++; num0--;
        for (int i = 0; i < n; i++)
        {
            if(v[i]==1)
                sum2+=num0;
            
            if(v[i]==0) num0--;
        }}
        
        // cout<<sum<<" "<<sum2<<" "<<sum3<<endl;
        cout<<max(sum,max(sum2,sum3))<<endl; 
    }
    return 0;
}
