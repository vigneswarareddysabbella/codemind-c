#include <stdio.h>

int main() {
    long long X;
    scanf("%lld", &X);

    long long result = X >= 0 ? X / 10 : (X - 9) / 10;

    printf("%lld
", result);

    return 0;
}
