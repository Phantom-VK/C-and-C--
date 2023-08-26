#include<iostream>
#include<string>
#include<cstring>
using namespace std;

int main(){

//C style character string
//char string_name[size];
// char name[] = {'V','i','k','r','a','m','a','d','i','t','y','a','\0'};
char name[] = "Vikramaditya";
cout<<"This is name using C style character string: "<<name << endl;
cout<<endl;

//string in c++

string mid_name = "Ganesh";
cout<< "This is mid name using c++ string: "<< mid_name << endl;
cout<<endl;


//Taking string input in c++
string sur_name;
cout<< name<< " Enter your surname: ";
cin>> sur_name;
cout<<endl;


//Concatinating three strings in c++
string full_name = string(name) +" "+ mid_name +" "+ sur_name;
cout<<"So your full name is: "<< full_name<< endl;
cout<<endl;


//getting size of full name in c++
int length = full_name.size();
cout<<"Length using c++ string size function "<< length << endl;
cout<<endl;

//copy string in c++
char destination[length];
string source = full_name;
source.copy(destination, length);
cout<<"This is copied string in c++: "<< destination<<endl;
cout<<endl;

//getting size in cstring
int cstring_length = strlen(destination);
cout<<"Length using cstring length function: "<<cstring_length<<endl;
cout<<endl;

//copy string in cstring
char branch[10] = "IT", year[10];
cout<<"Your branch is "<<branch<<endl;
strcpy(year,branch);
cout<<endl;
cout<<"Copied Cstring from variable branch "<<year<<endl;
cout<<endl;

//comparing string in cstring
char new_name[] = "Vikramaditya";
char new_surname[] = "Khupse";

int result = strcmp(new_name, new_surname);
cout<<"Comparing str1 and str2 in by strcmp we get: "<<result<<endl;
cout<<endl;

//comparing in c++
string subject1 = "Object Oriented Programming";
string subject2 = "Data Structures";
int result2 = subject1.compare(subject2);
cout<<"Comparing str1 and str2 in by comapre in c++ we get: "<<result2;
}