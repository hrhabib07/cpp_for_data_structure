#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while (t--)
    {
        string s; cin>>s;
        long long int number = stoi(s);
        long long root = sqrt(number);
        if(root*root == number && number>0) cout<<(root-1)<<" "<<(1)<<endl;
        else if(number==0) cout<<0<<" "<<0<<endl;
        else cout<<-1<<endl;
    }
    
    return 0;
}
