#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    string r;
    for (int i = 0; i < s.size(); i++)
    {
        char ind1 = s[i];
        char ind2 = s[i+1];
        if(ind2=='.' && ind1=='-'){
            r.push_back('1');
            i++;
        }
        if(ind2=='-' && ind1=='-'){
            r.push_back('2');
            i++;
        } else if(ind1=='.'){
            r.push_back('0');
        }
    }
    cout<<r;
    return 0;
}