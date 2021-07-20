#include <iostream>
using namespace std;

int getBit(int no, int pos)
{
    return ((no & (1 << pos)) != 0);
}
int setBit(int no, int pos)
{
    return (no | (1 << pos));
}
int clearBit(int no, int pos)
{
    int mask = ~(1 << pos);

    // return (no& ~(1<<pos));
    return (no & mask);
}
int updateBit(int no, int pos,int value)
{
    int mask = ~(1 << pos);
     no = (no & mask);
    // return (no& ~(1<<pos));
    return no | (value << pos);
}
int main()
{

    cout << getBit(5, 2) << endl;
    cout << setBit(5, 1) << endl;
    cout << clearBit(5, 2) << endl;
    cout << updateBit(5, 1,0) << endl;

    return 0;
}