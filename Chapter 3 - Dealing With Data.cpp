// J. Gavin Ray
// Listing 3.5
// Page 80
#include <iostream>

using namespace std;

int main()
{
    char ch;
    
    cout << "Enter a character: " << endl;
    cin >> ch;
    cout << "Holla! ";
    cout << "Thank you for the " << ch << " characyer!." << endl;
    
    ch = NULL;
    
    cout << "The contents of ch is now : " << ch << endl;
    return 0;
}

/*
Output:

Enter a character: 
D
Holla! Thank you for the D characyer!.
The contents of ch is now :
*/