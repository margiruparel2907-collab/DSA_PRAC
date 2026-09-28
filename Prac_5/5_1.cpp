#include <iostream>
using namespace std;

struct Node
{
    string song;
    Node* prev;
    Node* next;
};

Node* head = NULL;
Node* tail = NULL;

void addBeginning(string s)
{
    Node* n = new Node;
    n->song = s;
    n->prev = NULL;
    n->next = head;

    if (head != NULL)
        head->prev = n;
    else
        tail = n;

    head = n;
}

void addEnd(string s)
{
    Node* n = new Node;
    n->song = s;
    n->next = NULL;
    n->prev = tail;

    if (tail != NULL)
        tail->next = n;
    else
        head = n;

    tail = n;
}

void insertAfter(string oldSong, string newSong)
{
    Node* temp = head;

    while (temp != NULL && temp->song != oldSong)
        temp = temp->next;

    if (temp == NULL)
    {
        cout << "Song not found\n";
        return;
    }

    Node* n = new Node;
    n->song = newSong;

    n->prev = temp;
    n->next = temp->next;

    if (temp->next != NULL)
        temp->next->prev = n;
    else
        tail = n;

    temp->next = n;
}

void removeFirst()
{
    if (head == NULL)
        return;

    Node* temp = head;
    head = head->next;

    if (head != NULL)
        head->prev = NULL;
    else
        tail = NULL;

    delete temp;
}

void display()
{
    Node* temp = head;

    while (temp != NULL)
    {
        cout << temp->song << " ";
        temp = temp->next;
    }

    cout << endl;
}

void countSongs()
{
    int count = 0;
    Node* temp = head;

    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }

    cout << "Total songs: " << count << endl;
}

int main()
{
    addEnd("Song1");
    display();

    addBeginning("Song2");
    display();

    addEnd("Song3");
    display();

    insertAfter("Song2", "Song4");
    display();

    removeFirst();
    display();

    countSongs();

    return 0;
}