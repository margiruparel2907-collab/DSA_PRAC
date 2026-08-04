#include<iostream>
using namespace std;
int main()
{
    int arr[5] = {45,49,41,47,44};
    int m = 0;
    for(int i = 1; i < 5; i++)
    {
        if(arr[i] < arr[m])
        {
            m = i;
        }
    }
    int temp = arr[m];
    arr[m] = arr[0];
    arr[0] = temp;

    cout << "Array: ";
    for(int i = 0; i < 5; i++){
        cout << arr[i] << " ";
    }
    return 0;
}