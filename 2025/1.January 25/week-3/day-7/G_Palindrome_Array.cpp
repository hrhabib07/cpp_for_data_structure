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
    }
    int j = n-1;
    int i = 0;
    string s = "YES";
    while(i<j){
        i++;
        j--;
        if(v[i]!=v[j]){
            s="NO";
            break;
        }
    }
    cout<<s;
   
    return 0;
}