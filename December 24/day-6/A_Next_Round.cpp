#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int data[n];
    int total =0;
    for (int i = 0; i < n; i++)
    {
        cin>>data[i];
    };
    for (int i = 0; i < n; i++)
    {
        if(data[i]>0 && data[i]>=data[k-1]){
            total++;
        }
    }
    cout<<total;
    return 0;
}