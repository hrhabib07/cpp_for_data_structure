#include <bits/stdc++.h>
using namespace std;

// Function to check divisibility by 9
bool isDivisible(string n) {
    int digit_sum = 0;
    for (char c : n) {
        digit_sum += (c - '0');
    }
    if (digit_sum % 9 == 0) return true;
    int count2 =0;
    int count3 =0;
    for (char c : n) {
        int digit = c - '0';
        if (digit < 4 && digit > 1) {
            if (digit == 2) count2++;
            if (digit == 3) count3++;
            int new_digit = digit * digit;
            int new_sum = digit_sum - digit + new_digit; 
            if (new_sum % 9 == 0) return true;
        }
    }
    int total = digit_sum+2*count2+6*count3;
    if(total%9==0){
        return true;
    } else if((digit_sum+2*count2)%3==0){
       return true;  
    }
   
    return false;
}

int main() {
    int t;
    cin >> t;
    vector<string> arr(t);
    for (int i = 0; i < t; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < t; i++) {
        if (isDivisible(arr[i])) {
            cout << "YES";
        } else {
            cout << "NO";
        }
        if (i != t - 1) cout << endl;
    }

    return 0;
}
