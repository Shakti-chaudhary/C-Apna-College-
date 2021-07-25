#include <iostream>
using namespace std;

class complex
{
    int real;
    int image;

public:
    complex()
    {
    }
    complex(int r, int i)
    {
        real = r, image = i;
    }

    complex operator+(complex const &a)
    {
        complex ans;
        ans.real = real + a.real;
        ans.image = image + a.image;

        return ans;
    }
    void getData()
    {
        cout << real << " " << image << endl;
    }
};

int main()
{

    complex A(12, 15);
    complex B(6, 12);
    complex C;
    C = A + B;
    C.getData();

    return 0;
}