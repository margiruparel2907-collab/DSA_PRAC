#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

Node *head = NULL;

// Insert at end
void insertEnd(int x)
{
    Node *newNode = new Node;
    newNode->data = x;
    newNode->next = NULL;

    if (head == NULL)
    {
        head = newNode;
        return;
    }

    Node *temp = head;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = newNode;
}

// Delete a node by value
void deleteValue(int x)
{
    if (head == NULL)
        return;

    // If first node has the value
    if (head->data == x)
    {
        Node *temp = head;
        head = head->next;
        delete temp;
        return;
    }

    Node *temp = head;

    while (temp->next != NULL && temp->next->data != x)
    {
        temp = temp->next;
    }

    if (temp->next != NULL)
    {
        Node *del = temp->next;
        temp->next = temp->next->next;
        delete del;
    }
}

// Forward traversal
void display()
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;
}

// Reverse printing using recursion
void reversePrint(Node *temp)
{
    if (temp == NULL)
        return;

    reversePrint(temp->next);
    cout << temp->data << " ";
}

int main()
{
    insertEnd(10);
    insertEnd(20);
    insertEnd(30);
    insertEnd(40);
    insertEnd(50);

    cout << "Forward queue: ";
    display();

    deleteValue(30);

    cout << "After deletion: ";
    display();

    cout << "Reverse queue: ";
    reversePrint(head);
    cout << endl;

    return 0;
}