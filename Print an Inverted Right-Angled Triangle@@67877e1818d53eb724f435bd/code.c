// Your code here...
#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N); // Read input value for N

    // Loop to print the inverted right-angled triangle
    for (int i = N; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n"); // Move to the next line after printing a row
    }

    return 0;
}
