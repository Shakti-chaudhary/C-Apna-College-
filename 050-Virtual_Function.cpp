#include <iostream>
using namespace std;

class A
{
public:
    virtual void print()
    {
        cout << "This is a base class print function " << endl;
    }
    void display()
    {
        cout << "This is a base class display function " << endl;
    }
};
class B : public A
{
public:
    void print()
    {
        cout << "This is a derived class print function " << endl;
    }
    void display()
    {
        cout << "This is a derived class display function " << endl;
    }
};

int main()
{
    A *ptr;
    B obj;

    ptr = &obj;
    ptr->print();
    ptr->display();

    return 0;
}