#include <stdio.h>
#include <string.h>

char* frequency(char* input1) {
    int frequencies[26] = {0}; // Initialize an array of size 26 (for 26 lowercase letters) with all frequencies set to 0

    // Count the frequencies of each character
    for (int i = 0; i < strlen(input1); i++) {
        char c = input1[i];
        if (c >= 'a' && c <= 'z') {
            frequencies[c - 'a']++;
        }
    }

    // Build the output string with frequencies in alphabetical order
    char* output = malloc(sizeof(char) * 52); // Allocate enough memory for the output string
    int index = 0;

    for (int i = 0; i < 26; i++) {
        if (frequencies[i] > 0) {
            output[index++] = 'a' + i; // Append the character
            output[index++] = '0' + frequencies[i]; // Append the frequency as a character
        }
    }

    output[index] = '\0'; // Null-terminate the output string

    return output;
}

int main() {
    char input[100];
    printf("Enter the input string: ");
    scanf("%s", input);

    char* result = frequency(input);
    printf("Frequency count: %s\n", result);

    free(result); // Free the dynamically allocated memory

    return 0;
}
