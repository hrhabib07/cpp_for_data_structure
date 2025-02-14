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
    int res;
    for (int i = 0; i < n; i++)
    {
        int diff = abs(a[i]-a[i+1]);
        if(diff%2!=0){
        if(i>=1 && a[i]<a[i-1]){
            cout<<i+1;
            break;
        }
        if((a[i]%2!=0 && inital==0) || (a[i]%2==0 && inital!=0)){
            cout<<i+1;
            break;
        }
        }
    }
    
    
    return 0;
}


