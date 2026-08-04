#include<iostream>
using namespace std;

int main()
{
    int a[8]={10,20,30,20,40,10,50,30};

    cout<<"Duplicate book IDs are:"<<endl;

    for(int i=0;i<8;i++)
    {
        for(int j=i+1;j<8;j++)
        {
            if(a[i]==a[j])
            {
                cout<<a[i]<<endl;
                break;
            }
        }
    }

    return 0;
}