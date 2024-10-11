#include<stdio.h>
int main() {
    int number;
   int factorial= 1; 

    printf("Please enter a non-negative integer: ");
    scanf("%d", &number);

    if (number < 0) {
        printf("Factorial is undefined for negative numbers.\n");
    } else {
        
        for (int z = 1; z <= number; z++) {
            factorial *= z; 
        }


        printf("Factorial of %d is %d.\n", number, factorial);
    }

    return 0;
}

