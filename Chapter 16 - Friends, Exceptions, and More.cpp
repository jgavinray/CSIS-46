//  Program15-13.cpp
//  CSIS-46
//  Chapter 15 page 828
//  Created by J. Gavin Ray on 12/17/12.
//  Copyright (c) 2012 J. Gavin Ray. All rights reserved.
//

#include <iostream>
#include <new>
#include <cstdlib>

using namespace std;

struct Big
{
    double stuff[20000];
};


int main()
{
    Big * pb;
    try {
        cout << "Trying to get a big block of memory:\n";
//#1      
        pb = new Big[10000];    // 1,600,000,000 bytes
//#2      
        pb = new Big[100000000000000000000000000];
        cout << "Got past the new request:";
    }
    catch (bad_alloc & ba)
    {
        cout << "Caught the exception!\n";
        cout << ba.what() << endl;
        exit(EXIT_FAILURE);
    }
    if (pb != 0)
    {
        pb[0].stuff[0] = 4;
        cout << pb[0].stuff[0] << endl;
    }
    else
        cout << "pb is null pointer\n";
    delete [] pb;
    return 0;
}

/*
Output:
#1
Trying to get a big block of memory:
Got past the new request:4


#2
Trying to get a big block of memory:
Caught the exception!
std::bad_alloc
*/