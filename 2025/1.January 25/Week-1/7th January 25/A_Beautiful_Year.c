#include <stdio.h>
#include <stdbool.h>

// Function to check if all digits in a number are distinct
bool hasDistinctDigits(int year) {
    int digits[10] = {0};
    while (year > 0) {
        int digit = year % 10;
        if (digits[digit] > 0) {
            return false;
        }
        digits[digit]++;
        year /= 10;
    }
    return true;
}

int main() {
    int y;
    scanf("%d", &y);
    while (1) {
        y++;
        if (hasDistinctDigits(y)) {
            printf("%d\n", y);
            break;
        }
    }

    return 0;
}