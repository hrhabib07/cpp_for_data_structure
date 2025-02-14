#include<bits/stdc++.h>
using namespace std;
void print(string & s ){ // when we use "&" this symbol it change the original string
    s="world";
}
int main(){
    string s="Hello";
    print(s);
    cout<<s<<endl;
    return 0;
}