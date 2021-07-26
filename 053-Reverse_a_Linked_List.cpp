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

void insertionAtHead(node *&head, int val)
{
    node *temp = head;
    node *n = new node(val);

    n->next = temp;
    head = n;
}

void insertionAtTail(node *&head, int val)
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

node *reverseList(node *&head)
{
    node *previous = NULL;
    node *current = head;
    node *nextptr;

    while (current != NULL)
    {
        nextptr = current->next;
        current->next = previous;

        previous = current;
        current = nextptr;
    }

    return previous;
}

// ==== Reversing LinkedList with recursive function ==============

node *reverseListRecursive(node *&head)
{

    if (head == NULL || head->next == NULL)
    {

        return head;
    }

    node *newhead = reverseListRecursive(head->next);
    head->next->next = head;
    head->next = NULL;
    return newhead;
}

int main()
{
    node *head = NULL;
    insertionAtHead(head, 8);
    insertionAtTail(head, 13);
    insertionAtHead(head, 55);
    insertionAtHead(head, 32);
    insertionAtTail(head, 11);
    display(head);

    // node* h=reverseList(head);
    // display(h);

    node *r = reverseListRecursive(head);
    display(r);

    return 0;
}