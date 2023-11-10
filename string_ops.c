#include <stdio.h>

// Function to check if two strings can be made equal
int canBeEqual(char *s1, char *s2) {
    int count[26] = {0};  // Initialize an array to count the frequency of each lowercase letter

    // Iterate through s1 and increment the count for each character
    for (int i = 0; s1[i]; i++) {
        count[s1[i] - 'a']++;
    }

    // Iterate through s2 and decrement the count for each character
    for (int i = 0; s2[i]; i++) {
        count[s2[i] - 'a']--;
    }

    // Check if all counts are zero, which means the characters and their frequencies are the same
    for (int i = 0; i < 26; i++) {
        if (count[i] != 0) {
            return 0;  // Strings can't be made equal
        }
    }

    return 1;  // Strings can be made equal
}

int main() {
    char s1[] = "abcd";
    char s2[] = "efgh";

    int result = canBeEqual(s1, s2);

    if (result == 1) {
        printf("true\n");
    } else {
        printf("false\n");
    }

    return 0;
}
