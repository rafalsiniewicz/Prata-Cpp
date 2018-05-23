#include<iostream>
using namespace std;

class Move
{
private:
    double x;
    double y;
public:
    Move(double a = 0, double b = 0);
    showmove() const;
    Move add(const Move& m) const;
    reset(double a = 0, double b = 0);
};
Move:: Move(double a, double b)
{
    x = a;
    y = b;
}
Move:: showmove() const
{
    cout << "x: " << x << " y: " << y << endl;
}
Move Move:: add(const Move& m) const
{
    Move new_object(m.x+this->x,m.y+this->y);
    return new_object;
}
Move:: reset(double a, double b)
{
    x = a;
    y = b;
}
int main()
{
    Move object1;
    Move object2(5,10);
    Move object3;
    object1.showmove();
    object2.showmove();
    object3.showmove();
    object3 = object1.add(object2);
    object3.showmove();
    object2.reset();
    object3.reset();
    object1.showmove();
    object2.showmove();
    object3.showmove();
    return 0;
}
