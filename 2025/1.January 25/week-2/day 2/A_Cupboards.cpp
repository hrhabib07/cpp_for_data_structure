#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int sum=0;
    int sum2=0;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int x,y;
        cin>>x>>y;
        if(x==0 && y==1){
            sum++;
        } else if(x==1 && y==0){
            sum2++;
        } 
        else if(x==1 && y==1){
            // sum++;
            sum2++;
        }
    }
    if(sum>sum2){
        cout<<sum;
    } else{
        cout<<sum2;
    }
    return 0;
}