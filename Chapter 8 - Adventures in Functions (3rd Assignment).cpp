// Page # 391
// #7
#include <iostream>

using namespace std;

template <typename T>
void ShowArray(T arr[], int n);

template <typename T>
void ShowArray(T * arr[], int n);

struct debts
{
    char name[50];
    double amount;
};

int main(void)
{
    int things[6] = {13, 31, 103, 301, 310, 130};
    
    struct debts mr_E[3] =
    {
        
        {"Ima Wolfe", 2400.0},
        {"Ura Foxe ", 1300.0},
        {"Iby Stout", 1800.0}
    };
    
    double * pd[3];
    
    for (int i = 0; i < 3; i++)
        pd[i] = &mr_E[i].amount;
    
    cout << "Listing Mr. E's counts of things:\n";
    
    ShowArray(things, 6);
    
    ShowArray(pd, 3);
    
    return 0;
}

template <typename T>
void ShowArray(T arr[], int n)
{
    int Total;
    cout << "template A\n";
    for (int i = 0; i < n; i++)
        Total = Total + arr[i];
    cout << Total << endl;
}

template <typename T>
void ShowArray(T * arr[], int n)
{
    int Total;
    cout << "template B\n";
    for (int i = 0; i < n; i++)
        Total = Total + *arr[i];
    cout << Total << endl;
}

/*
OUTPUT:

Listing Mr. E's counts of things:
template A
888
template B
6388
*/
