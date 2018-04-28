#include<iostream>
using namespace std;
int main()
{
    cout << "----MENU----\n";
    cout.width( 15 );
    cout << "r)roslinozerca\t   ";
    cout << "p)pianista\n";
    cout << "d)drzewo\t   ";
    cout << "g)gra\n";
    cout << "Prosze podac litere r,p,d lub g: ";
    char c;
    cin.get(c);
    while(c != 'r' && c!= 'p' && c!= 'd' && c!= 'g')
    {
        cout << "Prosze podac litere r,p,d lub g: ";
        cin.get(c);
        cin.ignore();
    }
    switch(c)
    {
    case 'r':
        cout << "mis koala jest roslinozerca";
        break;
    case 'p':
        cout << "Chopin byl pianista";
        break;
    case 'd':
        cout << "Klon jest drzewem";
        break;
    case 'g':
        cout << "Call of Duty to gra komputerowa";
        break;
    }

    return 0;
}
