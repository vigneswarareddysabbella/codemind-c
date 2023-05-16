#include <stdio.h>

int power(int base, int exponent) {
    int result = 1;
    while (exponent != 0) {
        result *= base;
        exponent--;
    }
    return result;
}

int isDisarium(int number) {
    int temp = number;
    int length = 0;
    
    // Calculate the number of digits in the number
    while (temp != 0) {
        length++;
        temp /= 10;
    }
    
    int sum = 0;
    int position = length;
    temp = number;
    
    // Calculate the sum of digits raised to their respective positions
    while (temp != 0) {
        int digit = temp % 10;
        sum += power(digit, position);
        position--;
        temp /= 10;
    }
    
    // Check if the sum is equal to the number
    if (sum == number) {
        return 1;  // True
    } else {
        return 0;  // False
    }
}

int main() {
    int N;
    scanf("%d", &N);
    
    if (isDisarium(N)) {
        printf("True
");
    } else {
        printf("False
");
    }
    
    return 0;
}
