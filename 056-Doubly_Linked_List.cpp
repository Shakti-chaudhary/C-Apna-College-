#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *prev;
    node *next;
    node(int val)
    {
        data = val;
        next = NULL;
        prev = NULL;
    }
};

void insertAtHead(node *&head, int val)
{

    node *n = new node(val);

    n->next = head;
    if (head = NULL)
    {
        head->prev = n;
    }

    head = n;
}

void insertAtTail(node *&head, int val)
{
    node *temp = head;
    node *n = new node(val);
    if (head == NULL)
    {
        // n->next = head;
        // head = n;
        insertAtHead(head, val);
        return;
    }

    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = n;
    n->prev = temp;
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

void deleteAtHead(node *&head)
{

    node *todelete = head;
    head = head->next;
    head->prev=NULL;

    delete todelete;
}

void toDelete(node *&head, int val)
{

    node *temp = head;
    

    while (temp != NULL )
    {
        
        if (temp->prev == NULL && val == temp->data) /*  for delete First Node  */
        {
            // head = temp->next;
            // temp->next->prev = NULL;
            // delete temp;
            deleteAtHead(head);
            return;
        }

        if (val == temp->data)
        {
            temp->prev->next = temp->next;
            if(temp->next!=NULL){
            temp->next->prev = temp->prev;
            }
            delete temp;

            return;
        }

        temp = temp->next;
    }
}

int main()
{

    node *head = NULL;
    insertAtHead(head, 12);
    insertAtTail(head, 33);
    insertAtTail(head, 22);
    insertAtTail(head, 44);

    display(head);
    toDelete(head, 12);
    // deleteAtHead(head);
    display(head);

    return 0;
}