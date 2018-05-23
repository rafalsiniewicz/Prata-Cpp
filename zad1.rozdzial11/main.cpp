#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>
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
    string filename;
    fstream file;
    int i = 0;

    cout << "Podaj dystans do przejscia (k, aby zakonczyc): ";
    while (cin >> target)
    {
        cout << "Podaj dlugosc kroku: ";
        if (! (cin >> dstep) )
            break;
        cout << "Podaj nazwe pliku do ktorego maja zostac zapisane dane: ";
        cin >> filename;
        file.open(filename, ios:: out);
        file << "Dystans do przejœcia: " << target;
        file << " d³ugoœæ kroku: " << dstep << endl;
        if(file.good())
        {
            while (result.magval () < target)
            {
                direction = rand() % 360;
                step.set (dstep, direction, 'p');
                result = result + step;
                file << i++;
                file << ": (x,y) = (" << step.xval() << ", " << step.yval() << ")";
                file << endl;
                steps++;

            }
            file << "Po " << steps << " krokach delikwent osiagnal polozenie:\n";
            file << result << endl;
            result.polar_mode() ;
            file << "czyli\n" << result << endl;
            file << "Srednia dlugosc kroku pozornego = "<< result.magval()/steps << endl;
            steps = 0;
            result.set(0.0, 0.0);
            file.close();
            cout << "Dane zostaly zapisane do pliku!\nPodaj dystans do przejscia (k, aby zakonczyc) : ";
        }
    }
    cout << "Koniec!\n";
    return 0;
}
