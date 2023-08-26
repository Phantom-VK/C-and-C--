#include<stdio.h>
void main(){

    int i, j ,num = 1,num2 = 0, rows;
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for(i = 1; i <= rows; i++){

        for(j = rows; j > i; j--){

            printf(" ");
        }
        for(j = 1; j <= i; ++j){

            printf("%d ",num);
            num++;
        }
        for( j = 1; j < i; ++j){

            num2 = num+j-1;
            printf("%d ",num2);
            
        }
            
         for(j = rows; j > i; j--){

            printf(" ");
        }

            
            printf("\n");
        
        }
        

    
    }