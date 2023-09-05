#include <stdio.h>
#include <string.h>


int isEven(char *s) {
    int l = strlen(s);
    int flag = 0;

    
    for (int i = l - 1; i >= 0; i--) {

        
        if (s[i] == '0' && flag == 0)
            continue;

        if (s[i] == '.') {
            flag = 1;
            continue;
        }

        
        if ((s[i] - '0') % 2 == 0)
            return 1;

        return 0;
    }
    return 0;
}

int main() {
    char s[100];
    printf("Enter a number: ");
    scanf("%c", &s);
    if (isEven(s))
        printf("Even\n");
    else
        printf("Odd\n");
    return 0;
}
