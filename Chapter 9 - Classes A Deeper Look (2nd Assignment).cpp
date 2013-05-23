// Page #442
// #2

#include <iostream>
const int ArSize = 10;

void strcount(const char * str);

using namespace std;


int main()
{
    char input[ArSize];
    char next;
    
    cout << "Enter a line:\n";
    cin.get(input, ArSize);
    while (cin)
    {
        cin.get(next);
        while (next != '\n')
            cin.get(next);
        strcount(input);
        cout << "Enter next line (empty line to quit):" << endl;
        cin.get(input, ArSize);
    }
    cout << "Hasta!\n";
    return 0;
}

void strcount(const char * str)
{
    static int total = 0;
    int count = 0;
    
    cout << "\"" << str << "\" contains ";
    while (*str++)
        count++;
    total += count;
    cout << count << " characters\n";
    cout << total << " characters total\n";
}

/*
Output:

Enter a line:
Howdy!
"Howdy!" contains 6 characters
6 characters total
Enter next line (empty line to quit):
Dennie Rules!
"Dennie Ru" contains 9 characters
15 characters total
Enter next line (empty line to quit):
Nope!
"Nope!" contains 5 characters
20 characters total
Enter next line (empty line to quit):
Quitting next!
"Quitting " contains 9 characters
29 characters total
Enter next line (empty line to quit):

Hasta!
*/