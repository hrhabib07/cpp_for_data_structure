#include<bits/stdc++.h>
using namespace std;
int main(){
    // option 1
    string s = "hello world";
    cout<<s<<endl;

    // option 2;
    string s2("hello world", 4);
    cout<<s2<<endl;

    // option 3
    string a ="hello world";
    string s3(a,4);
    cout<<s3<<endl;

    // option 4
    string s4(26,'A');
    cout<<s4<<endl;
    // cout<<s4<<" SZ: "<<s4.size()<<endl;


    return 0;
}