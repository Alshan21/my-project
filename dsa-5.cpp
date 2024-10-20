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
    int temp = 0;
    int n = 0;
    int m = size-1;
    while(n<m)
    {
        if(arr[n]==arr[m])
        {
            n++;
            m--;
            temp++;
        }
    }
    if(temp==0)
    {
        cout << "Array is not palindrom ";
    }
    else
    {
      cout << "Array is palindrom ";
    }
}