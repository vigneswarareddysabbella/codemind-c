#include <stdio.h>

int isUniqueNumber(int num) {
    int digitCount[10] = {0};

    // Count the frequency of each digit in the number
    while (num > 0) {
        int digit = num % 10;
        digitCount[digit]++;
        num /= 10;
    }

    // Check if any digit has a count greater than 1
    for (int i = 0; i < 10; i++) {
        if (digitCount[i] > 1) {
            return 0; // Not a unique number
        }
    }

    return 1; // Unique number
}

int main() {
    int num;
    scanf("%d", &num);
    if (isUniqueNumber(num)) {
        printf("Unique Number
");
    } else {
        printf("Not Unique Number
");
    }

    return 0;
}
