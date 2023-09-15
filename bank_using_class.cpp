//Q7. WAP of bank class with following details 1. Customer name, Account no. Bank name, account type, balance 2. Operations 
//2.1 get customer data 
//2.2 print customer data 
//2.3 debit given amount If balance is more than 2000 
//2.4 credit given amount 2.5 show balance

#include<iostream>

using namespace std;

class Bank{

string user_name, check_name;
int choice, flag = 0, num = 0, pin;
long long int current_bal = 0, fixed_depo = 0, debit_amount = 0, credit_amount = 0 ,mobile_num;


public:

void take_details();
void withdraw();
void add_money();
void choose_action();
void confirm_pin(int num = 0);
void new_pin();

};


void Bank::confirm_pin(int num)
{
    cout<<"Confirm your pin: ";
    cin>>num;
    while(num != pin){

        cout<<"\nPlease enter correct pin: ";
        cin>>num;
    }
}

void Bank::new_pin(){

    cout<<"\nEnter your new pin: ";
    cin>>pin;
    confirm_pin();
    cout<<"New pin generated successfully"<<endl;
    choose_action();
    
}

void Bank::choose_action(){
    while (flag == 0)
    {    
    cout<<"________________________________________________________________";
    cout<<"\nPlease select action below:\n1)Add money\n2)Withdraw money\n3)show balance\n4)exit:\nEnter choie: ";
    cin>>choice;

    switch (choice)
    {
    case 1:
        add_money();
        break;

    case 2:
        withdraw();
        break;
    case 3:
        cout<<"\nYour current balance is: "<<current_bal<<endl;
        break;
    case 4:
        flag = 1;
        break;

    default:
        flag  = 1;
        break;
    }}


}
void Bank::take_details(){
    cout<<"WELCOME TO STATE BANK OF INDIA!";
    cout<<"\nEnter your name: ";
    cin>>user_name;

    cout<<"Enter your mobile number: ";
    cin>>mobile_num;

    new_pin();
    choose_action();
    
}

void Bank::add_money(){

    cout<<"Confirm your name: ";
    cin>>check_name;
    while(check_name != user_name){
    cout<<"Name didnt matched. Please try again: ";
    cin>>check_name;
    }
    while(credit_amount<2000){

        cout<<"Enter amount to add(min 2000rs): ";
        cin>>credit_amount;
    }
    confirm_pin();

    current_bal += credit_amount;
    cout<<"Amount added successfully!"<<endl;
}

void Bank::withdraw(){
    cout<<"\nPlease enter your name: ";
    cin>>check_name;
    while(check_name != user_name){
    cout<<"Name didnt matched. Please try again: ";
    cin>>check_name;
    }

    cout<<"Enter amount to withdraw: ";
    cin>>debit_amount;
    if(debit_amount>current_bal){

        cout<<"BANK BALANCE LOW!!"<<endl;
    

    }else{

        current_bal -= debit_amount;
        cout<<debit_amount<<"rupees withdrawn. Please collect your cash."<<endl;
    }
}

int main(){

    Bank user1;
    user1.take_details();
}

