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
    cout << "NULL" << endl;
}

int lenght(node *head)
{
    int l = 0;
    node *temp = head;

    while (temp != NULL)
    {
        l++;
        temp = temp->next;
    }
    return l;
}
node *appendKnode(node *&head, int pos)
{
    node *newHead;
    node *newTail;
    node *tail = head;
    int count = 1;

    int k = lenght(head);
    pos = pos % k;

    while (tail->next != NULL)
    {
        if (count == k - pos)
        {
            newTail = tail;
        }
        if (count == k - pos + 1)
        {
            newHead = tail;
        }

        tail = tail->next;
        count++;
    }

    newTail->next=NULL;
    tail->next=head;
    return newHead;
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

    display(head);
    node *ptr = appendKnode(head, 3);
    display(ptr);
    return 0;
}