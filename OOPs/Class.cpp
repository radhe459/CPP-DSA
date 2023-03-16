#include <iostream>
using namespace std;

class Rect
{
    int length;
    int breadth;

public:
    void setterl(int l)
    {
        length = l;
    }
    void setterb(int b)
    {
        breadth = b;
    }
    int getterl()
    {
        return length;
    }
    int getterb()
    {
        return breadth;
    }
    int area()
    {
        return length * breadth;
    }
};

int main()
{
    Rect rect;
    rect.setterl(5);
    rect.setterb(2);
    cout << "length of rectangle: " << rect.getterl() << endl;
    cout << "breadth of rectangle: " << rect.getterb() << endl;
    cout << "area of rectangle: " << rect.area();
}