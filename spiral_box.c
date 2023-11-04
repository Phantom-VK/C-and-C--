#include <stdio.h>


int main() {
    int i, j, k, n;
    printf("Enter number: ");
    scanf("%d", &n);

    for(int i = 1; i < (2*n); i++ ){

        k = n;
        if(i<=n){
        for(int j = 1; j < (2*n); j++ ){
            printf("%d", k);
            if(i>j){
                k--;
            }else if(i+j>=2*n){
                k++;
            }
        }}
        if(i>n){
        for(int j = 1; j < (2*n); j++ ){
            printf("%d", k);
            if(i<=j){
                k++;
            }else if(i+j<2*n){
                k--;
            }
        }}
        printf("\n");
    }

    return 0;
}
