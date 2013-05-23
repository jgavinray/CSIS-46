//  fileio.cpp
//  CSIS-46
//  Chapter 17 program 17.16
//  Created by J. Gavin Ray on 12/1/12.
//  Copyright (c) 2012 J. Gavin Ray. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <string>

int main()
{
    using namespace std;
    string filename;
    
    cout << "Enter name for new file: ";
    cin >> filename;
    
    ofstream fout(filename.c_str());
    
    fout << "Enter your eyes only!\n";
    cout << "Enter your secret number : ";
    float secret;
    cin >> secret;
    fout << "Your secret number is " << secret << endl;
    fout.close();
    
    
    ifstream fin(filename.c_str());
    cout << "Here are the contents of " << filename << ":\n";
    char ch;
    while (fin.get(ch))
        cout << ch;
    cout << "Done\n";
    fin.close();
    
    return 0;
}

/*
Output # 1:
Enter name for new file: DennieRulez
Enter your secret number : 12345
Here are the contents of DennieRulez:
Enter your eyes only!
Your secret number is 12345
Done

Output # 2:

Enter name for new file: DennieRulez
Enter your secret number : 123
Here are the contents of DennieRulez:
Enter your eyes only!
Your secret number is 123
Done


Contents of DennieRulez:

Enter your eyes only!
Your secret number is 12345
Enter your eyes only!
Your secret number is 123
*/
