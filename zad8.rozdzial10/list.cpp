#include"list.h"
#include<iostream>

List:: List()
{
    std::cout << "Tworzenie pustej listy " << std::endl;
    first = 0;
}
List:: add(int _id)
{
    int counter = 0;
    Data* new_on_list = new Data;
    new_on_list -> id = _id;
    if( first == 0)
    {
        first = new_on_list;
        new_on_list -> next = 0;
    }
    else
    {
        Data* temp = first;
        while(temp -> next)
        {
            temp = temp -> next;
            counter++;
        }
        if(counter < MAX)
        {
            temp -> next = new_on_list;
            new_on_list -> next = 0;
        }
    }
}
bool List:: isempty() const
{
    if( first == 0)
        return true;
    else return false;
}
bool List:: isfull() const
{
    int counter = 0;
    Data* temp = first;
    while(temp)
    {
        temp = temp -> next;
        if(counter++ == MAX-1)
            return true;
    }
    return false;
}
List:: show() const
{
    Data* temp = first;
    while(temp -> next)
    {
        std:: cout << temp->id << " ";
        temp = temp -> next;
    }
    std::cout << std::endl;
}
List:: visit(void (*pf)(Data& ))
{
    Data* temp = first;
    while(temp -> next)
    {
        pf(*temp);
        temp = temp -> next;
    }
}
void substract(Data& d)
{
    d.id = d.id - 1;
}
int main()
{
    List object1;
    std::cout << object1.isempty();
    std::cout << object1.isfull();
    std::cout << std::endl;
    object1.add(1);
    object1.add(2);
    object1.add(3);
    object1.add(4);
    object1.add(5);
    object1.add(6);
    object1.show();
    object1.visit(substract);
    object1.show();
    std::cout << object1.isempty();
    std::cout << object1.isfull();
    return 0;
}
