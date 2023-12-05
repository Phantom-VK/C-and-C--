#include<iostream>
using namespace std;

class Student{

    private:
    int roll_num;
    string name;

    public:
    int new;
    
    

};

class Engg_stud : private Student, public Diploma_stud{

    public:
    string subject;
    int marks;
    string result;

    public:
    Engg_stud(){
            if(marks >= 40){

                result = "pass";
            }
    }
    
    void show_details(){
        cout<<"Name of the students is "<<name;
        cout<<"Role number is "<<roll_num;
        cout<<"Subject: "<<subject;
        cout<<"Result is"<<result;
    }
};

class Diploma_stud : public Student, public Engg_stud{
    
};

int main(){

    Engg_stud std1;

    
    

}