// Page #339
// Program 8.1

#include <iostream>
using namespace std;

inline double square(double x)  { return x * x; }  // This is too cool to pass inline stuffs
inline double cube(double y)    { return y * y * y; }  // <-- Me

int main(int argc, const char * argv[])
{
    double a, b;
    double c = 13.0;
    
    a = square(5.0);
    b = square(4.5 + 7.5);      // Way cool passing expression
    
    cout << "a = " << a << ", b = " << b << "\n";
    cout << "c = " << c;
    cout << ", c squared = " << square(c++) << endl;
    cout << "Now c = " << c << endl;
    cout << "Cubing c = " << cube(c) << endl;      // <-- Me
    
    return 0;
}

/*
Output:

a = 25, b = 144
c = 13, c squared = 169
Now c = 14
Cubing c = 2744
*/