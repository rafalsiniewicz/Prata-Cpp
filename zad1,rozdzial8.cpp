#include<iostream>
using namespace std;
const int L = 40;
int i = 0;
void f(char* c, double n = 0)
{
    if( n != 0)
    {
        for(int k = 0; k < i; k++)
        {
            for(int j = 0; j < L; j++)
                cout << *(c+j);
            cout << endl;
        }

    }
    else
    {
        for(int j = 0; j < L; j++)
            cout <<  *(c+j);
    }
    cout << endl;
    i++;
}
int main()
{
    char napis[L]= "Zdanie do sprawdzenia programu. ";
    f(napis);
    f(napis);
    f(napis);
    f(napis);
    f(napis,3);


    return 0;
}
