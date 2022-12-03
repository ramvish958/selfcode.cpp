#include<iostream>
#include<cmath>
using namespace std;

void bubblesort(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<(size-i-1);j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
int main()
{
    int size;
    cout<<"Enter how many element you want in array :";
    cin>>size;
    int array[size];
    cout<<"Start entering "<<size<<"element in array :";
    for(int i=0;i<size;i++)
    {
        cin>>array[i];
    }
    for(int i=0;i<size;i++)
    {
        cout<<array[i]<<" ";
    }
    bubblesort(array,size);
    cout<<"\nAfter sorting :";
    for(int i=0;i<size;i++)
    {
        cout<<array[i];
    }
    return 0;
}