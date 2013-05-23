//  The arithmetic operators follow the usual algebraic precedence, with
//  multiplication, division, and the taking of the modulus done before addition
//  and subtraction. This precedence, can be defined in mathematical terms as 
// an order of operations.

//  When two or more operators have the same precedence, C++ looks at wether
//  the operators have left-to-right associativity or a right-to-left associativity.
//  Left-to-right associativity means that if you have two operators working on
// the same operand and they have the same precedence;  you apply the left-
// handed operator first.

#include <iostream>

using namespace std;

const int FOOT = 12;

float bmi(float heightInInches, float weightInPounds)
{
    float bmi;
    
    bmi = weightInPounds / (heightInInches * heightInInches) * 703;
    
    return bmi;
}

int main()
{
    int inches;
    float height;
    float weight;

    cout << "Please enter your height in inches: ";
    cin >> inches;
    cout << "Please enter your weight in pounds: ";
    cin >> weight;
    
    height = (inches / FOOT);
    
    cout << "You are " << height << " tall" << endl;
    cout << "You have a BMI of: " << bmi(inches, weight) << endl;
    
    
    return 0;
}

/*
OUTPUT:

Please enter your height in inches: 62
Please enter your weight in pounds: 250
You are 5 tall
You have a BMI of: 45.7206
*/