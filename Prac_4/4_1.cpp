#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

Node *head = NULL;

// Insert at front
void insertFront(int x)
{
    Node *newNode = new Node;
    newNode->data = x;
    newNode->next = head;
    head = newNode;
}

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

// Insert at a given position
void insertPosition(int x, int pos)
{
    if (pos <= 1)
    {
        insertFront(x);
        return;
    }

    Node *temp = head;

    for (int i = 1; i < pos - 1 && temp != NULL; i++)
    {
        temp = temp->next;
    }

    // Position is greater than the queue length
    if (temp == NULL)
    {
        cout << "Invalid position" << endl;
        return;
    }

    Node *newNode = new Node;
    newNode->data = x;
    newNode->next = temp->next;
    temp->next = newNode;
}

// Display queue
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

int main()
{
    insertFront(10);
    display();

    insertEnd(20);
    display();

    insertEnd(30);
    display();

    insertPosition(15, 2);
    display();

    insertPosition(25, 4);
    display();

    return 0;
}