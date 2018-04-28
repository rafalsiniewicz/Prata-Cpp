#include<iostream>
using namespace std;
int silnia(int n){
    if( n == 0 || n == 1){
        return 1;
    }
    else return n*silnia(n-1);
}
int main()
{
    int n;
    cout << "Podaj liczbe, ktorej silnia ma byc obliczona (q konczy program): ";
    while(cin >> n){
        cout << n << "! to " << silnia(n) << endl;
        cout << "Podaj liczbe, ktorej silnia ma byc obliczona (q konczy program): ";
    }
    cout << "koniec";
return 0;
}

