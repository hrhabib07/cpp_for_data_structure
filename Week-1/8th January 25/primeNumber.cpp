#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s ="yes";
    for (int i = 2; i < n; i++)
    {
        if(n%i==0){
            s="NO";
        }
    }
    cout<<s;
    return 0;
}