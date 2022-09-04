#include <stdlib.h>
#include <stdio.h>

int returnGreaterGroup(int[], int);

int main() {
    int T[] = {-1, 14, 54, 41, 27, -1, -1, 85, 73, -1, 36, 76}, Tlength = 11; // result is 4
    // int T[] = {14, 54, 41, -1, 23, -1, 85, 73, -1, -1, 36, 76}, Tlength = 11; // result is 3
    // int T[] = {14, 54, 41, 27, 23, -1, 85, 73, -1, 36, 76, -1}, Tlength = 11; // result is 5
    
    printf("The greater group of this table is %d\n", returnGreaterGroup(T, Tlength));
}

int returnGreaterGroup(int T[], int m) {
    int result = 0, count = 0, i;
    
    for (i = 0; i < m; i++) {
        if (T[i] != -1) {
            count++;
        } else {
            result = result < count ? count : result;
            count = 0;
        }
    }
    
    return result < count ? count : result;
}
