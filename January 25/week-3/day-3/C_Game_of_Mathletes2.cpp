#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    vector<int>v;
    for (int k = 0; k < t; k++)
    {
        int n,m;
        cin>>n>>m;
        vector<int>inp;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin>>x;
            inp.push_back(x);
        };
        int score = 0;
        for (int i = 0; i < n; i++)
        {
            int current =  inp[i];
            for (int j = i+1; j < n; j++)
            {
                if(current+inp[i]==m){
                    score++;  
                }
            }
        }
        v.push_back(score);
    }
    for (int i = 0; i < t; i++)
    {
        cout<<v[i]<<endl;
    }
    
    return 0;
}