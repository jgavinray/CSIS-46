// Problem #1 on page 629

#include <iostream>

using namespace std;

class Cow {
    char name[20];
    char * hobby;
    double weight;
public:
    Cow();
    Cow(const char * nm, const char * ho, double wt);
    Cow(const Cow & c);
    ~Cow();
    Cow & operator=(const Cow & c);
    void ShowCow() const; // display all cow data
};

int main() {
    
    Cow obj1;
    cout << "Default Constructor:" << endl;
    obj1.ShowCow();
    cout << "End Default Constructor." << endl;
    
    cout << "Object constructed by input:" << endl;
    char name[20];
    char hobby[20];
    double weight;
    
    cout << "Enter name: ";
    cin.getline(name, 20);
    
    cout << "Enter hobby: ";
    cin.getline(hobby, 20);
    
    cout << "Enter weight: ";
    cin >> weight;
    
    Cow obj(name, hobby, weight);
    obj.ShowCow();
    cout << "End object construct by user input." << endl;
    
    cout << "Copying constructed object:" << endl;
    Cow obj2(obj);
    obj2.ShowCow();
    cout << "End Copying constructed object." << endl;
    
    cout << "Object assignment:" << endl;
    Cow obj3 = obj;
    obj3.ShowCow();
    cout << "End of object assignment." << endl;
    
    return 1;
}

Cow::Cow(const char *nm, const char *ho, double wt) {
    strcpy(name, nm);
    int len = strlen(ho);
    hobby = new char[len + 1];
    strcpy(hobby, ho);
    weight = wt;
    cout << "object created." << endl;
}

Cow::Cow() {
    name[0] = '\0';
    hobby = new char[1];
    hobby[0] = '\0';
    weight = 0;
}

Cow::~Cow() {
    cout << name << " Object deleted" << endl;
}

Cow::Cow(const Cow & c) {
    strcpy(name, c.name);
    delete [] hobby;
    int len = strlen(c.hobby);
    hobby = new char[len+1];
    strcpy(hobby, c.hobby);
    weight = c.weight;
}

Cow & Cow::operator=(const Cow & c) {
    if (this == &c)
        return *this;
    strcpy(name, c.name);
    delete [] hobby;
    int len = strlen(c.hobby);
    hobby = new char[len+1];
    strcpy(hobby, c.hobby);
    weight = c.weight;
    return *this;
}

void Cow::ShowCow() const {
    cout << "Name:" << "\t" << name << endl
    << "Hobby:" << "\t" << hobby << endl
    << "Weight:" << "\t" << weight << endl;
}

/*
OUTPUT:
Default Constructor:
Name:	
Hobby:	
Weight:	0
End Default Constructor.
Object constructed by input:
Enter name: Dennie Van Tassel
Enter hobby: Programming
Enter weight: 150
object created.
Name:	Dennie Van Tassel
Hobby:	Programming
Weight:	150
End object construct by user input.
Copying constructed object:
Name:	Dennie Van Tassel
Hobby:	Programming
Weight:	150
End Copying constructed object.
Object assignment:
Name:	Dennie Van Tassel
Hobby:	Programming
Weight:	150
End of object assignment.
Dennie Van Tassel Object deleted
Dennie Van Tassel Object deleted
Dennie Van Tassel Object deleted
Obj
*/