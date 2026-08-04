#include<iostream>

using namespace std;

int main()
{
int arr[5]={45,49,41,47,44};
for(int i=0;i<5;i++){
    for(int j=0;j<4;j++){
        if(arr[j]>arr[j+1]){
           int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
    }
}
cout<<"Sorted array: ";
for(int i=0; i<5; i++){
    cout<<arr[i]<<",";
}
return 0;
}

