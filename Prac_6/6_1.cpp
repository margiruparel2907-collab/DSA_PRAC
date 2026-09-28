#include <iostream>
using namespace std;

#define MAX 5
int stackArr[MAX];
int top = -1;

void push(int tray)
{
    if (top == MAX - 1)
    {
        cout << "Error: Stack is full. Cannot place tray." << endl;
    }
    else
    {
        top++;
        stackArr[top] = tray;
        cout << "Tray " << tray << " placed." << endl;
        cout << "Current top tray: " << stackArr[top] << endl;
    }
}
void pop()
{
    if (top == -1)
    {
        cout << "Error: Stack is empty. Cannot take tray." << endl;
    }
    else
    {
        cout << "Tray " << stackArr[top] << " taken." << endl;
        top--;

        if (top != -1)
            cout << "Current top tray: " << stackArr[top] << endl;
        else
            cout << "Stack is empty." << endl;
    }
}
int main()
{
    int n, choice, tray;

    cout << "Enter capacity of stack: ";
    cin >> n;
    if (n > MAX)
        n = MAX;

    cout << "\n1. Place tray" << endl;
    cout << "2. Take tray" << endl;
    cout << "3. Exit" << endl;

    while (true)
    {
        cout << "\nEnter operation: ";
        cin >> choice;
        if (choice == 1)
        {
            cout << "Enter tray number: ";
            cin >> tray;

            if (top == n - 1)
                cout << "Error: Stack is full. Cannot place tray." << endl;
            else
            {
                top++;
                stackArr[top] = tray;
                cout << "Current top tray: " << stackArr[top] << endl;
            }
        }
        else if (choice == 2)
        {
            if (top == -1)
                cout << "Error: Stack is empty. Cannot take tray." << endl;
            else
            {
                cout << "Tray taken: " << stackArr[top] << endl;
                top--;

                if (top == -1)
                    cout << "Stack is empty." << endl;
                else
                    cout << "Current top tray: " << stackArr[top] << endl;
            }
        }
        else if (choice == 3)
        {
            break;
        }
        else
        {
            cout << "Invalid operation." << endl;
        }
    }
    return 0;
}