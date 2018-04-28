#include<iostream>
#include<cstring>

using namespace std;
int main(){
    char* tab = new char[20];
    int s = 0;
    cout << "Podawaj slowa (kiedy skonczysz, napisz \"gotowe\")\n";
    cin >> tab;
    while(strcmp(tab,"gotowe") != 0){
        cin >> tab;
        s++;
    }
    cout << "Podano " << s << " slow";
return 0;
}

