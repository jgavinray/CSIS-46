// Listings 14.1, 14.2, & 14.3

FILE STUDENTC.H:

#include <iostream>
#include <string>
#include <valarray>

class Student
{
private:
    typedef std::valarray<double> ArrayDb;
    std::string name;
    ArrayDb scores;
    std::ostream && arr_out(std::ostream & os) const;
public:
    Student() : name("Null Student"), scores() {}
    Student(const std::string & s)
    : name(s), scores() {}
    explicit Student(int n) : name("Nully"), scores(n) {}
    Student(const std::string & s, int n)
    : name(s), scores(n) {}
    Student(const std::string & s, const ArrayDb & a)
    : name(s), scores(a) {}
    Student (const char * str, const double * pd, int n)
    : name(str), scores(pd, n) {}
    -Student() {}
    double Average() const;
    const std::string & Name() const;
    double & operator[](int i);
    double operator[](int i) const;
    
    // Friends
    // Input
    friend std::istream & operator >> (std::istream & is, Student & stu);
    friend std::istream & getline(std::istream & is, Student & stu);
    
    // Output
    friend std::ostream & operator << (std::ostream & os, const Student & stu);
};

FILE MAIN.CPP:
#include <iostream>
#include <cstring>
#include "studentc.h"

double Student::Average() const
{
    if (scores.size() > 0)
        return scores.sum()/scores.size();
    else
        return 0;
}

const string & Student::Name() const
{
    return name;
}

double & Student::operator[](int i)
{
    return scores[i];
}

double Student::operator[](int i) const
{
    return scores[i];
}

// Private Method
ostream & Student::arr_out(ostream & os) const
{
    int i;
    int lim = scores.size();
    if (lim > 0)
    {
        for (i = 0; i < lim; i++)
        {
            os << scores[i] << "  ";
            if (i % 5 == 4)
                os << endl;
        }
        if (i % 5 != 0)
            os << endl;
    }
    else
        os << " empty array ";
    return os;
}

// Friends

// Using string friend
istream & getline(istream & is, Student & stu)
{
    getline(is, stu.name);
    return is;
}

ostream & operator << (ostream & os, const Student & stu)
{
    os << "Scores for " << stu.name << ":\n";
    stu.arr_out(os);
    return os;
}


using std::cin;
using std::cout;
using std::endl;

void set(Student & sa, int n);
const int pupils = 3;
const int quizzes = 5;

int main()
{
    Student ada[pupils] = {Student(quizzes), Student(quizzes), Student(quizzes)};
    
    int i;
    for (i = 0; i < pupils; ++i)
        set(ada[i], quizzes);
    cout << "\nStudent List:\n";
    for (i = 0; i < pupils; ++i)
    {
        cout << endl << ada[i];
        cout << "average: " << ada[i].Average() << endl;
    }
    
    cout << "Done.\n";
    return 0;
}

void set(Student & sa, int n)
{
    cout << "Please enter the student's name: ";
    getline(std::cin, sa);
    cout << "Please enter " << n << " quiz scores:\n";
    for (int i = 0; i < n; i++)
        std::cin >> sa[i];
    while (std::cin.get() != '\n')
        continue;
}


/*
OUTPUT:
Please enter the student’s name: Gil Bayts Please enter 5 quiz scores:
92 94 96 93 95
Please enter the student’s name: Pat Roone Please enter 5 quiz scores:
83 89 72 78 95
Please enter the student’s name: Fleur O’Day
Please enter 5
92 89 96 74 64
Student List: Gil Bayts
Pat Roone Fleur O’Day
Results: Scores for Gil 92 94 96 93 95 average: 94
Scores for Pat 83 89 72 78 95 average: 83.4
quiz scores:
Bayts:
Roone:
Scores for Fleur O’Day: 92 89 96 74 64
average: 83
Done.
*/