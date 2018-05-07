#include<iostream>
using namespace std;

class Rachunek
{
    private:
        string nazwisko;
        string numer_rachunku;
        double saldo;
    public:
        Rachunek()
        {
            nazwisko = "";
            numer_rachunku = "";
            saldo = 0;
        }
        Rachunek(const string& _nazwisko, const string& _numer_rachunku, const double& _saldo)
        {
            nazwisko = _nazwisko;
            numer_rachunku = _numer_rachunku;
            saldo = _saldo;
        }
        void Show() const
        {
            cout << "nazwisko: " << nazwisko << endl;
            cout << "numer rachunku: " << numer_rachunku << endl;
            cout << "saldo: " << saldo << endl;
        }
        void Przyjmowanie(const double& kwota)
        {
            saldo += kwota;
        }
        void Wydawanie(const double& kwota)
        {
            saldo -= kwota;
        }

};
int main()
{
    Rachunek r;
    r.Show();
    Rachunek r2("abcde", "1234567", 350.67);
    r2.Show();
    r2.Przyjmowanie(300);
    r2.Show();
    r2.Wydawanie(243.08);
    r2.Show();
    return 0;
}
