#include <stdio.h>

int main() {
    int n;

    // Input the number of rows
    scanf("%d", &n);

    // Loop through each row
    for (int i = n; i > 0; i--) {
        // Loop through each column in the current row
        for (int j = 0; j < i; j++) {
            // Print a star
            printf("*");
        }
        // Move to the next line
        printf("\n");
    }

    return 0;
}