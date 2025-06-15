#include <bits/stdc++.h>
using namespace std;

int main() {
    string line;
    while (getline(cin, line)) {
        vector<char> letters;
        for (char c : line) {
            if (c != ' ') {
                letters.push_back(c);
            }
        }
        sort(letters.begin(), letters.end());
        for (char c : letters) {
            cout << c;
        }
        cout << endl;
    }
    return 0;
}
