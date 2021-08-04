#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
    int sortedNumber, numbers[6], i, j;

    printf("Sorted numbers: ");

    srand((unsigned int) time(NULL));

    for (i = 0; i < 6; i++) {
        sortedNumber = rand() % 60;

        numbers[i] = sortedNumber;

        for (j = 0; j < i; j++) {
            if (sortedNumber == numbers[j]) {
                sortedNumber = rand() % 60;

                numbers[i] = sortedNumber;
            }
        }

        printf("%d, ", numbers[i]);
    }

    return 0;
}
