#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while (t--)
    {
        int n; cin>>n;
        int count = 0;
        int i=1;
        while (i<=n)
        {
            if(i%3==0) count++;
            if(i%10==3) count++;
            if(i%3==0 && i%10==0)count++;
            count++;
            i++;
        }
        

        // for (int i = 1; i <= n; i++)
        // {
        //     if(i%3==0) count++;
        //     int num=i;
        //     while (num>0)
        //     {
        //         if(num%10==3) {count++;}
        //         num/=10;
        //     }
        //     count++;
        // }
        cout<<count<<endl;
    }
    
    return 0;
}
