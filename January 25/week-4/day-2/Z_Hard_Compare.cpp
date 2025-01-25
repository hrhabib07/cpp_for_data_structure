#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int a,b,c,d;
    cin>>a>>b>>c>>d;
    double logA = b*log(a);
    double logB = d*log(c);
    if(logA>logB){
        cout<<"YES";
    } else{
        cout<<"NO";
    }
    return 0;
}