// ========= Stack using two Queue ( Push method costly ) =================

#include <iostream>
#include <queue>
using namespace std;

class stack
{
    int N;
    queue<int> q1;
    queue<int> q2;

public:
    stack()
    {
        N = 0;
    }
    void push(int val)
    {

        q2.push(val);
        N++;
        while (!q1.empty())
        {
            q2.push(q1.front());
            q1.pop();
        }

        queue<int> temp = q1;
        q1 = q2;
        q2 = temp;
    }

    void pop()
    {

        if (q1.empty())
        {
            cout << "Stack is empty " << endl;
            return;
        }
        else
        {
            q1.pop();
            N--;
        }
    }
    int top()
    {

        return q1.front();
    }
    int size()
    {
        return N;
    }
};

int main()
{
    stack q;

    q.push(1);
    q.push(2);
    q.push(3);
    cout << q.top() << endl;

    q.pop();
    cout << q.top() << endl;
    q.pop();
    cout << q.top() << endl;
    q.pop();
    cout << q.top() << endl;
    q.pop();

    cout << q.size() << endl;

    return 0;
}