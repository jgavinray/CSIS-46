// Program exercise #1 on page 698


#include <iostream>
#include <cstring>
#ifndef CD_H_
#define CD_H_

class Cd {  // represents a CD disk
private:
    char performers[50];
    char label[20];
    int selections;  // number of selections
    double playtime;  // playing time in minutes
public:
    Cd(const char * s1, const char * s2, int n, double x);
    //    Cd(const Cd & d);    // default version is fine
    Cd();
    virtual ~Cd() {}
    virtual void Report() const;  // reports all CD data
    //    Cd & operator=(const Cd & d); // default version is fine
};

#endif
#ifndef CLASSIC_H_
#define CLASSIC_H_



class Classic : public Cd
{
private:
    char primarywork[50];
public:
    Classic(const char * pw, const char * s1, const char * s2,
            int n, double x);
    Classic();
    void Report() const;    // redefine to report primary work
};

#endif

Cd::Cd(const char * s1, const char * s2, int n, double x)
{
    std::strncpy(performers, s1, 49);
    performers[49] = '\0';
    std::strncpy(label, s2, 19);
    label[19] = '\0';
    selections = n;
    playtime = x;
}

Cd::Cd()
{
    performers[0] = '\0';
    label[0] = '\0';
    selections = 0;
    playtime = 0.0;
}

void Cd::Report() const
{
    using std::cout;
    using std::endl;
    cout << "Performer(s): " << performers << endl;
    cout << "Label: " << label << endl;
    cout << "Number of selections: " << selections << endl;
    cout << "Play time: " << playtime << endl;
}



Classic::Classic(const char * pw, const char * s1,
                const char * s2, int n, double x)
: Cd(s1, s2, n, x)
{
    std::strncpy(primarywork, pw, 49);
    primarywork[49] = '\0';
}
Classic::Classic() : Cd()
{
    primarywork[0] = '\0';
}
void Classic::Report() const
{
    std::cout << "Primary work: " << primarywork << std::endl;
    Cd::Report();
}



using namespace std;
void Bravo(const Cd & disk);
int main()
{
    Cd c1("Beatles", "Capitol", 14, 35.5);
    Classic c2 = Classic("Piano Sonata in B flat, Fantasia in C",
                        "Alfred Brendel", "Philips", 2, 57.17);
    Cd *pcd = &c1;
    
    cout << "Using object directly:\n";
    c1.Report();    // use Cd method
    c2.Report();    // use Classic method
    
    cout << "Using type cd * pointer to objects:\n";
    pcd->Report();  // use Cd method for cd object
    pcd = &c2;
    pcd->Report();  // use Classic method for classic object
    
    cout << "Calling a function with a Cd reference argument:\n";
    Bravo(c1);
    Bravo(c2);
    
    cout << "Testing assignment: ";
    Classic copy;
    copy = c2;
    copy.Report();
    
    return 0;
}

void Bravo(const Cd & disk)
{
    disk.Report();
}

/*
OUTPUT:

Using object directly:
Performer(s): Beatles
Label: Capitol
Number of selections: 14
Play time: 35.5
Primary work: Piano Sonata in B flat, Fantasia in C
Performer(s): Alfred Brendel
Label: Philips
Number of selections: 2
Play time: 57.17
Using type cd * pointer to objects:
Performer(s): Beatles
Label: Capitol
Number of selections: 14
Play time: 35.5
Primary work: Piano Sonata in B flat, Fantasia in C
Performer(s): Alfred Brendel
Label: Philips
Number of selections: 2
Play time: 57.17
Calling a function with a Cd reference argument:
Performer(s): Beatles
Label: Capitol
Number of selections: 14
Play time: 35.5
Primary work: Piano Sonata in B flat, Fantasia in C
Performer(s): Alfred Brendel
Label: Philips
Number of selections: 2
Play time: 57.17
Testing assignment: Primary work: Piano Sonata in B flat, Fantasia in C
Performer(s): Alfred Brendel
Label: Philips
Number of selections: 2
Play time: 57.17
*/