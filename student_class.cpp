#include <iostream>

using namespace std;

class Student
{

    string name;
    int marks_OOPs = 0, marks_IC = 0, marks_DM = 0, marks_DS = 0, marks_DSD = 0, roll_num = 0, total_marks = 0;

    string array[5] = {"OOPs", "IC", "DM", "DS", "DSD"};
    int marks_array[5] = {marks_OOPs, marks_IC, marks_DM, marks_DS, marks_DSD};

public:
    void take_details();

    void show_details();

    inline char check_grades(int mark);
};

void Student::take_details()
{

    cout << "\nEnter students' name: ";
    cin >> name;

    cout << "\nEnter roll number: ";
    cin >> roll_num;

    for (int i = 0; i < 5; i++)
    {

        cout << "Enter marks of " << array[i] << ": ";
        cin >> marks_array[i];
    }
}

void Student::show_details()
{

    cout << "_____________________________________________";
    cout << "\nName of student is: " << name << endl;
    cout << "Roll number is:" << roll_num << endl;

    for (int i = 0; i < 5; i++)
    {

        cout << "\nMarks of " << array[i] << ": " << marks_array[i] << " and grade is: " << check_grades(marks_array[i]);
        total_marks = total_marks + marks_array[i];
    }

    cout << "\nTotal marks: " << total_marks;
}

inline char Student::check_grades(int mark)
{

    if (mark < 40)
    {

        return 'F';
    }
    else if (mark >= 40 && mark < 60)
    {

        return 'D';
    }
    else if (mark >= 60 && mark < 70)
    {

        return 'C';
    }
    else if (mark >= 80 && mark < 90)
    {

        return 'B';
    }
    else if (mark >= 90 && mark < 100)
    {

        return 'A';
    }
}

int main()
{

    int size;
    cout << "For how many students you want to enter data?: ";
    cin >> size;
    Student student[size];

    for (int i = 0; i < size; i++)
    {

        student[i].take_details();
        student[i].show_details();
    }
}