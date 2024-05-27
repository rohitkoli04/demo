// Write a program in C to find the largest and smallest words in a string.

#include <stdio.h>
#include <string.h>

#define MAX_WORDS 100
#define MAX_LENGTH 100

void findLargestAndSmallestWords(char *str) {
    char words[MAX_WORDS][MAX_LENGTH];
    int i, j, k, wordCount = 0;
    int minLen = MAX_LENGTH, maxLen = 0;
    char smallest[MAX_LENGTH], largest[MAX_LENGTH];

    // Tokenizing the string into words
    for (i = 0; str[i] != '\0'; ++i) {
        if (str[i] == ' ') {
            words[wordCount][j] = '\0';
            wordCount++;
            j = 0;
        } else {
            words[wordCount][j++] = str[i];
        }
    }
    words[wordCount][j] = '\0';
    wordCount++;

    // Finding the smallest and largest words
    for (k = 0; k < wordCount; ++k) {
        int len = strlen(words[k]);
        if (len < minLen) {
            minLen = len;
            strcpy(smallest, words[k]);
        }
        if (len > maxLen) {
            maxLen = len;
            strcpy(largest, words[k]);
        }
    }

    printf("Smallest word: %s\n", smallest);
    printf("Largest word: %s\n", largest);
}

int main() {
    char str[MAX_LENGTH];

    // Input string from user
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove the newline character if present
    if (str[strlen(str) - 1] == '\n')
        str[strlen(str) - 1] = '\0';

    findLargestAndSmallestWords(str);

    return 0;
}
