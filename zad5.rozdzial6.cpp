#include<iostream>
#include<string>
#include<sstream>
using namespace std;
double podatek(int n)
{

    if(n < 5000){
        return 0;
    }
    else if(n < 15000){
        return 0.1*(n-5000);
    }
    else if(n < 35000){
        return 1000 + 0.15*(n-10000);
    }
    else if(n > 35000){
        return 4000 + 0.2*(n-35000);
    }

}
bool isnum( string t ) {
    for( int a = 0; a < t.length(); a++ ) {
        if( t[ a ] > '0' + 9 || t[ a ] < '0' ) return false;

    }
    return true;
}
int main()
{
    string twarp;
    cout << "Podaj ilosc zarabianych twarpow\n";
    cin >> twarp;
    while(twarp >= "0" && isnum(twarp))
    {
        int i;
    	istringstream iss(twarp);
    	iss >> i;
        cout << "Podatek wynosi: " << podatek(i) << endl;
        cout << "Podaj ilosc zarabianych twarpow\n";
        cin >> twarp;
    }
    cout << "Niepoprawna wartosc- koniec";
    return 0;
}
