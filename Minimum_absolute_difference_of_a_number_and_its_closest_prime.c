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
    
    // Check if N is prime
    if (isPrime(N)) {
        printf("0
");
    } else {
        int smallerPrime = N - 1;
        while (!isPrime(smallerPrime)) {
            smallerPrime--;
        }
        
        int largerPrime = N + 1;
        while (!isPrime(largerPrime)) {
            largerPrime++;
        }
        
        int diff1 = N - smallerPrime;
        int diff2 = largerPrime - N;
        
        int minDiff = (diff1 < diff2) ? diff1 : diff2;
        printf("%d
", minDiff);
    }
    
    return 0;
}