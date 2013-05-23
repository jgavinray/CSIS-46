// Page 276
// #3
#include <iostream>

using namespace std;

int main()
{
    int i;
    
    for (i = 0; i < 5; i++){
        
    cout << "Please enter one of the following choises:\n"
            "c) carnivore\t\tp) pianist\n"
            "t) tree\t\t\t\tg) game\n"
            "->";
    
    char choice;
    
    cin >> choice;
    
    switch(choice)
    {
        case 'c' :
        case 'C' : cout << "A hawk is a carnivore!\n";
            break;
        
        case 'p' :
        case 'P' : cout << "Sorry I do not know any pianists!\n";
            break;
            
        case 't' :
        case 'T' : cout << "Mahogany is a type of tree\n";
            break;
            
        case 'g' :
        case 'G' : cout << "Football is a game\n";
            break;
            
        case 'q' :
        case 'Q' : cout << "You have elected to quit!\n";
            break;
        
        default  : cout << "Please try again!\n";
            
    }
}
    return 0;
}

/*
Output:

Please enter one of the following choises:
c) carnivore	 p) pianist
t) tree	 g) game
->C
A hawk is a carnivore!
Please enter one of the following choises:
c) carnivore	 p) pianist
t) tree	 g) game
->t
Mahogany is a type of tree
Please enter one of the following choises:
c) carnivore	 p) pianist
t) tree	 g) game
->p
Sorry I do not know any pianists!
Please enter one of the following choises:
c) carnivore	 p) pianist
t) tree	 g) game
->g
Football is a game
Please enter one of the following choises:
c) carnivore	 p) pianist
t) tree	 g) game
->q
You have elected to quit!
*/
