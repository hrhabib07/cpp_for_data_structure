#include<bits/stdc++.h>
using namespace std;
int main(){
    vector <int> v = {3, 5, 9, 2, 4};
    for(int value :v){
        cout<<value<<" ";
    }
    cout<<endl;
    // this won't work because value takes a copy of the array on the original one
    // for(int value :v){
    //     value++;
    // }
    // this will work because of referencing
    for(int &value :v){
        value++;
    }
    for(int value :v){
        cout<<value<<" ";
    }
    cout<<endl;
    return 0;
}