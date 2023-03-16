#include <iostream>
using namespace std;

// simple inheritance

class A
{
public:
    int a = 5;
};

class B : public A
{
public:
    void accessA()
    {
        cout << a << endl;
    }
    int b = 6;
};

// MultiLevel inheritance

class C : public B
{
public:
    void acessB()
    {
        cout << b << endl;
    }
};

// Multiple inheritance

class p1
{
public:
    int p1 = 6;
};
class p2
{
public:
    int p2 = 8;
};
class D : public p1, public p2
{
public:
    void acessall()
    {
        cout << p1 << " " << p2 << endl;
    }
};

// Hierarchical inheritance

class H1 : public A
{
public:
    void h1()
    {
        cout << "h1";
    }
};

class H2 : public A
{
public:
    void h2()
    {
        cout << "h2";
    }
};

int main()
{
    B ob;
    ob.accessA();
    C oc;
    oc.acessB();
    D od;
    od.acessall();
    H1 oh;
    oh.h1();
    H2 ohh;
    ohh.h2();
}
