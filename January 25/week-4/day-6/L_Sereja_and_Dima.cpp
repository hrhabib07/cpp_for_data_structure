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

    int sum1=0,sum2=0;
    for (int  i = 0; i < n; i++)
    {
        int first = *v.begin();
        int sz=v.size();
        int last = v[sz-1];
        if(first>last && i%2==0 && i!=n-1){
            sum1+=first;
            v.erase(v.begin());
        } else if(first>last && i%2!=0 && i!=n-1){
            sum2+=first;
            v.erase(v.begin());
        } else if(first<last && i%2==0 && i!=n-1){
            sum1+=last;
            v.pop_back();
        } else if(first<last && i%2!=0 && i!=n-1){
            sum2+=last;
            v.pop_back();
        }
    };
    if(n%2==0 && v.size()==1){
        sum2+=v[0];
    } else if(n%2!=0 && v.size()==1){
        sum1+=v[0];
    }
    cout<<sum1<<" "<<sum2;
 
    return 0;
}