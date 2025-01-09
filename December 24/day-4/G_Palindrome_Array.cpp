#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    long long int numbers[n];
    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
    }

    int result = 1; 
    for (int i = 0; i < n / 2; i++) {
        if (numbers[i] != numbers[n - i - 1]) {
            result = 0; 
            break;
        }
    }
    
    if (result == 1) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}
