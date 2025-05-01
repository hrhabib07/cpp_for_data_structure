#include<bits/stdc++.h>
using namespace std;

int main() {
    pair<string, string> p;
    cin >> p.first >> p.second;

    string s1 = p.first, s2 = p.second;
    transform(s1.begin(), s1.end(), s1.begin(), ::tolower); 
    transform(s2.begin(), s2.end(), s2.begin(), ::tolower); 

    if (s1 == s2) {
        cout << 0; 
    } else if (s1 < s2) {
        cout << -1; 
    } else {
        cout << 1; 
    }

    return 0;
}
