#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,t;
    cin>>n>>t;
    string s;
    cin>>s;
   for (int j = 0; j < t; j++)
   {
     for (int i = 0; i < n; i++)
    {
        char p1=s[i];
        char p2=s[i+1];
        if(p1=='B' && p2=='G'){
            s[i]='G';
            s[i+1]='B';
            i++;
        }
    }
   }
   
    cout<<s;
    return 0;
}