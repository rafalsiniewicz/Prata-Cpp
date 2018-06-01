#ifndef VECTOR_H_
#define VECTOR_H_
#include <iostream>
#include <cmath>
namespace VECTOR
{
class Vector
{
private:
    double x;
    double y;
    char mode;
    void set_x(double n1 = -1, double n2 = -1) ;
    void set_y(double n1 = -1, double n2 = -1);
public:
    Vector();
    Vector(double nl, double n2, char form = 'r');
    void set(double nl, double n2, char form = 'r');
    ~Vector();
    double xval () const
    {
        return x;
    }
    double yval () const
    {
        return y;
    }
    double magval (double n1 = -1) const
    {
        if( n1 == -1)
        {
            double mag;
            mag = sqrt (x * x + y * y) ;
            return mag;
        }
        else return n1;
    }
    double angval (double n2 = -1) const
    {
        if( n2 == -1)
        {
            double ang;
            if (x == 0.0 && y == 0.0)
                ang = 0.0;
            else ang = atan2(y, x) ;
            return ang;
        }
        return n2;
    }
    void polar_mode ();
    void rect_mode ();
    Vector operator+ (const Vector & b) const;
    Vector operator- (const Vector & b) const;
    Vector operator- () const;
    Vector operator* (double n) const;
    friend Vector operator*(double n, const Vector & a);
    friend std::ostream & operator<< (std::ostream & os, const Vector & v);
};
}
#endif

