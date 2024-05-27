// .Write a program in C to combine two strings manuall

#include <stdio.h>

int main() {
    char str1[100], str2[100], combined[200];
    int i, j;

    // Input first string
    printf("Enter the first string: ");
    scanf("%s", str1);

    // Input second string
    printf("Enter the second string: ");
    scanf("%s", str2);

    // Copying str1 to combined
    for (i = 0; str1[i] != '\0'; ++i) {
        combined[i] = str1[i];
    }

    // Copying str2 to combined
    for (j = 0; str2[j] != '\0'; ++j) {
        combined[i + j] = str2[j];
    }

    // Adding null character at the end of combined string
    combined[i + j] = '\0';

    // Printing the combined string
    printf("Combined string: %s\n", combined);

    return 0;
}
