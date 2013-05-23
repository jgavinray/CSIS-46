//  program17-18.cpp
//  CSIS-46
//  Chapter 17 program 17.18
//  Created by J. Gavin Ray on 12/15/12.
//  Copyright (c) 2012 J. Gavin Ray. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

const char * file = "file.txt";
int main()
{
    using namespace std;
    char ch;
  
    ifstream fin;
    fin.open(file);
    
    if (fin.is_open())
    {
        cout << "Here are the current contents of the " << file << " file:\n";
        while (fin.get(ch))
            cout << ch;
        fin.close();
    }
    
    ofstream fout(file, ios::out | ios::app);
    if (!fout.is_open())
    {
        cerr << "Can't open " << file << " file for output.\n";
        exit(EXIT_FAILURE);
    }

    cout << "\nDone.\n";
    return 0;
}

/*
Output:

Here are the current contents of the file.txt file:
I am working to master C++!
So far I am but a neophyte!
But all I C is C++ and Objective C!
Done.
*/