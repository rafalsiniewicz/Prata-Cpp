#include <iostream>
#include "przestrzen.h"
using namespace std;
using namespace SALES;
int main()
{
    Sales* tab = new Sales[2];
    double ar[4] = {1,2,3};
    setSales(tab[0],ar,4);
    setSales(tab[1]);
    showSales(tab[0]);
    showSales(tab[1]);

    delete [] tab;
}
