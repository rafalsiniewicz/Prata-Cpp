#include<iostream>
#include<cctype>
using namespace std;
int licznik = 0;
double srednia(double tab[], int i)
{
    double s = 0;
    for(int k = 0; k < i; k++)
    {
        s += tab[k];
    }
    return s/i;
}
double* wieksze(double s, double tab[]){
    double* tab2 = new double[10];
    for(int i = 0, j = 0; i < 10; i ++){
        if(tab[i] > s){
            tab2[j] = tab[i];
            j++;
            licznik++;
        }
    }
    return tab2;
}
int main()
{
    double* tab = new double[10];
    int i = 1;
    cin >> tab[0];
    if(tab[0] == 0)
    {
        cout << "Brak sredniej" << endl;
        cout << "koniec" << endl;
        return 0;
    }
    else
    {
        while(cin >> tab[i] && i < 10)
        {
            i++;
        }
        cout << "srednia " << srednia(tab,i) << endl;
    }
    double* result = wieksze(srednia(tab,i),tab);
    for(int j = 0; j < licznik; j++){
        cout << result[j] << endl;
    }
    delete [] tab;
    return 0;
}
