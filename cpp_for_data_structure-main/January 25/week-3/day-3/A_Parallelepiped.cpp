#include<bits/stdc++.h>
using namespace std;
int main(){
    int A,B,C;
    cin>>A>>B>>C;
    int a = sqrt(A*C/B);
    int b = sqrt(A*B/C);
    int c = sqrt(B*C/A);
    cout<<(4*(a+b+c));
    return 0;
}