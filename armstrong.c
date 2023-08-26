#include<stdio.h>
void main(){
    int numbr, sum=0,rem,original_num;
    printf("Enter any three digit number: ");
    scanf("%d",&numbr);
    original_num = numbr;
    while (numbr>0)
    {
       rem = numbr % 10;
       sum += rem*rem*rem;
       numbr = numbr / 10;
    }
    printf("%d",sum);
}