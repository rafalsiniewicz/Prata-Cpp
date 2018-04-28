#include<iostream>
#include<fstream>
using namespace std;
struct sponsorzy
{
    string nazwisko;
    string imie;
    double kwota;
    bool check();
};
bool sponsorzy::check()
{
    if(kwota >= 10000)
    {
        return true;
    }
    else return false;
}
int main()
{
    ifstream file;
    string filename;
    cout << "Podaj nazwe pliku: ";
    getline(cin, filename);
    file.open(filename);
    while(!file.is_open()){
        cout << "Plik nie zostal poprawnie otworzony\n";
        cout << "Podaj inna nazwe pliku: ";
        getline(cin, filename);
        file.open(filename);
    }
    int s = 0;
    int ilosc_sponsorow;
    file >> ilosc_sponsorow;
    sponsorzy* tab = new sponsorzy[ilosc_sponsorow];
    cout << "Nasi Wspaniali Sponsorzy\n";
    for(int i = 0; i < ilosc_sponsorow; i++)
    {
        file >> tab[i].imie;
        file >> tab[i].nazwisko;
        file >> tab[i].kwota;
        if(tab[i].check())
        {
            cout << tab[i].imie << " " << tab[i].nazwisko << " " << tab[i].kwota<< endl;
            s++;
        }
    }
    if(s == 0)
    {
        cout << "brak" << endl;
    }
    s = 0;
    cout << "Nasi Sponsorzy\n";
    for(int i = 0; i < ilosc_sponsorow; i++)
    {
        if(!tab[i].check())
        {
            cout << tab[i].imie << tab[i].nazwisko << " " << tab[i].kwota << endl;
            s++;
        }
    }
    if(s == 0)
    {
        cout << "brak";
    }
    file.close();
    return 0;
}
