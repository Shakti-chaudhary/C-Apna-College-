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
    }
};

void insertAtHead(node *&head, int val)
{
    node *n = new node(val);
    node *temp = head;
    n->next = temp;
    head = n;
}

void insertAtTail(node *&head, int val)
{
    node *n = new node(val);
    node *temp = head;
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
    cout << "NULL" << endl;
}

void deletionAtHead(node *&head)
{
    node *todele = head;
    head = head->next;

    delete todele;
}

void deletion(node *&head, int key)
{

    if (head == NULL)
    {
        return;
    }
    if (head->next == NULL)
    {
        deletionAtHead(head);
        return;
    }

    node *temp = head;

    while (temp->next->data != key)
    {

        temp = temp->next;
    }

    node *todel = temp->next;
    temp->next = temp->next->next;
}

int main()
{
    node *head = NULL;
    insertAtTail(head, 4);
    insertAtTail(head, 38);
    insertAtTail(head, 11);
    insertAtHead(head, 5);

    deletion(head, 38);
    deletionAtHead(head);
    display(head);

    return 0;
}