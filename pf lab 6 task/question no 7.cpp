#include <stdio.h>

int main() {
    int num, original_Number, digit, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    original_Number = num;

    while (num > 0) {
        digit = num % 10;
        sum += digit * digit * digit;
        num /= 10;
    }

    if (sum == original_Number) {
        printf("%d is an Armstrong number.\n", original_Number);
    } else {
        printf("%d is not an Armstrong number.\n", original_Number);
    }

    return 0;
}

