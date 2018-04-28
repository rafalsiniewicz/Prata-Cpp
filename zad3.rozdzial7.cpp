#include<iostream>
using namespace std;
struct pudlo
{
    char producent[40];
    float wysokosc;
    float szerokosc;
    float dlugosc;
    float objetosc;
};
void wyswietlanie(const pudlo p)
{
    for(int i = 0; i < sizeof(p)/sizeof(pudlo); i++)
    {
        cout << "producent: " << p.producent << endl;
        cout << "wysokosc: " << p.wysokosc << endl;
        cout << "szerokosc: " << p.szerokosc << endl;
        cout << "dlugosc: " << p.dlugosc << endl;
        cout << "objetosc: " << p.objetosc << endl;
    }
}
void ustawienie(pudlo* p)
{
    p->objetosc = p->dlugosc * p->szerokosc * p->wysokosc;

}
int main()
{
    pudlo p = {"A",1,2,3};
    ustawienie(&p);
    wyswietlanie(p);

    return 0;
}
