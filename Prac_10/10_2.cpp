#include <iostream>
using namespace std;

int main() {
    int table[10][100];
    int count[10] = {0};
    int n, code, pos;

    cout << "Enter number of books: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Enter book code: ";
        cin >> code;

        pos = code % 10;
        table[pos][count[pos]] = code;
        count[pos]++;
    }

    cout << "\nBook Shelves:\n";
    for (int i = 0; i < 10; i++) {
        cout << i << " : ";
        for (int j = 0; j < count[i]; j++)
            cout << table[i][j] << " ";
        cout << endl;
    }

    return 0;
}