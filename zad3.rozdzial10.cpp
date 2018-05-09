#include<iostream>
#include<cstring>
using namespace std;
const int rozmiar = 3;
const int Len = 40;
class Golf
{
private:
    char fullname[Len];
    int handicap;
public:
    Golf(const char * name, int he);
    Golf();
    void setgolf();
    //void handicap(Golf & g, int he);
    void showgolf() const;
};
Golf:: Golf()
{

}
Golf:: Golf(const char* name, int h)
{
    strcpy(fullname, name);
    this -> handicap = h;
}
void Golf:: setgolf()
{
    char name[Len];
    cout << "Podaj nazwisko: ";
    cin >> name;
    int hc;
    cout << "Podaj handicap: ";
    cin >> hc;
    //strcpy(fullname, name);
    //handicap = hc;
    Golf t = Golf(name,hc);
    *this = t;
}
void Golf:: showgolf() const
{
    cout << "Nazwisko:\t\tHandicap:\n";
    cout << fullname << "\t\t\t" << handicap << endl;
}
int main()
{
    Golf tab[rozmiar];
    cout << "Wprowadz dane do tablicy klas\n";
    for(int i = 0; i < rozmiar; i++)
        tab[i].setgolf();
    for(int i = 0; i < rozmiar; i++)
        tab[i].showgolf();
    return 0;
}
