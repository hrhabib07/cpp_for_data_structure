#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    int count = 0;
    string word = "";

    for (char c : s) {
        if (isalpha(c)) {
            word += c;
        } else {
            if (!word.empty()) {
                count++;
                word = ""; 
            }
        }
    }

    if (!word.empty()) {
        count++;
    }

    cout << count << endl;
    return 0;
}
