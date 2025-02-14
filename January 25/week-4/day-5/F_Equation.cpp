#include<bits/stdc++.h>
using namespace std;
long long int power(int x,int n){
    long long int res = 1;
    for (int i = 1; i <=n; i++)
    {
        res*=x;
    }
    return res;
}
int main(){
    int x,n;
    cin>>x>>n;
    long long int sum = 0;
    for (int i = 0; i <= n; i+=2)
    {
        sum+=power(x,i);
    }
    sum-=1;
    cout<<sum<<endl;
    
    return 0;
}