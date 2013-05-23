// Page # 408 & 409
// Listing 9.5

#include <iostream>

using namespace std;

// external variable
double warming = 0.3;

// fnction prototypes
void update(double dt);
void MHWarming();          // Added by me
void local();

int main()
{
    cout << "Global warming is " << warming << " degrees.\n";
    update(0.1);
    cout << "Global warming is " << warming << " degrees.\n";
    local();
    cout << "Global warming is " << warming << " degrees.\n";
    MHWarming();
    return 0;
}

void update(double dt)
{
    extern double warming;    // optional redeclaration
    warming += dt;
    cout << "Updating global warming to " << warming << " degrees.\n";
}

void MHWarming()
{
    double warming = 1.2;
    
    cout << "\nAdded by J. Gavin Ray\n";
    cout << "Warming in Morgan Hill = " << warming << " degrees.\n";
    cout << "But global warming = " << ::warming << " degrees on average.\n";
    
}

void local()    // uses local variable
{
    double warming = 0.8;
    
    cout << "Local warming = " << warming << " degrees.\n";
    // Access global variable with the scope resolution operator
    cout << "But global warming = " << ::warming << " degrees.\n";
}

/*
OUTPUT:

Global warming is 0.3 degrees.
Updating global warming to 0.4 degrees.
Global warming is 0.4 degrees.
Local warming = 0.8 degrees.
But global warming = 0.4 degrees.
Global warming is 0.4 degrees.

Added by J. Gavin Ray
Warming in Morgan Hill = 1.2 degrees.
But global warming = 0.4 degrees on average.
*/