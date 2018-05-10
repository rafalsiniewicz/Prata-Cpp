#include<iostream>
#include"przestrzen.h"
using namespace std;
namespace SALES{
Sales:: Sales(const double ar[], int n)
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
            this->sales[i] = ar[i];
        for(int i = n; i < 4; i++)
            this->sales[i] = 0;
    }
    else if (n == 4)
    {
        for(int i = 0; i < n; i++)
            this->sales[i] = ar[i];
    }


    for(int i = 0; i < n; i++)
        suma += ar[i];

    srednia = suma/n;
    this->average = srednia;
    this->mini = minimum;
    this->maks = maksimum;
}
Sales:: Sales()
{

}
void Sales:: setSales ()
{
    double ar[4];
    cout << "Podaj wartosci dla czterech kwartalow:\n";
    for(int i = 0; i < 4; i++)
        cin >> ar[i];
    for(int i = 0; i < 4; i++)
        this->sales[i] = ar[i];
    double minimum = this->sales[0];
    double maksimum = this->sales[0];
    double suma = 0;
    double srednia;
    for(int i = 0; i < 4; i++)
        if(this->sales[i] < minimum)
            minimum = this->sales[i];
    for(int i = 0; i < 4; i++)
        if(this->sales[i] > maksimum)
            maksimum = this->sales[i];
    for(int i = 0; i < 4; i++)
        suma += this->sales[i];
    srednia = suma/4;
    this->average = srednia;
    this->maks = maksimum;
    this->mini = minimum;
}
void Sales:: showSales ()
{
    cout << "Sales:\n";
    for(int i = 0; i < sizeof(this->sales)/sizeof(double); i++)
        cout << this->sales[i] << " ";
    cout << endl;
    cout << "Average:\n" << this->average << endl;
    cout << "Maksimum:\n" << this->maks << endl;
    cout << "Minimum:\n" << this->mini << endl;
}
}
