#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next = NULL;
    node(int val)
    {
        data = val;
        next = NULL;
    }
};

void insertAtHead(node *&head, int val)
{
    node *n = new node(val);

    if (head == NULL)
    {
        n->next = n;
        head = n;
        return;
    }

    node *temp = head;

    while (temp->next != head)
    {
        temp = temp->next;
    }

    temp->next = n;
    n->next = head;
    head = n;
}

void insertAtTail(node *&head, int val)
{

    node *temp = head;
    node *n = new node(val);

    if (head == NULL)
    {
        insertAtHead(head, val);
        return;
    }

    while (temp->next != head)
    {
        temp = temp->next;
    }

    temp->next = n;
    n->next = head;
}

void display(node *head)
{
    node *temp = head;
    do
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    } while (temp != head);
    cout << "NULL" << endl;
}

void deleteAtHead(node *&head)
{
    node *temp = head;
    node *todelete = head;

    while (temp->next != head)
    {

        temp = temp->next;
    }
    head = head->next;
    temp->next = head;
    delete todelete;
}

void toDelete(node *&head, int pos)
{
    if (pos == 1)
    {
        deleteAtHead(head);
        return;
    }

    node *temp = head;
    node *todelete;
    int count = 1;

    while (count != pos - 1)
    {
        temp = temp->next;
        count++;
    }
    todelete = temp->next;
    temp->next = temp->next->next;

    delete todelete;
}

int main()
{
    node *head = NULL;

    insertAtTail(head, 22);
    insertAtTail(head, 32);
    insertAtTail(head, 42);
    insertAtTail(head, 12);

    display(head);

    insertAtHead(head, 11);
    display(head);

    toDelete(head, 7);
    // deleteAtHead(head);
    display(head);

    return 0;
}