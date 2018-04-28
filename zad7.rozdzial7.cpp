#include <iostream>
using namespace std;
const int Max = 5;

double* fill_array(double ar[], int limit);
void show_array (double* beginning, double* ending);
void revalue (double r, double* beginning, double* ending);
int main ()
{

    double properties[Max] ;
    double* last = fill_array(properties, Max);
    show_array(properties, last) ;
    cout << "Podaj czynnik zmiany wartosci: ";
    double factor;
    cin >> factor;
    revalue (factor, properties, last) ;
    show_array(properties, last) ;
    cout << "Gotowe.\n";
    return 0;
}
double* fill_array(double ar[], int limit)
{
    double temp;
    int i;
    for (i = 0; i < limit; i++)
    {
        cout << "Podaj wartosc nr " << (i + 1) << ": ";
        cin >> temp;
        if ( !cin)
        {
            cin. clear();
            while (cin.get () != '\n')
                continue;
            cout << "Bledne dane, wprowadzanie danych przerwane.\n";
            break;
        }
        else if (temp < 0)
            break;
        ar[i] = temp;
    }
    return &ar[i+1];
}
void show_array (double* beginning, double* ending)
{
    int i = 1;
    for (double* pointer = beginning; pointer != ending-1; pointer++)
    {
        cout << "Nieruchomosc nr " << i << ": " ;
        cout << *pointer << endl;
        i++;
    }
}
void revalue (double r, double* beginning, double* ending)
{
    for (double* pointer = beginning; pointer != ending ; pointer++)
        *(pointer) *= r;
}
