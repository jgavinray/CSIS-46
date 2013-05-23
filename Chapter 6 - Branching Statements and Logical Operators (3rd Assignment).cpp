// Page #276
// #2

#include <iostream>

using namespace std;

int main()
{
    int i;
    double donation[10];
    double average = 0;
    int aboveAverage;
    
    for (i = 0; i < 10; i++){
        cout << "Please enter a donation amount: ";
        cin  >> donation[i];
        average = average + donation[i];
    }
    average = average / 10;
    for (i = 0; i < 10; i++){
        if (donation[i] > average)
            aboveAverage = aboveAverage + 1;
    }
    
    cout << "The overall average is: " << average << " and there are: " << aboveAverage << " donations above average.";
    return 0;
}

/*
Output:
Please enter a donation amount: 12
Please enter a donation amount: 32
Please enter a donation amount: 99
Please enter a donation amount: 3
Please enter a donation amount: 1
Please enter a donation amount: 9
Please enter a donation amount: 20
Please enter a donation amount: 1
Please enter a donation amount: 13
Please enter a donation amount: 21
The overall average is: 21.1 and there are: 3 donations above average.
*/