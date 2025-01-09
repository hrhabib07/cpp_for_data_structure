#include<bits/stdc++.h>
using namespace std;
int main(){
    vector <int> ages = {23,21,16,14,7};
    for (int age: ages)
    {
        cout<<age<<" ";
    }
    cout<<endl;
    cout<<endl;
    vector <int> tenZeros(10,0); //(a,b) => size of vector :a, value of each element: b;
    
    for (int zero: tenZeros)
    {
        cout<<zero<<" ";
    }
    return 0;
}