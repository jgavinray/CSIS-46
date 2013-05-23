/ A nested if statement is an if statement within an if statement.

// The dangling else is a problem in computer programming in which a 
// seemingly well-defined statement can become ambiguous.

// Page 239
// Listing 6.4
#include <iostream>

using namespace std;

int main()
{
    cout << "This program is used to reformat your hard disk\n"
            "and destroy all your dats.\n"
            "Do you wish to continues? <Y/N> ";
    char ch;
    
    cin >> ch;
    
    if (ch == 'y' || ch == 'Y')
        cout << "You were warned... bye bye data..";
    else if (ch == 'n' || ch == 'N')
        cout << "Wise choice, backup everything first then run me again!";
    else if (ch == 'd' || ch == 'D')
        cout << "So you have learned the master secrets of Dennie Van Tassel!\n"
                "Your hard disk is safe... for now!";
    else
        cout << "You entered nothing of value, clearly you don't need your\n"
                "data if you'll waste me time... say good bye!";
    
    return 0;
}
/*
Output:
This program is used to reformat your hard disk
and destroy all your dats.
Do you wish to continues? <Y/N> Y
You were warned... bye bye data..

This program is used to reformat your hard disk
and destroy all your dats.
Do you wish to continues? <Y/N> n
Wise choice, backup everything first then run me again!

This program is used to reformat your hard disk
and destroy all your dats.
Do you wish to continues? <Y/N> D
So you have learned the master secrets of Dennie Van Tassel!
Your hard disk is safe... for now!

This program is used to reformat your hard disk
and destroy all your dats.
Do you wish to continues? <Y/N> w
You entered nothing of value, clearly you don't need your
data if you'll waste me time... say good bye!
*/