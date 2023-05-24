#include <stdio.h>
#include <stdbool.h>

bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    int N;
    scanf("%d", &N);

    for (int p1 = 2; p1 <= N / 2; p1++) {
        if (isPrime(p1)) {
            int p2 = N / p1;
            if (isPrime(p2) && p1 * p2 == N) {
                printf("%d %d
", p1, p2);
                return 0;
            }
        }
    }

    printf("-1
");
    return 0;
}