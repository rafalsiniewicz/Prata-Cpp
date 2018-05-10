#include<iostream>
#include"przestrzen.h"
using namespace SALES;
int main()
{
    Sales* tab = new Sales[2];
    double ar[4] = {1,2,3};
    tab[0] = Sales(ar,4);
    tab[1].setSales();
    tab[0].showSales();
    tab[1].showSales();

    delete [] tab;
    return 0;
}


