#include<iostream>
using namespace std;
int main()
{
    int size;
    cout << "Enter the size of array : ";
    cin >> size;
    int arr[size];
    for(int i=0 ; i < size; i++)
    {
        cin >> arr[i];
    }
    int count = 0;
    for(int i=0 ; i  < size ; i++)
    {
        if(arr[i]>count)
        {
            count=arr[i];
        }
    }
    cout << "Maximum element is :  " << count;
}