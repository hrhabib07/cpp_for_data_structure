#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin>>s;
        int count = 0;
        for(char c: s){
            if(c=='1'){
                count++;
            }
        }
        v.push_back(count);
    }
    for (int r:v)
    {
        cout<<r<<endl;
    }
    
    
    return 0;
}