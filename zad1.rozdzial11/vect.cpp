#include "vect.h"
#include <cmath>
using std:: sin;
using std:: cos;
using std:: atan;
using std:: cout;
namespace VECTOR
{
const double Rad_to_deg = 57.2957795130823;
void Vector:: set_mag()
{
    mag = sqrt (x * x + y * y) ;
}
void Vector:: set_ang()
{
    if (x == 0.0 && y == 0.0)
        ang = 0.0;
    else ang = atan2(y, x) ;
}
void Vector:: set_x()
{
    x = mag * cos(ang) ;
}
void Vector:: set_y()
{
    y = mag * sin(ang) ;
}
Vector:: Vector()
{
    x = y = mag = ang = 0.0;
    mode = 'r';
}
Vector:: Vector(double nl, double n2, char form)
{
    mode = form;
    if (form == 'r')
    {
        x = nl;
        y = n2;
        set_mag();
        set_ang() ;
    }
    else if (form == 'p')
    {
        cout << "Niepoprawna wartoœæ trzeciego argumentu Vector () - ";
        cout << "zerujê wektor\n";
        x = y = mag = ang = 0.0;
        mode = 'r';
    }

}
void Vector:: set(double nl, double n2, char form)
{
    mode = form;
    if (form == 'r')
    {
        x = nl;
        y = n2;
        set_mag();
        set_ang();
    }
    else if (form == 'p')
    {
        mag = nl;
        ang = n2;
        set_x();
        set_y();
    }
    else
    {
        cout << "Niepoprawny trzeci argument set() - ";
        cout << "zerujê wektor\n";
        x = y = mag = ang = 0.0;
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
        os << "(m,a) = (" << v.mag << ", " << v.ang * Rad_to_deg << ")";
    }
    else
        os << "Niepoprawny tryb reprezentacji obiektu wektora";
    return os;
}
}


