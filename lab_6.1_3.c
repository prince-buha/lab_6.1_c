/*
Enter the value of N: 5
Even numbers from 1 to 5 are: 2 4
*/

#include <stdio.h>

int main() {
    int N, i;
    
    printf("Enter the value of N: ");
    scanf("%d", &N);
    
    i = 1;
    printf("Even numbers from 1 to %d are: ", N);
    do {
        if (i % 2 == 0) {
            printf("%d ", i);
        }
        i++;
    } while (i <= N);
    
    return 0;
}

