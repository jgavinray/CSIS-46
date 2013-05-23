// A sentinel or condition controlled loop is used to perform a task until a 
// condition is met OR if the condition is changed.

// A loop counter is the term often used to refer to the variable that controls the 
// iterations of a loop.

// Page #180
// Listing 5.2
#include <iostream>

using namespace std;

int main()
{
    int countdown, countdownBy, i;
    
    cout << "Enter a starting countdown value: ";
    cin  >> countdown;
    cout << "Count down by how much each time? "; // Added by me
    cin  >> countdownBy;
    
    for (i = countdown; i; i = i - countdownBy) // Altered loop by me
        cout << "i = " << i << "\n";
    cout << "Done now that i = " << i << endl;
    return 0;
    
}

/*
Output:

Enter a starting countdown value: 50
Count down by how much each time? 10
i = 50
i = 40
i = 30
i = 20
i = 10
Done now that i = 0
*/