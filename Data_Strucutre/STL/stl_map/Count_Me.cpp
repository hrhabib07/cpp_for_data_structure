#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    cin.ignore(); 

    while (t--) {
        string s;
        getline(cin, s);

        stringstream ss(s);
        map<string, int> mp;
        string word;
        int maxCount = 0;
        string result;

        while (ss >> word) {
            mp[word]++;

            if (mp[word] > maxCount) {
                maxCount = mp[word];
                result = word;
            }
            
        }

        cout << result << " " << maxCount << endl;
    }
    return 0;
}
