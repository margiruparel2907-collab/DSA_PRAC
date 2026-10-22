#include <iostream>
using namespace std;

int main() {
    int table[10];
    int n, id, h1, h2, pos;

    for (int i = 0; i < 10; i++)
        table[i] = -1;

    cout << "Enter number of student IDs: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Enter student ID: ";
        cin >> id;

        h1 = id % 10;
        h2 = 7 - (id % 7);
        pos = h1;

        while (table[pos] != -1)
            pos = (pos + h2) % 10;

        table[pos] = id;
    }

    cout << "\nHash Table:\n";
    for (int i = 0; i < 10; i++)
        cout << i << " : " << table[i] << endl;

    return 0;
}