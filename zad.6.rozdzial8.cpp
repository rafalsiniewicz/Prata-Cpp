#include<iostream>
#include<cstring>
using namespace std;
template <class T>
T maxn(T tab[],int n)
{
    T maks = tab[0];
    for(int i = 0; i < n; i ++)
    {
        if(tab[i] > maks)
            maks = tab[i];
    }
    return maks;
}

template <>
char* maxn<char*>(char* tab[], int n)
{
    char* temp = tab[0];
    int maks = 0;
    for( int i = 0; i < n; i++){
        if(strlen(tab[i]) > strlen(temp)){
            maks = i;
            temp = tab[i];
        }

    }
    return tab[maks];
}

int main()
{
    int tab1[5] = {1,2,9,2,5};
    double tab2[4] = {1.12,2.243,9.3,2.2};
    char tab3[5][11] = {"mama", "aleksandra", "koles", "jazgot:", "marzenia"};
    cout << maxn(tab1,5) << endl;
    cout << maxn(tab2,4) << endl;
    cout << maxn(tab3,5);
    return 0;
}
