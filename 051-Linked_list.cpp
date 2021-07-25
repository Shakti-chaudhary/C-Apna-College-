#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int val)
    {
        data = val;
        next = NULL;
    }
};

void insertAtHead(node *&head, int val)
{

    node *n = new node(val);
    n->next = head;

    head = n;
}

void insertAtTail(node *&head, int val)
{

    node *n = new node(val);

    if (head == NULL)
    {
        head = n;
        return;
    }
    node *temp = head;

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
    cout << "NULL" << endl;
}

bool search(node *head, int key)
{

    while (head != NULL)
    {
        if (head->data == key)
        {
            return true;
        }
        head = head->next;
    }

    return false;
}

int main()
{
    node *head = NULL;

    insertAtTail(head, 5);
    insertAtTail(head, 2);
    insertAtTail(head, 9);
    insertAtTail(head, 1);
    insertAtHead(head, 33);

    display(head);

    if (search(head, 9))
    {
        cout << "Key found in linked.list " << endl;
    }
    else
    {
        cout << "Key not found in linked.list " << endl;
    }

    return 0;
}