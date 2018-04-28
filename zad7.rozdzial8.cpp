#include<iostream>
template <typename T> void ShowArray(T arr[], int n) ;
template <typename T> void ShowArray(T * arr[], int n) ;
struct debts
{
    char name[50];
    double amount;
};

int main()
{
    using namespace std;
    int things[6] = {13, 31, 103, 301, 310, 130} ;
    struct debts mr_E[3] = { {"Ima Wolfe", 2400.0} , { "Ura Foxe", 1300.0} , { "Iby Stout", 1800.0}};
    double * pd[3];
    for (int i = 0; i < 3; i++)
        pd[i] = &mr_E[i].amount;
    cout << "Wyliczanie rzeczy pana E.:\n";
    ShowArray(things, 6);
    cout << "Wyliczanie dlugow pana E:\n";
    ShowArray(pd, 3) ;
    return 0;
}
template <typename T>
void ShowArray (T arr[], int n)
{
    using namespace std;
    int s = 0;
    int i = 0;
    cout << "Suma elementow A\n";
    for (i ; i < n; i++)
        s = s + arr[i];
    cout << s << endl;
    cout << "Laczna liczba przedmiotow: " << i << endl;
}
template <typename T>
void ShowArray (T * arr[], int n)
{
    using namespace std;
    double s = 0;
    int i = 0;
    cout << "Suma elementow B\n";
    for (i; i < n; i++)
        s = s + (*arr[i]);
    cout << s << endl;
    cout << "Laczna liczba przedmiotow: " << i << endl;
}
