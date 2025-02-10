#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int a, b, c, d;
    cin >> a >> b >> c >> d;
    long long result = 1;
    result = (result * a) % 100;
    result = (result * b) % 100;
    result = (result * c) % 100;
    result = (result * d) % 100;
    if(result>9){
        cout << result%100;
    } else{
        cout<<0<<result;
    }
    return 0;
}
