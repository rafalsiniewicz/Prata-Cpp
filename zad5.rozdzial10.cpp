#include<iostream>
#include<cstring>
using namespace std;
struct customer
{
    char fullname[35];
    double payment;
};
double general = 0;
typedef customer Item;
class Stack
{
private:
    enum {MAX = 10};
    customer customers[MAX];
    int top;
public:
    Stack();
    bool isempty() const;
    bool isfull() const;
    bool push(const Item& item);
    bool pop(Item& item);
};
Stack:: Stack()
{
    top = 0;
}
bool Stack:: isempty() const
{
    return top == 0;
}
bool Stack:: isfull() const
{
    return top == MAX;
}
bool Stack:: push(const Item& item)
{
    if(top < MAX)
    {
        customers[top++] = item;
        return true;
    }
    else return false;
}
bool Stack:: pop(Item& item)
{
    if(top > 0)
    {
        item = customers[--top];
        general += item.payment;
        cout << general << endl;
        return true;
    }
    else return false;
}
int main()
{
    Stack stos;
    Item c;
    int i = 0;
    while( i++ < 3)
    {
        char n[35];
        double p;
        cout << "Podaj nazwe: ";
        cin >> n;
        strcpy(c.fullname,n);
        cout << "Podaj platnosc: ";
        cin >> p;
        c.payment = p;
        stos.push(c);
    }
    i = 0;
    while(i++ < 3)
        stos.pop(c);
    return 0;
}
