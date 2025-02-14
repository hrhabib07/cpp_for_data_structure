#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v;
    for (int i = 0; i < n; i++)
    {
        vector<int>inp;
        int count=0;
        int a1,a2,a4,a5;
        cin>>a1>>a2>>a4>>a5;
        int a3=a1+a2;
        if(a1+a2==a3){
            count++;
        }
        if(a3+a2==a4){
            count++;
        } if(a3+a4==a5){
            count++;
        }
        if(count==1){
            int na3=a5-a4;
            if(na3+a2==a4){
                count++;
            }
        };
        v.push_back(count);
    };
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<endl;
    }
    
    
    return 0;
}