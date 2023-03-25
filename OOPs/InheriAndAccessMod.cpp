#include<iostream>
using namespace std;

class A{
    public:
    int x;
    protected:
    int y;
    private:
    int z;
};

class B: public A{
    //x is inherited and stays public
    //y is inherited and stays private
    //z is not accessable

};

class C: protected A{
    //x is inherited and becomes protected
    //y is inherited and stays protected
    //z is not accessable.
};

class D: private A{
    //x is inherited and becomes private
    //y is inherited and becomes private
    //z is not accessabe
};

int main(){
    return 0;
}