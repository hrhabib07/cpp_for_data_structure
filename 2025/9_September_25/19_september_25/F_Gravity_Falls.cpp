#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        vector<int>v;
        int flag = 0;
        int sflag = 0;
        int valid = 0;
        while (n--)
        {
            int sz; cin>>sz;
            for (int i = 0; i < sz; i++)
            {
                int x; cin>>x;
                if(sflag){
                    if ((int)v.size() == i) v.push_back(x);
                    else if (v[i]>x || valid){ valid = 1;
                        if (v.empty()) v.push_back(x);
                        else v[i] = x;
                    } 
                    else if(v[i]<x && !valid) {sflag = 0;}

                }
                if (!flag) {
                    if (i == 0 && !v.empty() && v[0] > x) {
                            flag = 1;
                            if (v.empty()) v.push_back(x);
                            else v[0] = x;
                        
                    } else if (i == 0 && !v.empty() && v[0] == x) {
                            sflag = 1;
                            if (v.empty()) v.push_back(x);
                            else v[0] = x;
                    }
                     else {
                        if ((int)v.size() == i) v.push_back(x);
                    }
                } 
                else {
                    if ((int)v.size() == i) v.push_back(x);
                    else v[i] = x;
                }
                if(i==sz-1){ flag = 0;sflag = 0; valid = 0;}
            }     
        }
        
        for(auto x: v){
            cout<<x<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}
