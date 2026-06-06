#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[100];
    cout<<"Enter the elements of array: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int key;
    cout<<"Enter the key to be searched: ";
    cin>>key;
    bool found=false;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
            found=true;
            break;
        }
    }
    if(found)
    {
        cout<<"Key found in the array."<<endl;
    }
    else
    {
        cout<<"Key not found in the array."<<endl;
    }
    return 0;
}
