#include<iostream>
using namespace std;
const int rozmiar = 5;
template <class T>
T max5(T a[])
{
    T maks = a[0];
    for(int i = 1; i < rozmiar; i++)
    {
        if(a[i] > maks)
            maks = a[i];
    }
    return maks;
}
int main()
{
    int tab1[rozmiar] = {1,2,3,4,5};
    double tab2[rozmiar] = {2.3,5.3,1.7,32.2,53.2};
    cout << max5(tab1) << endl;
    cout << max5(tab2) << endl;

    return 0;
}
