#include <iostream>

using namespace std;

struct node
{

    int data;
    node *next;
};

void printer(node *head)
{

    if (head == nullptr)
    {
        cout << "list finished\n";
        return;
    }
    cout << head->data << endl;

    printer(head->next);
}

void printerInReverse(node *head)
{

    if (head == nullptr)
    {
        cout << "list finished\n";
        return;
    }

    printer(head->next);
    cout << head->data << endl;
}
void insert_end(node *&head, int val)
{

    node *newnode = new node;
    newnode->data = val;
    newnode->next = nullptr;
    if (head == nullptr)
    {

        head = newnode;
    }

    node *temp = head;

    while (temp->next != nullptr)
    {
        temp = temp->next;
    }
    temp->next = newnode;
}

int main()
{
    node *head = nullptr;

    insert_end(head, 10);
    insert_end(head, 20);
    insert_end(head, 30);
    insert_end(head, 40);
    insert_end(head, 50);
}