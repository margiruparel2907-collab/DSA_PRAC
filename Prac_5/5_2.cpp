#include <iostream>
using namespace std;


struct SNode
{
    string name;
    SNode* next;
};

SNode* shead = NULL;

void sAdd(string name)
{
    SNode* n = new SNode;
    n->name = name;

    if (shead == NULL)
    {
        shead = n;
        n->next = shead;
        return;
    }

    SNode* temp = shead;

    while (temp->next != shead)
        temp = temp->next;

    temp->next = n;
    n->next = shead;
}

void sDelete(string name)
{
    if (shead == NULL)
        return;

    SNode* temp = shead;
    SNode* prev = NULL;

    do
    {
        if (temp->name == name)
            break;

        prev = temp;
        temp = temp->next;

    } while (temp != shead);

    if (temp->name != name)
        return;

    if (temp == shead)
    {
        if (shead->next == shead)
        {
            delete shead;
            shead = NULL;
            return;
        }

        SNode* last = shead;

        while (last->next != shead)
            last = last->next;

        shead = shead->next;
        last->next = shead;
        delete temp;
    }
    else
    {
        prev->next = temp->next;
        delete temp;
    }
}

void sDisplay()
{
    if (shead == NULL)
        return;

    SNode* temp = shead;

    do
    {
        cout << temp->name << " ";
        temp = temp->next;

    } while (temp != shead);

    cout << endl;
}


// Doubly Circular Linked List

struct DNode
{
    string name;
    DNode* next;
    DNode* prev;
};

DNode* dhead = NULL;

void dAdd(string name)
{
    DNode* n = new DNode;
    n->name = name;

    if (dhead == NULL)
    {
        dhead = n;
        n->next = n;
        n->prev = n;
        return;
    }

    DNode* last = dhead->prev;

    n->next = dhead;
    n->prev = last;

    last->next = n;
    dhead->prev = n;
}

void dDelete(string name)
{
    if (dhead == NULL)
        return;

    DNode* temp = dhead;

    do
    {
        if (temp->name == name)
            break;

        temp = temp->next;

    } while (temp != dhead);

    if (temp->name != name)
        return;

    if (temp->next == temp)
    {
        delete temp;
        dhead = NULL;
        return;
    }

    temp->prev->next = temp->next;
    temp->next->prev = temp->prev;

    if (temp == dhead)
        dhead = temp->next;

    delete temp;
}

void dDisplay()
{
    if (dhead == NULL)
        return;

    DNode* temp = dhead;

    do
    {
        cout << temp->name << " ";
        temp = temp->next;

    } while (temp != dhead);

    cout << endl;
}

int main()
{
    cout << "Singly Circular List:\n";

    sAdd("A");
    sAdd("B");
    sAdd("C");
    sDisplay();

    sDelete("B");
    sDisplay();

    cout << "\nDoubly Circular List:\n";

    dAdd("A");
    dAdd("B");
    dAdd("C");
    dDisplay();

    dDelete("B");
    dDisplay();

    return 0;
}