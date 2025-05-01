#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<vector<int>>m;
    for (int i = 0; i < n; i++)
    {
        vector<int>r;
        for (int j = 0; j < 3; j++)
        {
            int x;
            cin>>x;
            r.push_back(x);
        };
        m.push_back(r);
    }
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sum+=m[i][j];
        }; 
    }
    if(sum!=0){
            cout<<"NO";
        } else{
            cout<<"YES";
        }
    
    return 0;
}