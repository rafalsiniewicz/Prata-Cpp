#include<iostream>
using namespace std;
int fill_array(double tab[], int rozmiar)
{
    int i = 0;
    while(cin >> tab[i] && i < rozmiar-1)
    {
        i++;
    }
    if(i == rozmiar-1)
    {
        return i+1;
    }
    else return i;
}
void show_array(const double tab[],const int rozmiar)
{
    cout << "Oto zawartosc tablicy:\n";
    for(int i = 0; i < rozmiar; i++)
    {
        cout << tab[i] << " " << endl;
    }

}
void reverse_array(double tab[],const int rozmiar)
{
    double tab2[rozmiar];
    for(int i = 0; i < rozmiar; i++)
    {
        tab2[i] = tab[i];
    }
    for(int i = 0; i < rozmiar; i++)
    {
        tab[i] = tab2[rozmiar-i-1];
    }
}
int main()
{
    int n;
    cout << "Podaj rozmiar tablicy ";
    cin >> n;
    double tab[n];
    cout << "Podaj wartosci do tablicy o rozmiarze " << n << ", (przerwanie, gdy dana nie jest liczba) " << endl;
    int rozmiar = fill_array(tab,n);
    show_array(tab,rozmiar);
    cout << "Odwrocenie tablicy " << endl;
    reverse_array(tab,rozmiar);
    show_array(tab,rozmiar);


    return 0;
}
