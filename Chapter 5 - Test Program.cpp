#include <iostream>

using namespace std;

struct employee
{
    char    firstName[20];
    float  hours;
    float  age;
};

int main()
{
    int i;
    float wage;
    employee me;

    for (i = 0; i <= 5; i++) {
    cout << "What is your first name? ";
    cin >> me.firstName;
    cout << "How many hours did you work? ";
    cin >> me.hours;
    cout << "What is your age? ";
    cin >> me.age;
    
    if (me.age <= 20)
        wage = 10;
    else if (me.age > 20 && me.age < 40)
        wage = 12;
    else
        wage = 15;
    
    cout << "Name: " << me.firstName << endl;
    cout << "Age: " << me.age << endl;
    cout << "Worked: " << me.hours << " hours" << endl;
    cout << "Earned: $" << wage << " an hour for a total of " << (me.hours * wage) << endl;
    }
    
    return 0;
}
/*
Output:

What is your first name? Gavin
How many hours did you work? 40
What is your age? 29
Name: Gavin
Age: 29
Worked: 40 hours
Earned: $12 an hour for a total of 480
What is your first name? Dennie
How many hours did you work? 100
What is your age? 70
Name: Dennie
Age: 70
Worked: 100 hours
Earned: $15 an hour for a total of 1500
What is your first name? Ashley
How many hours did you work? 50
What is your age? 20
Name: Ashley
Age: 20
Worked: 50 hours
Earned: $10 an hour for a total of 500
What is your first name? Alcanzar
How many hours did you work? 10
What is your age? 21
Name: Alcanzar
Age: 21
Worked: 10 hours
Earned: $12 an hour for a total of 120
What is your first name? Raymond
How many hours did you work? 3
What is your age? 39
Name: Raymond
Age: 39
Worked: 3 hours
Earned: $12 an hour for a total of 36
What is your first name? Sandra
How many hours did you work? 32
What is your age? 51
Name: Sandra
Age: 51
Worked: 32 hours
Earned: $15 an hour for a total of 480
*/