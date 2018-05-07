#include<iostream>
#include<cstring>
using namespace std;

class Person
{
private:
    static const int LIMIT = 256;
    string lname;
    char fname[LIMIT];
public:
    Person();
    Person(const string& ln, const char* fn);
    void Show() const;
    void FormalShow() const;
};
Person:: Person()
{
    lname = "";
    fname[0] = '\0';
}
Person:: Person(const string& ln, const char* fn = "HejTy")
{
    lname = ln;
    strcpy(fname, fn);
}
void Person:: Show() const
{
    cout << "Imie: " << fname << endl;
    cout << "Nazwisko: " << lname << endl;
}
void Person:: FormalShow() const
{
    cout << "Nazwisko: " << lname << endl;
    cout << "Imie: " << fname << endl;
}
int main()
{
    Person one;
    Person two("Staszek");
    Person three("Jacek", "Placek");
    one.Show();
    one.FormalShow();
    two.Show();
    two.FormalShow();
    three.Show();
    three.FormalShow();

    return 0;
}
