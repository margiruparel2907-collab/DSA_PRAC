#include <iostream>
using namespace std;
void bubbleSort(int a[], int n)
{
    for(int i = 0; i < n-1; i++)
    {
        for(int j = 0; j < n-i-1; j++)
        {
            if(a[j] > a[j+1])
            {
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
}
void selectionSort(int a[], int n)
{
    for(int i = 0; i < n-1; i++)
    {
        int small = i;

        for(int j = i+1; j < n; j++)
        {
            if(a[j] < a[small])
            {
                small = j;
            }
        }

        int temp = a[i];
        a[i] = a[small];
        a[small] = temp;
    }
}
void insertionSort(int a[], int n)
{
    for(int i = 1; i < n; i++)
    {
        int x = a[i];
        int j = i - 1;

        while(j >= 0 && a[j] > x)
        {
            a[j+1] = a[j];
            j--;
        }

        a[j+1] = x;
    }
}

void printArray(int a[], int n)
{
    for(int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}
int main()
{
    int n;
    cout << "Enter number of students: ";
    cin >> n;
    int a[100], b[100], c[100];

    cout << "Enter marks: ";
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        b[i] = a[i];
        c[i] = a[i];
    }
    bubbleSort(a, n);
    selectionSort(b, n);
    insertionSort(c, n);

    cout << "\nBubble Sort: ";
    printArray(a, n);

    cout << "Selection Sort: ";
    printArray(b, n);

    cout << "Insertion Sort: ";
    printArray(c, n);

    return 0;
}