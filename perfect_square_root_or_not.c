#include <stdio.h>

int isPerfectSquare(int n) {
    int i;
    for (i = 1; i * i <= n; i++) {
        if (i * i == n) {
            return 1;  // True
        }
    }
    return 0;  // False
}

int main() {
    int n;
    scanf("%d", &n);
    
    if (isPerfectSquare(n)) {
        printf("True
");
    } else {
        printf("False
");
    }
    
    return 0;
}