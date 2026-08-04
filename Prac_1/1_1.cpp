#include<iostream>
using namespace std;

int main()
{
    int a[5]={1,2,3,4,5};
    int h,temp;

    cout<<"Enter number of hours: ";
    cin>>h;

    for(int i=0;i<h;i++)
    {
        temp=a[0];

        for(int j=0;j<4;j++)
        {
            a[j]=a[j+1];
        }

        a[4]=temp;
    }

    cout<<"Final order: ";

    for(int i=0;i<5;i++)
    {
        cout<<a[i]<<" ";
    }

    return 0;
}