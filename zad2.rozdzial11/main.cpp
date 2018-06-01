#include <iostream>
#include <cstdlib>
#include <ctime>
#include "vect.h"
int main ()
{
    using namespace std;
    using VECTOR:: Vector;
    srand(time(0)) ;
    double direction ;
    Vector step;
    Vector result(0.0, 0.0);
    unsigned long steps = 0;
    double target;
    double dstep;

    cout << "Podaj dystans do przejscia (k, aby zakonczyc): ";
    while (cin >> target)
    {
        cout << "Podaj dlugosc kroku: ";
        if (! (cin >> dstep) )
            break;
        cout << "Dystans do przejscia: " << target;
        cout << " dlugosc kroku: " << dstep << endl;
            while (result.magval () < target)
            {
                direction = rand() % 360;
                step.set(dstep, direction, 'p');
                result = result + step;
                steps++;

            }
            cout << "Po " << steps << " krokach delikwent osiagnal polozenie:\n";
            cout << result << endl;
            result.polar_mode() ;
            cout << "czyli\n" << result << endl;
            cout << "Srednia dlugosc kroku pozornego = "<< result.magval()/steps << endl;
            steps = 0;
            result.set(0.0, 0.0);
            cout << "Podaj dystans do przejscia (k, aby zakonczyc): " << endl;
    }
    cout << "Koniec!\n";
    return 0;
}

