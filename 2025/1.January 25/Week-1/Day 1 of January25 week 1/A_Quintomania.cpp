#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    vector<int> r;
    for (int j = 0; j < t; j++)
    {
        int x;
        cin>>x;
        vector<int> numbers;
        for (int i = 0; i < x; i++)
        {
            int val;
            cin>>val;
            numbers.push_back(val);
        }
        int result = 0;
        for (int i = 0; i < x-1; i++)
        {
            int diff = abs(numbers[i]-numbers[i+1]);
            if(diff>=5 && diff<=7){
                result =1;
            } else{
                result =0;
                break;
            }
        }
        r.push_back(result);
    }
    
    for (int i = 0; i < t; i++)
    {
        if(r[i]==1){
            cout<<"YES"<<endl;
        } else{
            cout<<"NO"<<endl;
        }
    } 
    return 0;
}