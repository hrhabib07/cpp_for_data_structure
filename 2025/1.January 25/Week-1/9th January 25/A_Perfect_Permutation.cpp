#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n%2!=0){
        cout<<-1;
    } else{
    for (int i = 1; i <n+1 ; i++)
    {
        if(i%2==0){
            cout<<i-1<<" ";
        } else{
            cout<<i+1<<" ";
        }
    };
    }
    return 0;
}