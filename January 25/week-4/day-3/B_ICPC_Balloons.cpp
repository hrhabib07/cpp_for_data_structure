#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        sort(s.begin(),s.end());
        int sum=2;
        for (int j = 1; j < n; j++)
        {
            if(s[j]==s[j-1]){
                sum++;
            } else{
                sum+=2;
            }
        }  
        cout<<sum<<endl;
    }
    return 0;
}