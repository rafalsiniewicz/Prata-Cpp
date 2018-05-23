#ifndef _LIST_H
#define _LIST_H
struct Data
{
    int id;
    Data* next;
};
class List
{
private:
    Data* first;
    const int MAX = 5;
public:
    List();
    add(int _id);
    bool isempty() const;
    bool isfull() const;
    show() const;
    visit(void (*pf)(Data& ));
};
#endif // _LIST_H
