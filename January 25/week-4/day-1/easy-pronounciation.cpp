#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    vector<int> res;

    for (int k = 0; k < t; k++) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int count = 0; 
        bool hard = false; 

        for (int i = 0; i < n; i++) {
            char c = s[i];
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
                count = 0; 
            } else {
                count++;
                if (count >= 4) { 
                    hard = true;
                    break;
                }
            }
        }
        if (hard) {
            res.push_back(0);
        } else {
            res.push_back(1);
        }
    }

    for (int i = 0; i < t; i++) {
        if (res[i] == 1) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
