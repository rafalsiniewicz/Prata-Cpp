#ifndef _PRZESTRZEN_H_
#define _PRZESTRZEN_H_
#include <iostream>
namespace SALES
{
const int QUARTERS = 4;
class Sales
{
private:
    double sales[QUARTERS];
    double average;
    double maks;
    double mini;

public:
    Sales(const double ar[], int n);
    Sales();
    void setSales ();
    void showSales();
    void show();
};
}
#endif // _PRZESTRZEN_H_
