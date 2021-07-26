#include <iostream>
// == Floyd's Algorithm Or Hare and Tortoise Algorithm ===========
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int val)
    {
        data = val;
    }
};

void insertAtHead(node *&head, int val)
{

    node *temp = head;
    node *n = new node(val);

    n->next = temp;
    head = n;
}

void insertAtTail(node *&head, int val)
{

    node *temp = head;
    node *n = new node(val);

    if (head == NULL)
    {
        head = n;
        return;
    }

    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = n;
}

void display(node *head)
{

    node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "Null" << endl;
}

void makeCycle(node *&head, int pos)
{

    node *temp = head;
    int count = 1;
    node *ptr;

    while (temp->next != NULL)
    {
        if (count == pos)
        {
            ptr = temp;
        }

        count++;
        temp = temp->next;
    }

    temp->next = ptr;
}

bool detectCycle(node *head)
{

    node *slow = head;
    node *fast = head;

    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (fast == slow)
        {
            return true;
        }
    }

    return false;
}

void removeCycle(node *&head)
{

    node *slow = head;
    node *fast = head;

    do
    {
        slow = slow->next;
        fast = fast->next->next;
    } while (fast != slow);
    fast = head;

    while (fast->next != slow->next)
    {
        slow = slow->next;
        fast = fast->next;
    }

    slow->next = NULL;
}

int main()
{
    node *head = NULL;

    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    insertAtTail(head, 5);
    insertAtTail(head, 6);

    makeCycle(head, 3);
    cout << detectCycle(head) << endl;

    removeCycle(head);
    cout << detectCycle(head) << endl;

    display(head);

    return 0;
}