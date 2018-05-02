#include<iostream>
#include"przestrzen.h"
using namespace std;
namespace SALES
{
void setSales(Sales & s, const double ar[], int n)
{
    double minimum = ar[0];
    double maksimum = ar[0];
    double suma = 0;
    double srednia;
    for(int i = 0; i < n; i++)
        if(ar[i] < minimum)
            minimum = ar[i];

    for(int i = 0; i < n; i++)
        if(ar[i] > maksimum)
            maksimum = ar[i];

    if(n < 4)
    {
        for(int i = 0; i < n; i++)
            s.sales[i] = ar[i];
        for(int i = n; i < 4; i++)
            s.sales[i] = 0;
    }
    else if (n == 4)
    {
        for(int i = 0; i < n; i++)
            s.sales[i] = ar[i];
    }


    for(int i = 0; i < n; i++)
        suma += ar[i];

    srednia = suma/n;
    s.average = srednia;
    s.mini = minimum;
    s.maks = maksimum;
}
void setSales (Sales & s)
{
    double ar[4];
    cout << "Podaj wartosci dla czterech kwartalow:\n";
    for(int i = 0; i < 4; i++)
        cin >> ar[i];
    for(int i = 0; i < 4; i++)
        s.sales[i] = ar[i];
    double minimum = s.sales[0];
    double maksimum = s.sales[0];
    double suma = 0;
    double srednia;
    for(int i = 0; i < 4; i++)
        if(s.sales[i] < minimum)
            minimum = s.sales[i];
    for(int i = 0; i < 4; i++)
        if(s.sales[i] > maksimum)
            maksimum = s.sales[i];
    for(int i = 0; i < 4; i++)
        suma += s.sales[i];
    srednia = suma/4;
    s.average = srednia;
    s.maks = maksimum;
    s.mini = minimum;
}
void showSales (const Sales & s)
{
    cout << "Sales:\n";
    for(int i = 0; i < sizeof(s.sales)/sizeof(double); i++)
        cout << s.sales[i] << " ";
    cout << endl;
    cout << "Average:\n" << s.average << endl;
    cout << "Maksimum:\n" << s.maks << endl;
    cout << "Minimum:\n" << s.mini << endl;
}
}
