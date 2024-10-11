#include <stdio.h>
int main() {
    int limit, number = 2; 

    printf("Enter a number ( shoul be greater than or equal to 1): ");
    scanf("%d", &limit);

  
    if (limit < 1) {
        printf("wrong input! kindly enter a number that is  equal to 1 or greater than 1.\n");
    } else {
        printf("Even numbers between 1 and %d are:\n", limit);

     
        while (number <= limit) {
            printf("%d ", number);
            number += 2; 
        }

        printf("\n"); 
    }

    return 0;
}

