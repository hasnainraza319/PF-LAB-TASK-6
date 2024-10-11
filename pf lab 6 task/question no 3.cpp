#include <stdio.h>

int main() {
    int input;
    do {
    
        printf("Enter a positive number: ");
        scanf("%d", &input);

  
        if (input <= 0) {
            printf("Error: The number must be > than 0.try again.\n");
        }
    } while (input <= 0); 

    
    printf("weldone! You have  entered a positive number: %d\n", input);

    return 0;
}

