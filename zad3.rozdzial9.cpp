#include<iostream>
#include<cstring>
using namespace std;
struct chaff
{
    char dross[20];
    int slag;
};
int main()
{
    chaff* tab = new chaff[2];
    char str1[] = "abcde";
    char str2[] = "ABCD";
    strcpy(tab[0].dross,str1);
    strcpy(tab[1].dross,str2);
    tab[0].slag = 1;
    tab[1].slag = 2;
    for(int i = 0; i < 2; i++)
        cout << tab[i].dross << " " << tab[i].slag << endl;
    return 0;
}
