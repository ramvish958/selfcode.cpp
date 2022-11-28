#include<iostream>
#include<cmath>
using namespace std;

int binarysearch(int array[10],int left,int right,int search)
{
    while(left<=right)
    {

        int mid = left + (right-left)/2;
        if(array[mid] == search)
        {
            return search;
        }
        else if(array[mid]<=search)
        {
            left = mid+1;
        }
        else
        {
            right = mid-1;
        }
    }
    return -1;
}
int main()
{
    int array[10];
    int num,search;

    cout<<"Enter how many element you want in array :";
    cin>>num;
    cout<<"Start Entering element in array :";
    for(int i=0;i<num;i++)
    {
        cin>>array[i];
    }
    cout<<"Our array is :";
    for(int i=0;i<num;i++)
    {
       cout<<array[i]<<endl;
    }
    cout<<"Enter the element to search element in array :";
    cin>>search;
    int i;
    int output = binarysearch(array,0,10,search);
    if(output==-1)
    {
        cout<<"Element not found :";
    }
    else
    {
        cout<<"Element found :"<<output<<" at index ";
    }

    return 0;    
}