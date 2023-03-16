#include <iostream>

using namespace std;

class parent
{
private:
    int side;

protected:
    int radius;

public:
    int length, breadth;
    void setSide(int x)
    {
        side = x;
    }
    int retSide()
    {
        return side;
    }
};

class child : public parent
{
public:
    int recArea()
    {
        return length * breadth;
    }

    int sqArea()
    {
        return retSide() * retSide(); // side directly cannot be used in chile class since private.
    }

    void setradius(int rad)
    {
        radius = rad; // radius can be used in child class since protected
    }
    int getradius()
    {
        return radius;
    }
    int cirArea()
    {
        return (3.14) * getradius() * getradius();
    }
};

int main()
{
    child ch;
    ch.length = 10;
    ch.breadth = 20;
    cout << ch.recArea() << endl;
    ch.setSide(50);
    ch.setradius(10);
    cout << ch.sqArea() << endl;
    cout << ch.cirArea() << endl;
}