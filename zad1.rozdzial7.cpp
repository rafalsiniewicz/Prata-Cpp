#include<iostream>
using namespace std;

double harmoniczna(double a, double b){
    return 2*a*b/(a+b);

}
int main()
{
    double a,b;
    cout << "Podaj liczby (0 konczy)\n";
    cin >> a >> b;
    while(a!=0 && b!=0)
    {
        cout << "Srednia harmoniczna liczb: " << harmoniczna(a,b) << endl;
        cout << "Podaj liczby (0 konczy)\n";
        cin >> a >> b;

    }
    cout << "koniec";
    return 0;
}
