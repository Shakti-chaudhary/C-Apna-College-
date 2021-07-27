// Put even position nodes after odd  position nodes =======

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

void position(node *&head)
{
    node *Odd = head;
    node *Even = head->next;
    node *evenStart = Even;

    while (Odd->next != NULL && Even->next != NULL)
    {

        Odd->next = Even->next;
        Odd=Odd->next;
        Even->next = Odd->next;
        Even=Even->next;
    }
    
    Odd->next = evenStart;
    // if (Odd->next!=NULL)
    // {
    //     Even->next=NULL;
    // }
    
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
    insertAtTail(head, 7);

    display(head);

    position(head);
    display(head);

    return 0;
}
