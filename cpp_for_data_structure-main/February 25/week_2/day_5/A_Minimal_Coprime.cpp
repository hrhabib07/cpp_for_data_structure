#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while (t--)
    {
        int count = 0;
        int l,r; cin>>l>>r;
        for (int i = 1; i*i <= r; i++)
        {
            if(r%i==0 && l%i!=0){
                count++;
            }
        }
        if(count>1){
            cout<<2*count<<endl;
        } else{
            cout<<count<<endl;
        }
    }
    
    return 0;
}