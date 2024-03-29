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

node *merging(node *&head1, node *&head2)
{

    node *ptr1 = head1;
    node *ptr2 = head2;
    node *dummynode = new node(0);
    node *ptr3 = dummynode;

    while (ptr1 != NULL && ptr2 != NULL)
    {
        if (ptr1->data < ptr2->data)
        {
            ptr3->next = ptr1;
            ptr1 = ptr1->next;
        }
        else
        {
            ptr3->next = ptr2;
            ptr2 = ptr2->next;
        }

        ptr3 = ptr3->next;
    }

    while (ptr1 != NULL)
    {
        ptr3->next = ptr1;
        ptr3 = ptr3->next;
        ptr1 = ptr1->next;
    }

    while (ptr2 != NULL)
    {
        ptr3->next = ptr2;
        ptr3 = ptr3->next;
        ptr2 = ptr2->next;
    }

    return dummynode->next;
}

node *mergeRecurcive(node *&head1, node *&head2)
{

    if (head1 == NULL)
    {
        return head2;
    }
    if (head2 == NULL)
    {
        return head1;
    }

    node *result;

    if (head1->data < head2->data)
    {
        result = head1;
        result->next = mergeRecurcive(head1->next, head2);
    }
    else
    {
        result = head2;
        result->next = mergeRecurcive(head1, head2->next);
    }
    return result;
}

int main()
{
    node *head1 = NULL;
    node *head2 = NULL;
    node *head3 = NULL;

    insertAtTail(head1, 1);
    insertAtTail(head1, 4);
    insertAtTail(head1, 5);
    insertAtTail(head1, 7);

    insertAtTail(head2, 2);
    insertAtTail(head2, 3);
    insertAtTail(head2, 6);

    display(head1);
    display(head2);

    // head3 = merging(head1, head2);
    head3= mergeRecurcive(head1,head2);

    display(head3);

    return 0;
}