/* Hi Dennie, I looked through Chapter 16 and I haven't been able to find any exception handling, however it is a part of chapter 15... So here is my version of an exception handler on page 806.

Also I hope you don't mind, I'm attempting to work this course from end back to the beginning, I felt this semester I wanted to challenge myself a little more!
*/
//  Program15-17.cpp
//  CSIS-46
//  Chapter 15 page 806
//  Created by J. Gavin Ray on 12/1/12.
//  Copyright (c) 2012 J. Gavin Ray. All rights reserved.
//

#include <iostream>
#include <cstdlib>
double hmean(double a, double b);
using namespace std;

int main()
{
    double x, y, z;
    
    cout << "Enter two numbers: ";
    while (cin >> x >> y)
    {
        z = hmean(x,y);
        cout << "Harmonic mean of " << x << " and " << y << " is " << z << endl;
        cout << "Enter next set of numbers <q to quit>: ";
    }
    cout << "\nBye!\n";
    return 0;
}
    double hmean(double a, double b)
    {
        if (a == -b)
        {
            cout << "untenable argument to hmean()\n";
            cout << "This is the exception handling";
            abort();
        }
        
        return 2.0 * a * b / (a + b);
    }
    

/*
Output:
Enter two numbers: 10 10
Harmonic mean of 10 and 10 is 10
Enter next set of numbers <q to quit>: 3 2
Harmonic mean of 3 and 2 is 2.4
Enter next set of numbers <q to quit>: 10 1
Harmonic mean of 10 and 1 is 1.81818
Enter next set of numbers <q to quit>: 10 0
Harmonic mean of 10 and 0 is 0
Enter next set of numbers <q to quit>: 0
0
untenable argument to hmean()
This is the exception handling
*/