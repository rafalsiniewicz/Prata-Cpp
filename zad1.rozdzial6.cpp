#include<iostream>
#include<cctype>
#include<vector>
using namespace std;

int main()
{
    cout << "Podaj dane (@ konczy program):\n";
    vector<char> vec;
    char c;
    cin >> c;
    vec.push_back(c);
    while(c != '@')
    {
        cin >> c;
        vec.push_back(c);
    }
    cout << endl;
    for(int i = 0; i < vec.size(); i ++){
        if(int(vec[i])< 48 || int(vec[i])> 58)
        {
            if(int(vec[i]) > 64 && int(vec[i]) < 91){
                cout << char(tolower(vec[i])) << endl;
            }
            if(int(vec[i]) > 96 && int(vec[i]) < 123){
                cout << char(toupper(vec[i])) << endl;
            }
        }
    }
    return 0;
}
