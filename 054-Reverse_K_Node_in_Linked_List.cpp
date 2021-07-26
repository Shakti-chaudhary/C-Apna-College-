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

void insertATHead(node *&head, int val)
{

    node *temp = head;
    node *n = new node(val);

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

node *reverseKnode(node * &head, int k)
{

    node *prev = NULL;
    node *current = head;
    node *Next;

    int count = 0;

    while (current != NULL && count < k)
    {
        Next = current->next;
        current->next = prev;

        prev = current;
        current = Next;
        count++;
    }

    if (Next != NULL)
    {
        head->next = reverseKnode(Next, k);
    }

    return prev;
}

int main()
{

    node *head = NULL;
    insertAtTail(head, 54);
    insertAtTail(head, 11);
    insertATHead(head, 12);
    insertATHead(head, 22);
    insertAtTail(head, 4);
    insertAtTail(head, 43);
    display(head);

    node *R = reverseKnode(head, 3);
    display(R);

    return 0;
}