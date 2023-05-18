#include <stdio.h>
#include <string.h>

int octalToDecimal(const char *octal) {
    int decimal = 0;
    int power = 1;
    int length = strlen(octal);
    
    for (int i = length - 1; i >= 0; i--) {
        int digit = octal[i] - '0';
        decimal += digit * power;
        power *= 8;
    }
    
    return decimal;
}

int main() {
    char octal[100];
    scanf("%s", octal);
    
    int decimal = octalToDecimal(octal);
    printf("%d
", decimal);
    
    return 0;
}