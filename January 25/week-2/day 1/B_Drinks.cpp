#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum =0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        sum+=x;
    };
    double res = static_cast<double>(sum)/n;
    cout<<fixed<<setprecision(12)<<res;
    return 0;
}