#include<iostream>
#include<fstream>
#include<cstdlib>
using namespace std;

int main()
{
    int s = 0;
    ifstream plik;
    cout << "Podaj nazwe pliku do otworzenia\n";
    string filename;
    getline(cin,filename);
    plik.open(filename);
    char c;
    if(!plik.is_open()){
        cout << "Otwarcie pliku " << filename << " nie powiodlo sie" << endl;
        exit(EXIT_FAILURE);
    }
    do
    {
        plik >> c;
        s++;
    }
    while(plik.good());
    plik.close();
    cout << "Liczba znakow: " << s;
    return 0;
}
