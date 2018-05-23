#include<iostream>
#include<cstring>
using namespace std;

class Plorg
{
private:
    char name[19];
    int factor;
public:
    Plorg( char* _name = "Plorga", int _factor = 50);
    changeFactor( int _factor);
    show() const;
};
Plorg:: Plorg( char* _name, int _factor)
{
    strcpy(name, _name);
    factor = _factor;
}
Plorg:: changeFactor( int _factor)
{
    factor = _factor;
}
Plorg:: show() const
{
    cout << "name: " << name << "\tfactor: " << factor << endl;
}
int main()
{
    Plorg object1;
    Plorg object2("abcdesd", 70);
    object1.show();
    object2.show();
    object1.changeFactor(100);
    object1.show();
    return 0;
}
