#include<bits/stdc++.h>
using namespace std;
int main(){
    vector <int> seq = {1,2,3,4,5,6,7,8};
    seq.erase(seq.begin()+1,seq.begin()+3);
    for(int s:seq){
        cout<<s<<" ";
    }
    return 0;
}