#include<stdio.h>
void main(){
    int numbr, rev_num=0,rem,original_num;
    printf("Enter any number: ");
    scanf("%d",&numbr);
    original_num = numbr;
    while (numbr>0)
    {
       rem = numbr % 10;
       rev_num = rev_num*10+rem;
       numbr = numbr / 10;
    }
    printf("%d\n",rev_num);
    if(rev_num == original_num){
        printf("Given number is a palindrome");
    }else{
        printf("Given number is not a palindrome");
    }
    
    
    
}