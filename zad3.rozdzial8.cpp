#include<iostream>
using namespace std;
string bigger(string& s)
{
    for( int i = 0; i < s.length(); i++)
    {
        s[i] = toupper(s[i]);
    }
    return s;
}
int main()
{
    string s;
    /*int i = 0;
    cout << "Podaj lancuch (q, aby skonczyc): ";
    getline(cin,s);
    while(s != "q" && s != "Q")
    {
        if( i == 0)
            cout << bigger(s) << endl;
        i++;
        cout << "Podaj lancuch (q, aby skonczyc): ";
        getline(cin,s);
        if ( s != "Q" && s != "q" )
            cout << bigger(s) << endl;
    }*/
    do
    {
        cout << "Podaj lancuch (q, aby skonczyc): ";
        getline(cin,s);
        if ( s != "Q" && s != "q" )
            cout << bigger(s) << endl;
    }
    while(s != "q" && s != "Q");
    cout << "Do widzenia";
    return 0;
}
