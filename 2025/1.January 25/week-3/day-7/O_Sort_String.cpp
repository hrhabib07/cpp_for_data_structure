#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<int> freq(26, 0);
    for (char c : s) {
        freq[c - 'a']++;
    }
    for (int i = 0; i < 26; ++i) {
        while (freq[i]--) {
            cout << char('a' + i);
        }
    }
    return 0;
}
