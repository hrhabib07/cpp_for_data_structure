#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    for (int j = 0; j < t; j++) {
        int x;
        cin >> x;
        vector<int> numbers(x);

        for (int i = 0; i < x; i++) {
            cin >> numbers[i];
        }

        bool isPerfect = true;
        for (int i = 0; i < x - 1; i++) {
            int diff = abs(numbers[i] - numbers[i + 1]);
            if (diff != 5 && diff != 7) {
                isPerfect = false; 
                break;
            }
        }

        if (isPerfect) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
