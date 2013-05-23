// A nested loop is a loop within a loop, an inner loop within the body of an 
// outer one.

// Page #229
// #2

#include <iostream>

using namespace std;

int main()
{
    int sumOne, i;
    int sumTwo = 0;
    
    cout << "Enter a value: ";
    cin  >> sumOne;
    
    for (i = sumOne; i; i++) {
        cout << sumTwo << "\t+\t" << sumOne << "\t=\t" << (sumTwo = sumOne + sumTwo) << endl;
        cout << "Enter a value: ";
        cin  >> sumOne;
        if (sumOne == 0) {
            cout << "Zero has been entered, program terminated!" << endl;
            return 0;
        }
            
    }
    cout << "Done!" << endl;
    return 0;
    
}

/*
Output:

Enter a value: 2
0	+	2	=	2
Enter a value: 3
2	+	3	=	5
Enter a value: 4
5	+	4	=	9
Enter a value: 5
9	+	5	=	14
Enter a value: 6
14	+	6	=	20
Enter a value: 7
20	+	7	=	27
Enter a value: 100
27	+	100	=	127
Enter a value: 123
127	+	123	=	250
Enter a value: 0
Zero has been entered, program terminated!
*/