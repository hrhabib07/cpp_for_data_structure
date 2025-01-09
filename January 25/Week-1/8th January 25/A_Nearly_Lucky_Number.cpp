#include<bits/stdc++.h>
using namespace std;

int main() {

    string s;
    cin >> s;
    int luckyNumber = 0;
    for (int i = 0; i < s.size(); i++) {
        char c = s[i];
        if (c == '4') {
            luckyNumber++;
        } else if (c == '7') {
            luckyNumber++;
        }
    }

    if (luckyNumber==4 || luckyNumber==7) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}
