#include <iostream>
using namespace std;

class Student
{
    int roll;
    string name;
    int i = 0;

public:
    void setrol()
    {
        roll = ++i;
    }
    void setname(string name)
    {
        this->name = name;
    }
    int getroll()
    {
        return roll;
    }
    string getname()
    {
        return name;
    }
};

int main()
{
    Student s1, s2;
    s1.setrol();
    string name;
    cin >> name;
    s1.setname(name);
    s2.setrol();
    cin >> name;
    s2.setname(name);
    cout << "student " << s1.getname() << " roll no is : " << s1.getroll() << endl;
    cout << "student " << s2.getname() << " roll no is : " << s2.getroll() << endl;
}