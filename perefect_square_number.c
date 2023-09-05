#include <stdio.h>

//Function declaration 
int isPerfectSquare(int n);

//Function definition
int isPerfectSquare(int n) {
    //we are runing for loop from 1 until n i.e given number
    for (int i = 1; i * i <= n; i++) {
        
        if ((n % i == 0) && (n / i == i)) {
            return 1; 
        }
    }
    return 0; 
}

int main() {
    long long int n;
    //here we intialized a variable n of type long long int and taking inpu
    //in it.
    printf("Enter a number: ");
    scanf("%lld", &n);
    //we are calling function in if condition and function is returning 0 or 1
    //that is false or true.
    if (isPerfectSquare(n)) {
        //So if true
        printf("Yes, it is a perfect square number.\n");
    } else {
        //else
        printf("No, it is not a perfect square number.\n");
    }

    return 0;
}
