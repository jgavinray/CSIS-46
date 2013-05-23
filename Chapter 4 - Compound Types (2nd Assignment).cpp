// Page # 174
// #1

#include <iostream>

using namespace std;

struct student
{
    char    firstName[20];
    char    lastName[20];
    char    grade;
    float  age;
};

int main()
{

    student me;
    
    cout << "What is your first name? ";
    cin >> me.firstName;
    cout << "What is your last name? ";
    cin >> me.lastName;
    cout << "What letter grade do you deserve? ";
    cin >> me.grade;
    cout << "What is your age? ";
    cin >> me.age;
    
    cout << "Name: " << me.lastName << ", " << me.firstName << endl;
    cout << "Grade: " << me.grade << endl;
    cout << "Age: " << me.age << endl;

    return 0;
}

/*
Output:

What is your first name? Gavin
What is your last name? Ray
What letter grade do you deserve? A
What is your age? 29
Name: Ray, Gavin
Grade: A
Age: 29
*/