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
    int temp;
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
            if(arr[i]<arr[j])
            {
                swap(arr[i],arr[j]);
            }
        }

    }
    for(int i=0 ; i < size; i++)
    {
        cout << arr[i] << endl;
    }
    int product = arr[size-1] * arr[size-2] * arr[size-3];
    cout << "The product is : " << product;
   
}