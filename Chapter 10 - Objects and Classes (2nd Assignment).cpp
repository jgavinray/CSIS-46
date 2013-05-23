// As we discussed I'm just doing another program.
// Page #469
// Creating Header Files for Objects

// Header.h
#ifndef CSIS_46_Header_h
#define CSIS_46_Header_h
class Stock
{
private:
    char company[20];
    int shares;
    double share_val;
    double total_val;
    void set_tot() {total_val = shares * share_val;}    // Great Inline function!
public:
    void acquire(const char * co, int n, double pr);
    void buy(int num, double price);
    void sell(int num, double price);
    void update(double price);
    void show();
};


// main.cpp
#include <iostream>
#include <cstring>
#include "Header.h"

void Stock::acquire(const char * co, int n, double pr)
{
    std::strncpy(company, co, 29);
    company[29] = '\0';
    if (n < 0)
    {
        std::cerr << "Number of shares can't be negative; " << company << " shares set to 0.";
        shares = 0;
    }
    else
        shares = n;
    share_val = pr;
    set_tot();
}

void Stock::buy(int num, double price)
{
    if (num < 0)
    {
        std::cerr << "Number of shares purchased can't be negative. " << "Transaction is aborted.\n";
    }
    else
    {
        shares += num;
        share_val = price;
        set_tot();
    }
}

void Stock::sell(int num, double price)
{
    using std::cerr;
    if (num < 0)
    {
        cerr << "Number of shares sold can't be negative. " << "Transaction is aborted.\n";
    }
    else
    {
        shares = num;
        share_val = price;
        set_tot();
    }
}

void Stock::update(double price)
{
    share_val = price;
    set_tot();
}

void Stock::show()
{
    using std::cout;
    using std::endl;
    cout << "Company: " << company << " Shares: " << shares << endl << " Share Price: $" << share_val
    << " Total Worth: $" << total_val << endl;
}

int main()
{
    using std::cout;
    using std::ios_base;
    
    Stock stock1;
    stock1.acquire("NanoSmart", 20, 12.50);
    cout.setf(ios_base::fixed);
    cout.precision(2);
    cout.setf(ios_base::showpoint);
    stock1.show();
    stock1.buy(15,18.25);
    stock1.show();
    stock1.sell(400, 20.00);
    stock1.show();

    Stock stock2;
    stock2.acquire("Apple", 20, 580.50);
    cout.setf(ios_base::fixed);
    cout.precision(2);
    cout.setf(ios_base::showpoint);
    stock2.show();
    stock2.buy(100,685.25);
    stock2.show();
    stock2.sell(400, 700.00);
    stock2.show();

    return 0;
}

/*
OUTPUT:
Company: NanoSmart Shares: 20
Share Price: $12.50 Total Worth: $250.00
Company: NanoSmart Shares: 35
Share Price: $18.25 Total Worth: $638.75
Company: NanoSmart Shares: 400
Share Price: $20.00 Total Worth: $8000.00
Company: Apple Shares: 20
Share Price: $580.50 Total Worth: $11610.00
Company: Apple Shares: 120
Share Price: $685.25 Total Worth: $82230.00
Company: Apple Shares: 400
Share Price: $700.00 Total Worth: $280000.00
*/