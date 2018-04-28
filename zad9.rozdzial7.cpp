#include<iostream>
using namespace std;
double add(double x, double y)
{
    return x + y;
}
double substract(double x, double y)
{
    return x - y;
}
double product(double x, double y)
{
    return x * y;
}
double calculate(double a, double b, double (*f)(double, double))
{
    return (*f)(a,b);

}

int main()
{
    double x,y;
    double (*pf[3])(double,double) = {add,substract,product};
    cout << "Podaj dwie liczby (q konczy program): ";
    while(cin >> x >> y)
    {
        cout << x << " + " << y << " = " << calculate(x,y,pf[0]) << endl;
        cout << x << " - " << y << " = " << calculate(x,y,pf[1]) << endl;
        cout << x << " * " << y << " = " << calculate(x,y,pf[2]) << endl;
        cout << "Podaj dwie liczby (q konczy program): ";
    }
    cout << "Koniec";
    return 0;
}
