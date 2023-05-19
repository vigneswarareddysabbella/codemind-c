#include <stdio.h>

int maximum69Number(int num) {
    int temp = num;
    int digit, position = 1;
    int maxNum = num;

    while (temp > 0) {
        digit = temp % 10;
        if (digit == 6) {
            maxNum = num + 3 * position;
        }
        temp /= 10;
        position *= 10;
    }

    return maxNum;
}

int main() {
    int num;
    scanf("%d", &num);

    int maxNumber = maximum69Number(num);
    printf("%d
", maxNumber);

    return 0;
}
