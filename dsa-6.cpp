#include<iostream>
using namespace std;
int Search(int arr[],int size,int target)
{
     for(int i=0 ; i < size; i++)
    {
        if(arr[i]==target)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int size,result,target;
    cout << "Enter the size of array : ";
    cin >> size;
    int arr[size];
    for(int i=0 ; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter Element to be find : ";
    cin >> target;
    result = Search(arr,size,target);
    cout << result;
}