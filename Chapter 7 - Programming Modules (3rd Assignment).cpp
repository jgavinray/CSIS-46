// Page #335
// #7

#include <iostream>

using namespace std;

const int MAX = 5;

int fill_array(double ar[], int limit);
void show_array(const double ar[], int n);
void revalue(double r, double ar[], int n);

int main()
{
    double properties[MAX];
    
    int size = fill_array(properties, MAX);
    show_array(properties, size);
    cout << "Enter revaluation factor: ";
    double factor;
    cin >> factor;
    revalue(factor, properties, size);
    show_array(properties, size);
    cout << "Done.\n";
    
    return 0;
}

int fill_array(double ar[], int limit)
{
    double temp;
    int i;
    for (i = 0; i < limit; i++)
    {
        cout << "Enter value #" << (i + 1) << ": ";
        cin >> temp;
        if (!cin)
        {
            cin.clear();
            while (cin.get() != '\n')
                continue;
            cout << "Bad input; input process terminated.\n";
            break;
        }
        else if (temp < 0)
            break;
        ar[i] = temp;
    }
    return i;
}

void show_array(const double ar[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Poperty #" << (i + 1) << ": $";
        cout << ar[i] << endl;
    }
}

void revalue(double r, double ar[], int n)
{
    for (int i = 0; i < n; i++)
        ar[i] *= r;
}

/*
Output:

Enter value #1: 100000
Enter value #2: 200000
Enter value #3: 1
Enter value #4: 50000
Enter value #5: 20000
Poperty #1: $100000
Poperty #2: $200000
Poperty #3: $1
Poperty #4: $50000
Poperty #5: $20000
Enter revaluation factor: 1.2
Poperty #1: $120000
Poperty #2: $240000
Poperty #3: $1.2
Poperty #4: $60000
Poperty #5: $24000
Done.
*/