#include <bits/stdc++.h>
using namespace std;

int tetr(int n){
    if(n==0 || n==1) return n;
    if(n==2) return 1;
    if(n==3) return 2;
    else return tetr(n-1) + tetr(n-2)+ tetr(n-3) + tetr(n-4);

}

int main() {
    int n; cin>>n;
    cout<<tetr(n);
    return 0;
}
