#include <iostream>
using namespace std;

int check(int a[], int l, int h, int x)
{
    if(l > h)
        return -1;

    int m = (l + h) / 2;

    if(a[m] == x)
        return m;

    if(x < a[m])
        return check(a, l, m - 1, x);
    else
        return check(a, m + 1, h, x);
}

int main()
{
    int a[7] = {10,20,30,40,50,60,70};
    int x;

    cout << "Enter book code: ";
    cin >> x;

    int ans = check(a, 0, 6, x);

    if(ans != -1)
        cout << "Book found at position " << ans + 1;
    else
        cout << "Book not found.";

    return 0;
}