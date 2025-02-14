#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    };
    int inital = a[0]%2;
    if(inital){
        for (int i = 0; i < n; i++)
        {
        // int diff = abs(a[i]-a[i+1]);
        // if(diff%2!=0){
        if((a[i]%2==0 && a[i+1]%2==0)){
            cout<<i;
            break;
        } else if(a[i]%2!=0 && a[i+1]%2==0){
            cout<<i+2;
            break;
        }
        // }
    }
    }
    
    else{

    for (int i = 0; i < n; i++)
    {
        int diff = abs(a[i]-a[i+1]);
        if(diff%2!=0){
        if(a[i]%2!=0){
            cout<<i+1;
            break;
        } 
        }
    }
    }
    
    
    return 0;
}