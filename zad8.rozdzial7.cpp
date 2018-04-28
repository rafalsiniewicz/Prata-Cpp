#include <iostream>
using namespace std;
const int SLEN = 30;
struct student
{
    char fullname [SLEN] ;
    char hobby[SLEN] ;
    int ooplevel;
} ;
int getinfo(student pa[], int n);
void displayl (student st) ;
void display2 (const student* ps) ;
void display3 (const student pa[], int n);
int main ()
{
    cout << "Podaj wielkosc grupy: ";
    int class_size;
    cin >> class_size;
    while (cin.get () != '\n')
        continue;
    student * ptr_stu = new student[class_size] ;
    int entered = getinfo(ptr_stu, class_size) ;
    for (int i = 0; i < entered; i++)
    {
        displayl (ptr_stu[i]);
        display2 (&ptr_stu[i]);
    }
    display3 (ptr_stu, entered) ;
    delete [] ptr_stu;
    cout << "Gotowe\n";
    return 0;
}
int getinfo(student pa[], int n){
    int i = 0;

    while(i < n)
    {
        cout << "Nazwisko: ";
        if(i > 0)
            cin.get();
        cin.getline(pa[i].fullname,SLEN);
        if(pa[i].fullname[0] == 0 || !isalpha(pa[i].fullname[0]))
            return i;
        cout << "Hobby: ";
        if(i > 0)
            cin.get();
        cin.getline(pa[i].hobby,SLEN);
        if(!isalpha(pa[i].hobby[0]))
            return i;
        cout << "Rok: ";
        cin >> pa[i].ooplevel;
        i++;
    }
return i;
}
void displayl (student st){
    cout << "Nazwisko: " << st.fullname << endl;
    cout << "Hobby: " << st.hobby << endl;
    cout << "Rok: " << st.ooplevel << endl;
}
void display2 (const student* ps){
    cout << "Nazwisko: " << ps->fullname << endl;
    cout << "Hobby: " << ps->hobby << endl;
    cout << "Rok: " << ps->ooplevel << endl;
}
void display3 (const student pa[], int n){
    for(int i = 0; i < n; i ++){
        cout << "Nazwisko: " << pa[i].fullname << endl;
        cout << "Hobby: " << pa[i].hobby << endl;
        cout << "Rok: " << pa[i].ooplevel << endl;
    }
}
