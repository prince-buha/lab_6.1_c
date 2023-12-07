#include <stdio.h>

int main() {
    int N;

    printf("Enter the value of N: ");
    scanf("%d", &N);

    printf("Odd numbers from %d to 1 are: ", N);

    while (N >= 1) {
        if (N % 2 != 0) {
            printf("%d ", N);
        }
        N--;
    }

    return 0;
}

