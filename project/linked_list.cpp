#include <iostream>

using namespace std;

struct node
{

    int data;
    node *next;
};
void insert_begin(node *&head, int data1)
{
    node *newNode = new node;
    newNode->data = data1;
    newNode->next = head;
    head = newNode;

    cout << " Data inserted succesfully\n";
}
void insert_end(node *&head, int data1)
{
    node *newNode = new node;
    newNode->data = data1;
    newNode->next = nullptr;

    if (head == nullptr)
    {
        head = newNode;
    }
    else
    {
        node *temp = head;
        while (temp->next != nullptr)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}
void insert_at(node *&head, int data1, int p)
{
    if (p < 1)
    {
        cout << " error";
        return;
    }

    if (p == 1)
    {
        insert_begin(head, data1);
        return;
    }
    node *temp = head;
    for (int i = 1; i < p - 1 && temp != nullptr; i++)
    {
        temp = temp->next;
    }
    if (temp == nullptr)
    {
        cout << "error";
        return;
    }
    node *newNode = new node;
    newNode->data = data1;
    newNode->next = temp->next;
    temp->next = newNode;
}
void delete_begin(node *&head)
{
    if (head == nullptr)
    {
        cout << "error";
        return;
    }

    node *temp = head;
    head = head->next;
    delete temp;
    cout << "succesfully deleted";
}
void delete_end(node *&head)
{
    if (head == nullptr)
    {
        cout << "error";
        return;
    }
    if (head->next == nullptr)
    {
        delete head;
        head = nullptr;
        return;
    }
    node *temp = head;
    while (temp->next->next != nullptr)
    {
        temp = temp->next;
    }

    delete temp->next;
    temp->next = nullptr;
}

void delete_at(node *&head, int p)
{
    if (head == nullptr)
    {
        cout << "error ";
        return;
    }
    if (p < 1)
    {
        cout << "error";
        return;
    }
    if (p == 1)
    {
        delete_begin(head);
        return;
    }
    node *temp = head;
    for (int i = 0; i < p - 1 && temp->next != nullptr; i++)
    {
        temp = temp->next;
    }
    if (temp->next == nullptr)
    {
        cout << "error";
        return;
    }
    node *nodeToDelete = temp->next;
    temp->next = temp->next->next;
    delete nodeToDelete;
}

void delete_data(node *&head, int data1)
{
    if (head == nullptr)
    {
        cout << "error";
        return;
    }
    if (head->data == data1)
    {
        delete_begin(head);
        return;
    }
    node *temp = head;
    while (temp->next != nullptr && temp->next->data != data1)
    {
        temp = temp->next;
    }
    if (temp->next == nullptr)
    {
        cout << "error - value not found";
        return;
    }
    node *nodeToDelete = temp->next;
    temp->next = temp->next->next;
    delete nodeToDelete;
}

void traverse(node *head)
{
    if (head == nullptr)
    {
        cout << "list is empty\n";
        return;
    }
    node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->data;
        if (temp->next != nullptr)
            cout << " -> ";
        temp = temp->next;
    }
    cout << "\n";
}

node *search(node *head, int data1)
{
    node *temp = head;
    while (temp != nullptr)
    {
        if (temp->data == data1)
            return temp;
        temp = temp->next;
    }
    return nullptr;
}

void reverse(node *&head)
{
    node *prev = nullptr;
    node *curr = head;
    node *nextNode = nullptr;

    while (curr != nullptr)
    {
        nextNode = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextNode;
    }
    head = prev;
}

void sortList(node *head)
{
    if (head == nullptr)
        return;
    bool swapped = true;
    while (swapped)
    {
        swapped = false;
        node *curr = head;
        while (curr->next != nullptr)
        {
            if (curr->data > curr->next->data)
            {
                int t = curr->data;
                curr->data = curr->next->data;
                curr->next->data = t;
                swapped = true;
            }
            curr = curr->next;
        }
    }
}

int size(node *head)
{
    int count = 0;
    node *temp = head;
    while (temp != nullptr)
    {
        count++;
        temp = temp->next;
    }
    return count;
}

void freeList(node *&head)
{
    node *temp = head;
    while (temp != nullptr)
    {
        node *next = temp->next;
        delete temp;
        temp = next;
    }
    head = nullptr;
}

void showMenu()
{
    cout << "\n========== LINKED LIST MENU ==========\n";
    cout << " 1. Insert at beginning\n";
    cout << " 2. Insert at end\n";
    cout << " 3. Insert at position\n";
    cout << " 4. Delete from beginning\n";
    cout << " 5. Delete from end\n";
    cout << " 6. Delete at position\n";
    cout << " 7. Delete by value\n";
    cout << " 8. Traverse / Display list\n";
    cout << " 9. Search for a value\n";
    cout << "10. Reverse the list\n";
    cout << "11. Sort the list\n";
    cout << "12. Get size of list\n";
    cout << " 0. Exit\n";
    cout << "=======================================\n";
    cout << "Enter your choice: ";
}

int main()
{
    node *head = nullptr;
    int choice, value, position;

    do
    {
        showMenu();
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter value to insert: ";
            cin >> value;
            insert_begin(head, value);
            break;
        case 2:
            cout << "Enter value to insert: ";
            cin >> value;
            insert_end(head, value);
            break;
        case 3:
            cout << "Enter value to insert: ";
            cin >> value;
            cout << "Enter position: ";
            cin >> position;
            insert_at(head, value, position);
            break;
        case 4:
            delete_begin(head);
            break;
        case 5:
            delete_end(head);
            break;
        case 6:
            cout << "Enter position to delete: ";
            cin >> position;
            delete_at(head, position);
            break;
        case 7:
            cout << "Enter value to delete: ";
            cin >> value;
            delete_data(head, value);
            break;
        case 8:
            traverse(head);
            break;
        case 9:
        {
            cout << "Enter value to search: ";
            cin >> value;
            node *result = search(head, value);
            if (result != nullptr)
                cout << "Value " << value << " found in the list.\n";
            else
                cout << "Value " << value << " not found in the list.\n";
            break;
        }
        case 10:
            reverse(head);
            traverse(head);
            break;
        case 11:
            sortList(head);
            traverse(head);
            break;
        case 12:
            cout << "Size of list: " << size(head) << "\n";
            break;
        case 0:
            cout << "Exiting program. Freeing allocated memory...\n";
            freeList(head);
            break;
        default:
            cout << "Invalid choice. Please try again.\n";
        }

    } while (choice != 0);

    return 0;
}
