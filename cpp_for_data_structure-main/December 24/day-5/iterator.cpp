#include<bits/stdc++.h>
using namespace std;
int main(){
    vector <int> seq ={1,2,3,4,5};
    vector <int>::iterator it;
    for (it = seq.begin(); it != seq.end(); it++)
    {
        cout<<*(it)<<" ";
    }
    
    return 0;
}