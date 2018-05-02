#ifndef _PRZESTRZEN_H_
#define _PRZESTRZEN_H_
namespace SALES
{
const int QUARTERS = 4;
struct Sales
{
    double sales[QUARTERS];
    double average;
    double maks;
    double mini;
};

void setSales(Sales & s, const double ar[], int n);
void setSales (Sales & s);
void showSales (const Sales & s);
void show();
}
#endif
