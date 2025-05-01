#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int a[3];
    a[0] = k*l/nl;
    a[1] =c*d;
    a[2]=p/np;
    int min = a[0];
    for (int i = 1; i < 3; i++)
    {
        if(a[i]<min){
            min=a[i];
        }
    }
    cout<<min/n;
    return 0;
}