#include <stdio.h>
int main() {
    int num, k;
    int isPrime = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num < 2) {
        isPrime = 0;
    } else {
        for (k = 2; k * k <= num; k++) {
     if (num % k == 0) {
    isPrime = 0;
       break;
     }
 }
    }

    if (isPrime) {
        printf("%d is a prime number.\n", num);
   int s = 0, t = 1, next;

    printf("Fibonacci series up to %d: ", num);
        while (s <= num) {
     printf("%d ", s);
     next = s + t;
    s = t;
    t = next;
        }
        printf("\n");
    } else {
        printf("%d is not  prime number.\n", num);
    }

    return 0;
}

