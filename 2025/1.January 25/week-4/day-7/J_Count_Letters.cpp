#include<bits/stdc++.h>
using namespace std;
int main(){

    string s;
    cin>>s;
    vector<int>v(26,0);
    for (char c : s)
    {
        int ind = c-'a';
        v[ind]++;
    };
    for (char i = 'a'; i <='z' ; i++)
    {
        if(v[i-'a']>0){
            cout<<i<<" : "<<v[i-'a']<<endl;
        }
    }
    
    return 0;
}