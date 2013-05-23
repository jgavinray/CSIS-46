// Page #336
// #9
#include <iostream>

using namespace std;

double add(double x, double y);
double calculate(double x, double y);

int main()
{
    double q = calculate(1.1,2.2);
    cout << q;
    return 0;
}

double calculate(double x, double y)
{
    return add(x,y);
}

double add(double x, double y)
{
    return x + y;
}

/*
output:
3.3
*/
