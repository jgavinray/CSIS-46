// Page #390
// Exercise #2
#include <iostream>
#include <string>

using namespace std;

struct candybar
{
    string  brand;
    double  weight;
    int    calories;
};

void showBar(candybar name)
{
        cout << name.brand << endl;
        cout << name.weight << endl;
        cout << name.calories << endl;
}

struct candybar inputBar(candybar name, string a, double b, int c)
{
    name.brand      = a;
    name.weight    = b;
    name.calories  = c;

    return name;
}

int main(int argc, const char * argv[])
{

    candybar wrapper;
    
    showBar(inputBar(wrapper, "Mar's Milky Way", 2.4, 240));

    return 0;
}

/*
OUTPUT:

Mar's Milky Way
2.4
240
*/
