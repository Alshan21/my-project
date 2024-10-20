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
    int n = 0;
    int m = size-1;
    while(n<m)
    {
        temp = arr[n];
        arr[n] = arr[m];
        arr[m] = temp;
        n++;
        m--;
    }
    for(int i=0 ; i < size; i++)
    {
        cout <<  arr[i] << " " ;
    }
    
}