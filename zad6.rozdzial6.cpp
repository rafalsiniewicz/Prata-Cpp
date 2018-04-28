#include<iostream>
using namespace std;
struct sponsorzy
{
    string nazwisko;
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
    cout << "Podaj liczbe wplacajacych\n";
    int n;
    int s = 0;
    cin >> n;
    sponsorzy* tab = new sponsorzy[n];
    for( int i = 0; i < n; i++)
    {
        cout << "Podaj nazwisko: ";
        cin >> tab[i].nazwisko;
        cout << "Podaj kwote: ";
        cin >> tab[i].kwota;
    }
    cout << endl;
    cout << "Nasi Wspaniali Sponsorzy\n";
    for(int i = 0; i < n; i++)
    {
        if(tab[i].check())
        {
            cout << tab[i].nazwisko << " " << tab[i].kwota << endl;
            s++;
        }
    }
    if(s == 0)
    {
        cout << "brak" << endl;
    }
    s = 0;
    cout << "Nasi Sponsorzy\n";
    for(int i = 0; i < n; i++)
    {
        if(!tab[i].check())
        {
            cout << tab[i].nazwisko << " " << tab[i].kwota << endl;
            s++;
        }
    }
    if(s == 0)
    {
        cout << "brak";
    }
    delete [] tab;
    return 0;
}
