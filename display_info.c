#include<stdio.h>
#include<string.h>

struct Bio
{
    char name[100];
    long int mob;
    char address[100];
}Bio1;

void addName();
void number();
void addrs();
void endMsg();

void number(){
    printf("\n");
    printf("\nHello there %s! Please enter your mobile number: ",Bio1.name);
    scanf("%ld",&Bio1.mob);
    
}

void addName(){

    printf("\n");
    printf("\nHello user please enter your name: ");
    scanf("%[^\n]", Bio1.name);
    
}

void addrs(){
    printf("\n");
    printf("%s please enter your address: ", Bio1.name);
    scanf("%s", Bio1.address);

}

void endMsg(){
long int mob_num = Bio1.mob;
printf("\n------------------------------------------------------------------------------------------------");
printf("\nOkay so %s, your mobile number is %ld and address is %s.", Bio1.name, mob_num, Bio1.address);
int choice;
printf("\n------------------------------------------------------------------------------------------------");
printf("\nPlease enter 0 to confirm else choose and type number of information to edit\n1)Name\n2)Number\n3)Address: ");
scanf("%d", &choice);

switch (choice)
{
case 0:
    printf("\nYour information has been saved!.");
    break;

case 1:
    addName();
    endMsg();
    break;

case 2:
    number();
    endMsg();
    break;

case 3:
    addrs();
    endMsg();
    break;

default:
    break;
}

}

int main(){

    addName();
    number();
    addrs();
    endMsg();
}