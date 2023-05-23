#include <stdio.h>

int power(int base, int exponent) {
    int result = 1;
    while (exponent > 0) {
        result *= base;
        exponent--;
    }
    return result;
}

int is_disarium_number(int N) {
    char str_N[20]; // Assuming the number has at most 20 digits
    sprintf(str_N, "%d", N);
    int sum_digits = 0;
    int power_value = 1;
    
    for (int i = 0; str_N[i] != NULL; i++) {
        int digit_value = str_N[i] - '0';
        int digit_power = power(digit_value, power_value);
        sum_digits += digit_power;
        power_value++;
    }
    
    return sum_digits == N;
}

int main() {
    int N;
    scanf("%d", &N);
    
    // Check if N is a Disarium number
    int result = is_disarium_number(N);
    
    // Print the result
    if (result)
        printf("True
");
    else
        printf("False
");
    
    return 0;
}
