#include <stdio.h>

int main() {
    int n, i;

    printf("Enter a number (n): ");
    scanf("%d", &n);

    i = 1; 

    printf("Numbers from 1 to %d are: \n", n);

    
    while (i <= n) {
        printf("%d ", i);
        i++; 
    }

    return 0;
}

