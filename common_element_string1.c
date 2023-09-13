#include <stdio.h>
//Code to find common elements between two strings
//Without user input
void common_element()
{
    const int size = 100;
    char string1[]= "Vikramaditya", string2[] = "Vikram";
    int k = 0;
    char output_array[size];

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
    printf("Common elements are:\n");
    for (int i = 0; i < k; i++)
    {
        
        printf(" %c", output_array[i]);
    }
}

int main(){

    common_element();
    return 0;
}