#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for (int k = 0; k < t; k++)
    {
        int n;
        cin>>n;
        int a[n];
        int b[n];
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin>>b[i];
        }
        int aSel[n];
        for (int i = 0; i < n; i++)
        {
            if(a[i]>b[i+1]){
                aSel[i]=a[i];
            } else if(i==n-1){
                aSel[i]=a[i];
            } else{
                aSel[i]=0;
            }
        };
        int aTot=0;
        for (int i = 0; i < n; i++)
        {
            aTot += aSel[i];
        }
        int bTot=0;
        for (int i = 0; i < n; i++)
        {
            if(aSel[i]!=0 && i!=n-1){
                bTot+=b[i+1];
            }
        }
        
        cout<<aTot-bTot<<endl;    
    } 
    return 0;
}