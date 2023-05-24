#include <stdio.h>
#include <stdbool.h>

bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }

    // Check for divisibility up to the square root of the number
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }

    return true;
}

bool isMegaPrime(int num) {
    char str_num[20]; // Assuming the number has at most 20 digits
    sprintf(str_num, "%d", num);

    for (int i = 0; str_num[i] != NULL; i++) {
        int digit = str_num[i] - '0';
        if (!isPrime(digit)) {
            return false;
        }
    }

    return true;
}

int main() {
    int N;
    scanf("%d", &N);

    if (isPrime(N) && isMegaPrime(N)) {
        printf("Mega Prime
");
    } else {
        printf("Not Mega Prime
");
    }

    return 0;
}