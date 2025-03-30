#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);

    char stars[n + 1]; // Array to hold the stars and null terminator

    for (int i = n; i > 0; i--) {
        memset(stars, '*', i); // Fill 'i' positions with '*'
        stars[i] = '\0';        // Add null terminator to make it a string
        printf("%s\n", stars);
    }
    return 0;
}