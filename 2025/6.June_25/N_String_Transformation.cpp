#include <bits/stdc++.h>
using namespace std;

int main() {
    string S, T;
    cin >> S >> T;

    vector<int> freqS(26, 0), freqT(26, 0);
    for (char c : S) freqS[c - 'a']++;
    for (char c : T) freqT[c - 'a']++;

    vector<int> countsS, countsT;
    for (int i = 0; i < 26; ++i) {
        if (freqS[i] > 0) countsS.push_back(freqS[i]);
        if (freqT[i] > 0) countsT.push_back(freqT[i]);
    }

    sort(countsS.begin(), countsS.end());
    sort(countsT.begin(), countsT.end());

    if (countsS == countsT) {
        cout << "Yes";
    } else {
        cout << "No";
    }

    return 0;
}