#include <stdio.h>

int isPerfectSquare(int n);

int isPerfectSquare(int n) {
    for (int i = 1; i * i <= n; i++) {
        if ((n % i == 0) && (n / i == i)) {
            return 1; 
        }
    }
    return 0; 
}

int main() {
    long long int n;
    printf("Enter a number: ");
    scanf("%lld", &n);

    if (isPerfectSquare(n)) {
        printf("Yes, it is a perfect square number.\n");
    } else {
        printf("No, it is not a perfect square number.\n");
    }

    return 0;
}
