#include "vect.h"
#include <cmath>
using std:: sin;
using std:: cos;
using std:: atan;
using std:: cout;
namespace VECTOR
{
const double Rad_to_deg = 57.2957795130823;
void Vector:: set_x(double n1, double n2)
{
    if(n1 == -1 && n2 == -1)
        x = magval() * cos(angval()) ;
    else x = magval(n1) * cos(angval(n2));
}
void Vector:: set_y(double n1, double n2)
{
    if(n2 == -1 && n1 == -1)
        y = magval() * sin(angval()) ;
    else y = magval(n1) * sin(angval(n2));
}
Vector:: Vector()
{
    x = y = 0.0;
    mode = 'r';
}
Vector:: Vector(double nl, double n2, char form)
{
    mode = form;
    if (form == 'r')
    {
        x = nl;
        y = n2;
        magval();
        angval() ;
    }
    else if (form == 'p')
    {
        cout << "Niepoprawna wartosc trzeciego argumentu Vector () - ";
        cout << "zeruje wektor\n";
        x = y = 0.0;
        mode = 'r';
    }

}
void Vector:: set(double n1, double n2, char form)
{
    mode = form;
    if (form == 'r')
    {
        x = n1;
        y = n2;
        magval();
        angval();
    }
    else if (form == 'p')
    {
        set_x(n1,n2);
        set_y(n1,n2);
    }
    else
    {
        cout << "Niepoprawny trzeci argument set() - ";
        cout << "zeruje wektor\n";
        x = y = 0.0;
        mode = 'r';
    }
}
Vector:: ~Vector()
{
}
void Vector:: polar_mode ()
{
    mode = 'p';
}
void Vector:: rect_mode ()
{
    mode = 'r';
}
Vector Vector:: operator+ (const Vector & b) const
{
    return Vector(x + b.x, y + b.y);
}
Vector Vector:: operator- (const Vector & b) const
{
    return Vector(x - b.x, y - b.y);
}
Vector Vector:: operator- () const
{
    return Vector(-x,-y);
}
Vector Vector:: operator* (double n) const
{
    return Vector(n * x, n * y);
}
Vector operator*(double n, const Vector & a)
{
    return a * n;
}
std::ostream & operator<< (std::ostream & os, const Vector & v)
{
    if( v.mode == 'r')
        os << "(x,y) = (" << v.x << ", " << v.y << ")";
    else if (v.mode == 'p' )
    {
        os << "(m,a) = (" << v.magval() << ", " << v.angval() * Rad_to_deg << ")";
    }
    else
        os << "Niepoprawny tryb reprezentacji obiektu wektora";
    return os;
}
}



