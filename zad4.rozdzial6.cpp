#include<iostream>
using namespace std;
const int strsize = 40;
const int ilosc = 5;
struct zpdw
{
    char imie[strsize];
    char stanowisko[strsize];
    char pseudozpdw[strsize];
    int preferencje;
};

int main()
{
    zpdw tab[ilosc] = {{"Wimp Macho","Starszy programista","Strong",0},
        {"Raki Rhodes","Mlodszy programista","Rhino",1},
        {"Celia Laiter","Analityk","MIPS",2},
        {"Hoppy Hipman","Szkoleniowiec analitykow","Hippo",1},
        {"Pat Hand","Tester","LOOPY",2}
    };
    cout << "Zakon Programistow Dobrej Woli\n";
    cout << "a. lista wg imion";
    cout.width(34);
    cout << "b. lista wg stanowisk\n";
    cout << "c. lista wg pseudonimow";
    cout.width(30);
    cout << "d. lista wg preferencji\n";
    cout << "q. koniec\n";
    cout << "Wybierz jedna z opcji: ";
    char c;
    cin >> c;
    while (c != 'q')
    {
        switch(c)
        {
        case 'a':
            for(int i = 0; i < ilosc; i++)
            {
                cout << tab[i].imie << endl;
            }
            break;
        case 'b':
            for(int i = 0; i < ilosc; i++)
            {
                cout << tab[i].stanowisko << endl;
            }
            break;
        case 'c':
            for(int i = 0; i < ilosc; i++)
            {
                cout << tab[i].pseudozpdw << endl;
            }
            break;
        case 'd':
            for(int i = 0; i < ilosc; i++)
            {
                switch(tab[i].preferencje)
                {
                case 0:
                    cout << tab[i].imie << endl;
                    break;
                case 1:
                    cout << tab[i].stanowisko << endl;
                    break;
                case 2:
                    cout << tab[i].pseudozpdw << endl;
                    break;
                }
            }
            break;
        }
        cout << "Wybierz jedna z opcji: ";
        cin >> c;
    }
    cout << "Do widzenia!";


    return 0;
}










