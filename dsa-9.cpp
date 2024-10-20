#include<iostream>
using namespace std;
int duplicateCount(int arr[],int size)
{
    
    int count=0;
    for(int i=0;i<size;i++)
    {
        
        if(arr[i]!=0)
        {
        for(int j=i+1;j<size;j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
                arr[j]=0;
            }
        }
        }
    }
    return count;
}
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
   int result = duplicateCount(arr,size);
   cout << "The total number of duplicate elements is :" <<result;
}