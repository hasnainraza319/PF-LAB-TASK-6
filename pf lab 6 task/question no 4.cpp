#include <stdio.h>

int main() {
    int num;
    int final = 0; 

    do {
     
        printf("Enter a number ( that is 0 to stop): ");
        scanf("%d", &num);

    final += num;

        printf("The current final is: %d\n", final);

    } while (num != 0); 

  
    printf("Final  is: %d\n",final);

    return 0;
}

