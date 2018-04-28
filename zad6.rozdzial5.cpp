#include<iostream>
#include<string>
using namespace std;
struct car
{
    string marka;
    int rok;
};

int main()
{
    int n;
    cout << "Ile samochodow chcesz skatalogowac? ";
    cin >> n;
    car* tab = new car[n];
    for(int i = 0; i < n; i++)
    {
        cout << "Samochod #" << i << ":\n";
        cout << "Prosze podac marke: ";
        cin.ignore();
        getline(cin,tab[i].marka);
        cout << "Rok produkcji: ";
        cin >> tab[i].rok;
    }
    for(int i = 0; i < n; i++)
    {
        cout << tab[i].rok << " " << tab[i].marka << endl;
    }
    delete [] tab;
    return 0;
}
