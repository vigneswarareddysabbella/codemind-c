#include <stdio.h>

double custom_pow(double base, double exponent) {
    double result = 1.0;
    while (exponent > 0) {
        result *= base;
        exponent--;
    }
    return result;
}

double calculate_total_amount(double principle, double rate, double time) {
    double total_amount = principle * custom_pow(1 + rate/100, time);
    return total_amount;
}

int main() {
    double principle, rate, time;
    scanf("%lf %lf %lf", &principle, &rate, &time);

    double total_amount = calculate_total_amount(principle, rate, time);

    printf("%.2lf
", total_amount);

    return 0;
}
