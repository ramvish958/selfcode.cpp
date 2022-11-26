#include<iostream>
using namespace std;

void linearSearch(int arr[100],int num,int search)          //Function Defination
{
    int temp = -1;
    for(int i=0;i<num;i++)                                  //loop to check equality condition
    {
        if(arr[i] == search)
        {
            cout<<"Element found in array :";               //if yes print element found
            //cout<<arr[i]<<" Element found in array at in index :"<<"["<<i<<"]";   //if you want the value and index print without '//'commment
            temp = 0;
                        
        }
    }
    if(temp == -1)
    {
        cout<<"Element not found :";
    }    
}

int main()
{
    int x[100],num,search;
    cout<<"Enter how many element you are in array : ";
    cin>>num;                                               //user input to want total number of element in array
    cout<<"Enter  element in array : ";
    for(int i=0;i<num;i++)                                  //loop for total number of elemnt want
    {
        cin>>x[i];
    }
    for(int j=0;j<num;j++)
    {
        cout<<"\n"<<x[j];                                   //display of array
    }
    cout<<"\nEnter the element to search in array :";       //user in put to search element in array
    cin>>search;
    linearSearch(x,num,search);         //Function declare
    return 0;
}
