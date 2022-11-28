#include<iostream>
using namespace std;

void linearsearch(int array[5],int num,int element)
{
    int temp = -1;
    for(int j=0;j<5;j++)
    {
        if(array[j]==num)
        {
            cout<<"Element found :";
            temp = 0;
        }
    }
    if(temp == -1)
    {
        cout<<"No Element found :";
    }
}

int main()
{
    int array[5],element,num,ptr;
    cout<<"Start Entering 5 element in array :";
    for(int i=0;i<5;i++)
    {
        cin>>array[i];
    }
    for(int i=0;i<5;i++)
    { 
        cout<<array[i]<<endl;
    }
    cout<<"Enter specific element to search array : ";
    cin>>num;
    linearsearch(array,num,element);
    return 0;
}