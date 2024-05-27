// Write a program in C to print individual characters of a string in reverse orde

#include <stdio.h>

int main() {
    char str[100];

    // Input string
    printf("Enter a string: ");
    scanf("%[^\n]", str); // Reading string with spaces

    // Print individual characters of the string in reverse order
    printf("Individual characters of the string in reverse order:\n");
    for (int i = 0; str[i] != '\0'; i++) {
        // Move to the end of the string
    }
    int i;
    for (int j = i - 1; j >= 0; j--) {
        printf("%c ", str[j]);
    }
    printf("\n");

    return 0;
}
