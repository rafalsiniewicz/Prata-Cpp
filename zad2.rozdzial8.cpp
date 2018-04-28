#include<iostream>
using namespace std;
const int SLEN = 30;
struct Batonik
{
    char marka[30];
    double waga;
    int kalorie;
};
void ustaw(Batonik& b, char* m = "Millenium Munch", double w = 2.85, int k = 350)
{
    for(int i = 0; i < SLEN; i++){
            b.marka[i] = *(m+i);
    }
    b.waga = w;
    b.kalorie = k;
}
void wyswietl(const Batonik& b){
    cout << "\t\t\t\tmarka: " << b.marka << endl;
    cout << "\t\t\t\twaga: " << b.waga << endl;
    cout << "\t\t\t\tkalorie: " << b.kalorie << endl;
}
int main()
{
    Batonik batonik;
    ustaw(batonik);
    cout << "\t\t\t\t\t\t     Batonik1:\n\n";
    wyswietl(batonik);
    cout << "\n\t\t\t\t\tPodaj dane batonika\n";
    cout << "\t\t\t\t\tmarka: ";
    cin >> batonik.marka;
    cout << "\t\t\t\t\twaga: ";
    cin >> batonik.waga;
    cout << "\t\t\t\t\tkalorie: ";
    cin >> batonik.kalorie;
    cout << endl;
    ustaw(batonik,batonik.marka,batonik.waga,batonik.kalorie);
    cout << "\t\t\t\t\t\t     Batonik2:\n\n";
    wyswietl(batonik);

    return 0;
}
