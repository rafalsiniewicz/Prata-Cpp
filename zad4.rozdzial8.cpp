#include <iostream>
#include <cstring>
using namespace std;
struct stringy
{
    char* str; //wskazuje lancuch
    int ct; //dlugosc lancucha
};
void set(stringy& s, char* c)
{
    int k = 0;
    while( c[k] != '\0')
        k++;
    char* tab = new char[k];
    s.str = tab;
    for( int i = 0; i < k; i ++){
        tab[i] = *(c+i);
    }
    s.ct = k;
}
void show(const stringy s, int n = 1)
{
    int k = 0;
    while( s.str[k] != '\0')
        k++;
    for(int j = 0; j < n; j++)
    {
        for( int i = 0; i < k; i++)
        {
            cout << s.str[i];
        }
        cout << endl;
    }
}
void show(const char* c, int n = 1)
{
    int k = 0;
    while( c[k] != '\0')
        k++;
    for(int j = 0; j < n; j++)
    {
        for( int i = 0; i < k; i++)
        {
            cout << *(c+i);
        }
        cout << endl;
    }
}
int main()
{
    stringy beany;
    char testing[] = "Rzeczywistosc to juz nie to co kiedys ";
    set(beany, testing);
    show(beany);
    show(beany, 2);
    show(testing);
    show(testing, 3);
    testing[0] = 'D';
    testing[1] = 'u';
    show(testing);
    show(testing, 3);
    show("Gotowe!");
    return 0;
}
