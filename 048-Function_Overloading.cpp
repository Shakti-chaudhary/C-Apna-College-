#include <iostream>
using namespace std;

class A
{
public:
    void fun()
    {
        cout << "Function without parameter " << endl;
    }
    void fun(int a)
    {
        cout << "Function with int parameter ==>> " << a << endl;
    }
    void fun(double d)
    {
        cout << "Function with double parameter ==>> " << d << endl;
    }
};

int main()
{

    A obj;
    obj.fun();
    obj.fun(5);
    obj.fun(1.5);

    return 0;
}