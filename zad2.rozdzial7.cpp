#include<iostream>
#include<cstdlib>
using namespace std;
int s = 0;
double* wprowadzanie(){
    double* tab = new double[10];
    while(s < 10 && cin >> tab[s]){
        s++;
    }
    return tab;
}
void wyswietlanie(double tab[], int s){
    for(int i = 0; i < s; i ++){
        cout << tab[i] << " ";
    }
}
double sredni(double tab[],int s){
    double suma = 0;
    for(int i = 0; i < s; i++){
        suma += tab[i];
    }
    return suma/s;
}
int main()
{

    cout << "Podaj do 10 wynikow golfowych (q umozliwia zakonczenie wprowadzenia):\n";
    double* tab = wprowadzanie();
    wyswietlanie(tab,s);
    cout << endl;
    cout << "Wynik sredni: " << sredni(tab,s);
    return 0;
}
