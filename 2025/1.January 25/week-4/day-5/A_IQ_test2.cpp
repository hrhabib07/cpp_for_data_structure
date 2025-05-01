#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    

    for (int i = 0; i < n; i++)
    {
        int fir = a[i];
        int sec = a[i+1];
        int thr = a[i+2];
        if(sec-fir==thr-sec){
            continue;
        }
         else{
            if((fir%2==0 && sec%2==0)||(fir%2!=0 && sec%2!=0)){
                cout<<i+3;
                break;
            } else if((fir%2==0 && thr%2==0)||(fir%2!=0 && thr%2!=0)){
                cout<<i+2;
                break;
            } else {
                cout<<i+1;
                break;
            }
        }
    }
    
    return 0;
}