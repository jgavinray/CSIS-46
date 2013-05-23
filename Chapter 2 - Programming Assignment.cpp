//
//  main.cpp
//  CSIS-46
//
//  Created by J. Gavin Ray on 1/8/13.
//  Page #64
//  Programming Exercise #3

#include <iostream>
using namespace std;

void blindMice()
{
    cout << "Three blind mice\n";
}

void theyRun()
{
    cout << "See how they run\n";
}

int main(int argc, const char * argv[])
{

    blindMice();
    blindMice();
    
    theyRun();
    theyRun();
    
    return 0;
}

/*
Output:

Three blind mice
Three blind mice
See how they run
See how they run
*/