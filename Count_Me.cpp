#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    cin.ignore(); 

    while (T--) {
        string s;
        getline(cin, s);

        stringstream ss(s);
        unordered_map<string, int> freq;
        string word;
        int maxCount = 0;
        string result;

        while (ss >> word) {
            freq[word]++;

            if (freq[word] > maxCount) {
                maxCount = freq[word];
                result = word;
            }
            
        }

        cout << result << " " << maxCount << endl;
    }
    return 0;
}
