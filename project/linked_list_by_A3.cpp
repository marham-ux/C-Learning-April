#include <iostream>

using namespace std;
// created node same as element in aaray
struct node
{
 int data;   // for our data to be input
    node *next; // for accessing next node so name next
};
void insert_begin(node *&head, int data1) // used & reference as we want to change the pointer not its copy
{                                         // data1 is data to to be input
    node *newNode = new node;             // create a new node, this will hold our new data
    newNode->data = data1;
    newNode->next = head; // new node points to old head, this way we dont lose the rest of list
    head = newNode;        // head now is updated to point to the new node, so new node becomes first

    cout << " Data inserted succesfully\n";
}
void insert_end(node *&head, int data1)
{
    node *newNode = new node;
    newNode->data = data1;
    newNode->next = nullptr; // since this will be last node, next has to be null

    if (head == nullptr) // list is empty case, ex: head is nullptr so newNode becomes the only node
    {
        head = newNode;
    }
    else
    {
        node *temp = head;            // temp used to walk the list without losing head pointer
        while (temp->next != nullptr) // keep moving until temp is the last node (temp->next is null)aka temp reaches last node
        {
            temp = temp->next;
        }
        temp->next = newNode; // attach new node after the last node (after or at temp)
    }
}
void insert_at(node *&head, int data1, int p)
{
    if (p < 1) // position has to be 1 or more, position 0 or negative makes no sense as there are no position zero
    {
        cout << "error";
        return;
    }

    if (p == 1) // inserting at position 1 is same as inserting at beginning, so  we reuse that function
    {
        insert_begin(head, data1);
        return;
    }
    node *temp = head;
    for (int i = 1; i < p - 1 && temp != nullptr; i++)
    /* this loop moves temp to the node JUST BEFORE position p
    ex: if p=3 we want temp to land on node at position 2, so newNode can be inserted after it
    loop runs from i=1 to i<p-1, so for p=3 it runs once (i=1), moving temp one step from head
    */
    {
        temp = temp->next;
    }
    if (temp == nullptr) // means p was bigger than list size,out of bounds like an array, ran off the end
    {
        cout << "error";
        return;
    }
    node *newNode = new node;
    newNode->data = data1;
    newNode->next = temp->next; // newNode takes over wherever temp was pointing to
    temp->next = newNode;       // temp now points to newNode, completing the link in between them
}
void delete_begin(node *&head)
{
    if (head == nullptr) // nothing to delete if list is already empty
    {
        cout << "error";
        return;
    }

    node *temp = head; // save current head so we can delete it after moving head forward
    head = head->next; // head now skips the first node, second node becomes new first
    delete temp;       // free the memory of old first node, otherwise memory leak can happen
    cout << "succesfully deleted";
}
void delete_end(node *&head)
{
    if (head == nullptr) // if empty list, there is nothing to delete
    {
        cout << "error";
        return;
    }
    if (head->next == nullptr) // only one node in list, ex: head is the only node so deleting it empties the list
    {
        delete head;
        head = nullptr;
        return;
    }
    node *temp = head;
    while (temp->next->next != nullptr)
    /* we stop temp one node BEFORE the last node, not on the last node itself
    this is because we need to set temp->next = nullptr after deleting last node
    so temp has to be second-last, ex: list 1->2->3, temp stops at 2 (since 3->next is null, loop condition fails there)
    */
    {
        temp = temp->next;
    }

    delete temp->next;    // delete the actual last node
    temp->next = nullptr; // temp is now the new last node, so its next must be null
}

void delete_at(node *&head, int p)
{
    if (head == nullptr) // empty list check
    {
        cout << "error ";
        return;
    }
    if (p < 1) // invalid position, cant be zero or negative
    {
        cout << "error";
        return;
    }
    if (p == 1) // deleting position 1 is same as delete_begin, reuse that
    {
        delete_begin(head);
        return;
    }
    node *temp = head;
    for (int i = 0; i < p - 1 && temp->next != nullptr; i++)
    // same idea as insert_at, walk temp to the node just before the one we want to delete
    {
        temp = temp->next;
    }
    if (temp->next == nullptr) // p was out of range, no node exists at that position
    {
        cout << "error";
        return;
    }
    node *nodeToDelete = temp->next; // this is the actual node we want gone
    temp->next = temp->next->next;   // skip over nodeToDelete, linking temp directly to the node after it
    delete nodeToDelete;             // free its memory now that nothing points to it
}

void delete_data(node *&head, int data1)
{
    if (head == nullptr) // empty list, nothing to search/delete
    {
        cout << "error";
        return;
    }
    if (head->data == data1) // special case: value to delete is at the head itself
    {
        delete_begin(head);
        return;
    }
    node *temp = head;
    while (temp->next != nullptr && temp->next->data != data1)
    /* we check temp->next->data instead of temp->data
    this is so temp always stops one node BEFORE the match, same reasoning as delete_at
    we need the previous node to be able to relink around the matched node
    */
    {
        temp = temp->next;
    }
    if (temp->next == nullptr) // loop ran off the end without finding data1
    {
        cout << "error - value not found";
        return;
    }
    node *nodeToDelete = temp->next; // node holding the value we want to remove
    temp->next = temp->next->next;   // bypass it
    delete nodeToDelete;             // free memory
}

void traverse(node *head)
{
    if (head == nullptr) // nothing to print if list is empty
    {
        cout << "list is empty\n";
        return;
    }
    node *temp = head; // use temp so we dont lose the original head pointer while walking
    while (temp != nullptr)
    {
        cout << temp->data;
        if (temp->next != nullptr) // only print arrow if there is a next node, avoids trailing "->"
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
        if (temp->data == data1) // found match, return pointer to this node directly
            return temp;
        temp = temp->next;
    }
    return nullptr; // walked whole list, value never matched, so not found
}

int size(node *head)
{
    int count = 0;
    node *temp = head;
    while (temp != nullptr) // walk every node, counting as we go
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
        node *next = temp->next; // save next before deleting temp, else we lose rest of list
        delete temp;             // free current node
        temp = next;             // move to the saved next node
    }
    head = nullptr; // head no longer points to any (deleted) memory, avoids dangling pointer
}

void showMenu() // contains our menu
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
    cout << "10. Get size of list\n";
    cout << " 0. Exit\n";
    cout << "=======================================\n";
    cout << "Enter your choice: ";
}

int main()
{
    node *head = nullptr;        // list starts empty
    int choice, value, position; // choice is menu num, position is just position of add or del, value os value to be added

    do
    {
        showMenu(); // used switch for menu
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
            if (result != nullptr) // search returned a valid pointer, meaning value exists
                cout << "Value " << value << " found in the list.\n";
            else // search returned nullptr, value was not in list
                cout << "Value " << value << " not found in the list.\n";
            break;
        }
        case 10:
            cout << "Size of list: " << size(head) << "\n";
            break;
        case 0:
            cout << "Exiting program. Freeing allocated memory...\n";
            freeList(head); // important: free all nodes before program ends, avoid memory leak
            break;
        default:
            cout << "Invalid choice. Please try again.\n";
        }

    } while (choice != 0); // keep looping menu until user picks exit (0)
}