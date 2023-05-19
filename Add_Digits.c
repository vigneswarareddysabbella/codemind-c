#include <stdio.h>

int addDigits(int num) {
    while (num >= 10) {
        int sum = 0;
        while (num != 0) {
            sum += num % 10;
            num /= 10;
        }
        num = sum;
    }
    return num;
}

int main() {
    int num;
    scanf("%d", &num);

    int result = addDigits(num);
    printf("%d
", result);

    return 0;
}
