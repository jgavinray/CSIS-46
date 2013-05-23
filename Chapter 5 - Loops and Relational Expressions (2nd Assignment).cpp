// Page #229
// #1
#include <iostream>

using namespace std;

int main()
{
    int sumOne, sumTwo, i;
    
    cout << "Enter a starting value: ";
    cin  >> sumOne;
    cout << "Enter an ending value: ";
    cin  >> sumTwo;
    
    int temp;
    for (i = sumOne; i <= sumTwo; i++) {
        cout << temp << "\t+\t" << i << "\t=\t" << (temp = temp + i) << endl;
    }
    cout << "Done!" << endl;
    return 0;
    
}

/*
Output:
Enter a starting value: 2
Enter an ending value: 9
0	+	2	=	2
2	+	3	=	5
5	+	4	=	9
9	+	5	=	14
14	+	6	=	20
20	+	7	=	27
27	+	8	=	35
35	+	9	=	44
Done!
*/