#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    };
    int maxSum= INT_MIN;
    for (int st = 0; st < n; st++)
    {
        int currentSum=0;
        for (int end = st; end<n ;end++)
        {
            currentSum += v[end];
            maxSum=max(currentSum,maxSum);
        };
    }
    cout<<maxSum;
    return 0;
}