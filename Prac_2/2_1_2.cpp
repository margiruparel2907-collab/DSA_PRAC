#include <iostream>
using namespace std;

int check(string a[], string key, int i)
{
    if(i >= 5)
        return -1;

    if(a[i] == key)
        return i;

    return check(a, key, i + 1);
}

int main()
{
    string a[5] = {"GJ01AB1234", "GJ01XY1111", "GJ01PQ5678", "GJ01LM4321", "GJ01CD9876"};
    string key;

    cout << "Enter plate number: ";
    cin >> key;

    int ans = check(a, key, 0);

    if(ans == -1)
        cout << "Plate not found.";
    else
        cout << "Plate found at position " << ans + 1;

    return 0;
}