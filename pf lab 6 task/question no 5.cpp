#include <stdio.h>

int main() {
    int num, k;
    int isPrime = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num < 2) {
        isPrime = 0;
    } else {
     for (k = 2; k < num; k++) {
      if (num % k == 0) {
      isPrime = 0;
       break;
     }
       }
    }

    if (isPrime) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}

