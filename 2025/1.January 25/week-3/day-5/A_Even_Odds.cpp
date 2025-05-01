#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n,k;
    cin>>n>>k;
    if(n%2==0){
        long long int numEven=n/2;
        if(k<=numEven){
            cout<<(2*k-1)<<endl;
        } else{
            cout<<(2*(k-numEven))<<endl;
        }
    } else{
        long long int numEven=n/2+1;
        if(k<=numEven){
            cout<<(2*k-1)<<endl;
        } else{
            cout<<(2*(k-numEven))<<endl;
        }
    }
    return 0;
}