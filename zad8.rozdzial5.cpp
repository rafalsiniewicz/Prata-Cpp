#include<iostream>
#include<string>

using namespace std;
int main()
{
    string slowo;
    int s = 0;
    cout << "Podawaj slowa (kiedy skonczysz, napisz \"gotowe\")\n";
    cin >> slowo;
    while(slowo != "gotowe" ){
        cin >> slowo;
        s++;
    }
    cout << "Podano " << s << " slow";
return 0;
}
