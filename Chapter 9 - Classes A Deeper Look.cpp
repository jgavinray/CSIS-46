// Hi Dennie, as per our discussion, here is another sample program from 
// Chapter #9
// Page #412 & #413
// Listing 9.6

File #1:

#include <iostream>

using namespace std;

// external variable
int tom = 3;
int dick = 30;
static int harry = 300;

// fnction prototypes
void remote_access();

int main()
{
    cout << "main() reports the following addresses:" << endl;
    cout << &tom << " = &tom, " << &dick << " = &dick, " << &harry << " = &harry" << endl;
    // Added by me
    cout << "main() reports the following values in the variables:" << endl;
    cout << tom << " = tom, " << dick << " = dick, " << harry << " = harry\n";

    remote_access();
    return 0;
}

File #2

#include <iostream>

extern int tom;
static int dick = 10;
int harry = 200;

void remote_access()
{
    using namespace std;
    cout << "remote_access() reports the following addresses:" << endl;
    cout << &tom << " = &tom, " << &dick << " = &dick, " << &harry << " = &harry\n";
    
    // Added by me
    cout << "remote_access() reports the following values in the variables:" << endl;
    cout << tom << " = tom, " << dick << " = dick, " << harry << " = harry\n";
    
    
}


/*
OUTPUT:


main() reports the following addresses:
0x1000020b0 = &tom, 0x1000020b4 = &dick, 0x1000020b8 = &harry
main() reports the following values in the variables:
3 = tom, 30 = dick, 300 = harry
remote_access() reports the following addresses:
0x1000020b0 = &tom, 0x1000020c0 = &dick, 0x1000020bc = &harry
remote_access() reports the following values in the variables:
3 = tom, 10 = dick, 200 = harry
*/