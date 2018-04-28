#include<iostream>
using namespace std;
int check(char zdanie)
{
    if(!isalpha(zdanie))
    {
        return 1;
    }
    else if(int(zdanie) == 97 || int(zdanie) == 101 || int(zdanie) == 105 || int(zdanie) == 121 || int(zdanie) == 111 || int(zdanie) == 117)
    {
        return 2;
    }
    else return 3;
}
bool czyq(string zdanie)
{
    if(zdanie[0] == 'q')
    {
        return true;
    }
    for(int i = 1; i < zdanie.length(); i++)
    {
        if(isspace(zdanie[i]) && (isspace(zdanie[i+2]) || zdanie[i+2] == '\0'))
        {
            if(zdanie[i+1] == 'q')
            {
                return true;
            }
        }
    }
    return false;
}
void exe(string zdanie, int &spolgloski, int &samogloski, int &zadne)
{
    if(zdanie[0] != 'q')
    {
        if(check(zdanie[0]) == 1)
        {
            zadne++;
        }
        else if(check(zdanie[0]) == 2)
        {
            samogloski++;
        }
        else if(check(zdanie[0]) == 3)
        {
            spolgloski++;
        }
    }
    if(zdanie[1]!='\0')
    {
        for(int i = 1; i < zdanie.length()-2; i++)
        {
            if(isspace(zdanie[i]))
            {
                if(check(zdanie[i+1]) == 1)
                {
                    zadne++;
                }
                else if(check(zdanie[i+1]) == 2)
                {
                    samogloski++;
                }
                else if(check(zdanie[i+1]) == 3)
                {
                    spolgloski++;
                }
            }
        }
    }
}
int main()
{
    string zdanie;
    int spolgloski = 0;
    int samogloski = 0;
    int zadne = 0;
    int odjecie = 0;
    cout << "Podawaj slowa (pojedyncze q konczy):\n";
    getline(cin,zdanie);
    while(!czyq(zdanie))
    {
        exe(zdanie,spolgloski,samogloski,zadne);
        getline(cin,zdanie);
    }
    exe(zdanie,spolgloski,samogloski,zadne);

    cout << spolgloski << " slow zaczyna sie od spolglosek\n";
    cout << samogloski << " slow zaczyna sie od samoglosek\n";
    cout << zadne << " slow nie zalicza sie do zadnej z tych kategorii";

    return 0;
}
