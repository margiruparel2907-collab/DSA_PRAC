#include <iostream>
using namespace std;

int main() {
    int table[10];
    int n, id, pos;

    for (int i = 0; i < 10; i++)
        table[i] = -1;

    cout << "Enter number of vehicles: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Enter registration number: ";
        cin >> id;

        pos = id % 10;

        while (table[pos] != -1)
            pos = (pos + 1) % 10;

        table[pos] = id;
    }

    cout << "\nParking Slots:\n";
    for (int i = 0; i < 10; i++)
        cout << i << " : " << table[i] << endl;

    return 0;
}