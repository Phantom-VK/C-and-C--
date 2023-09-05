#include<stdio.h>

int main(){

    int n = 5, k = n;

    for(int i = 0; i < n; i++){

        for(int j = n-i; j <= n; j++ ){

            printf("%d", k);
        }
        k--;
        printf("\n");
    }
}