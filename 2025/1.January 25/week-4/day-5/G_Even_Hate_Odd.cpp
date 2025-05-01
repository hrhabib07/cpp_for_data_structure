#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int freq[2]={0};
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        };
        if(n%2==0){
            for (int i = 0; i < n; i++)
            {
                if(a[i]%2==0){
                    freq[1]++;
                } else {
                    freq[0]++;
                }
            }  
            int diff=abs(freq[1]-freq[0]);
            cout<<diff/2<<endl;
        } else{
            cout<<-1<<endl;
        }
    }
    
    return 0;
}