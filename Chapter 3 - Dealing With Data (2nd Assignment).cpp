// A const is a symbolic name that is associated with a declaration.  This is
// useful when declaring preprocessor declarations or "qualifiers", for example
// as in the below program:
//
// const int FOOT = 12;
//
// The above follows the suggestion in K&R regarding constant declarations. 
// In all caps to distinguish it from a normal variable.

#include <iostream>

using namespace std;

const int FOOT = 12;

int main()
{
    float inches;
    float height;


    cout << "Please enter your height in inches: ";
    cin >> inches;
    
    height = (inches / FOOT);
    
    cout << "You are " << height << " foot tall." << endl;
    
    
    return 0;
}

/*
OUTPUT:


Please enter your height in inches: 73
You are 6.08333 foot tall.
*/