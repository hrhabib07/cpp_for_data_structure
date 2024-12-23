#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n; 

    vector<char> word(n); 
    for (int i = 0; i < n; i++) {
        cin >> word[i]; 
    }

    sort(word.begin(), word.end());

    for (int i = 0; i < n; i++) {
        cout << word[i];
    }

    return 0;
}
