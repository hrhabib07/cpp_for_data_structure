#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v;
    for (int i = 0; i < n; i++)
    {
        vector<int>inp;
        int a1,a2,a4,a5;
        cin>>a1>>a2>>a4>>a5;
        if(a1+a2==a5-a4){
            v.push_back(3);
        } else if (a1+a2!=a5-a4){
            int diff=a5-a4;
            int a3=diff;
            if(a3+a2==a4){
                v.push_back(2);
            } else if(a1+a2==a4-(a1+a2)){
                v.push_back(2);
            } else if(a1+a2==a4-(a2)){
                v.push_back(2);
            } else{
                v.push_back(1);
            }
        }

    };
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<endl;
    }
    
    
    return 0;
}