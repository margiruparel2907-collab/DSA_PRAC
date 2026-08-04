#include <iostream>
using namespace std;

int main()
{
    int a[7] = {10,20,30,40,50,60,70};
    int n = 7, key;

    cout << "Enter book code: ";
    cin >> key;

    int l = 0, h = n - 1;

    while(l <= h)
    {
        int m = (l + h) / 2;

        if(a[m] == key)
        {
            cout << "Found at position " << m + 1;
            break;
        }

        if(key < a[m])
            h = m - 1;
        else
            l = m + 1;
    }

    if(l > h)
        cout << "Book not found.";

    return 0;
}