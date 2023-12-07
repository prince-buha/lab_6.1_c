/*
Enter the starting year: 2023
Enter the ending year: 2040
Leap years between 2023 and 2040 are: 2024 2028 2032 2036 2040
*/

#include <stdio.h>

int main() {
    int startYear, endYear;

    printf("Enter the starting year: ");
    scanf("%d", &startYear);
    printf("Enter the ending year: ");
    scanf("%d", &endYear);

    printf("Leap years between %d and %d are: ", startYear, endYear);

    while (startYear <= endYear) {
        if ((startYear % 4 == 0 && startYear % 100 != 0) || (startYear % 400 == 0)) {
            printf("%d ", startYear);
        }
        startYear++;
    }

    return 0;
}

