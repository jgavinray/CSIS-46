// A scope is the context within a computer program in which a variable name or
// other identifier is valid and can be used, or within which a declaration has 
// effect.

// Page # 280
// Listing 7.1

#include <iostream>

using namespace std;

void simple(); // Function Prototype

int main()
{
    cout << "int main() now calling the simple() function:\n";
    simple();
    return 0;
}

void simple()
{
    cout << "All contained within a 'void' function.  What this means is that\n"
        << "this particular function doesn't need to return something!";
}

/*
Output:
int main() now calling the simple() function:
All contained within a 'void' function.  What this means is that
this particular function doesn't need to return something!
*/