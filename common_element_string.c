#include <stdio.h>
//Code to find common elements between two strings
//With user input
void common_element(char *string1, char *string2)
{
    const int size = 100;
    char output_array[size];
    int k = 0;
    for (int i = 0; string1[i] != '\0'; i++) {
        for (int j = 0; string2[j] != '\0'; j++) {
            if (string1[i] == string2[j]) {
                
                int found = 0;
                for (int m = 0; m < k; m++) {
                    if (output_array[m] == string1[i]) {
                        found = 1;
                        break;
                    }
                }
                if (found == 0) {
                    output_array[k++] = string1[i];
                    break;
                }
            }
        }
    }
    printf("\nCommon elements are:");
    for (int i = 0; i < k; i++)
    {

        printf("\t%c", output_array[i]);
    }
}

void take_input()
{

    char string1[100], string2[100];
    printf("\nEnter first string: ");
    gets(string1);
    printf("\nEnter second string: ");
    gets(string2);

    common_element(string1, string2);
}

int main()
{

    take_input();
}