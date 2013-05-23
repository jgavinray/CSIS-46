//  String concatenation is the operation of joining two character strings 
//  end-to-end. For example, the concatenation of "snow" and "ball" is 
//  "snowball".  This differs from appending, which adds a single character onto
// an existing string. 



// Page 118


#include <iostream>
using namespace std;

int main()
{
    const int ArSize = 20;
    char name[ArSize];
    char desert[ArSize];
    
    cout << "Enter your name:\n";
    cin >> name;
    cout << "Enter your favorite desert:\n";
    cin >> desert;
    cout << "I have some delicious " << desert;
    cout << " for you, " << name << ".\n";
    return 0;
}

/*
Output:

Enter your name:
Gavin
Enter your favorite desert:
Bread Pudding
I have some delicious Bread for you, Gavin.
*/

// I noticed the above only listed bread, but because the array size is limited
// to 20 characters before a break it only shows the characters UP TO said break.