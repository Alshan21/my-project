#include<iostream>
using namespace std;
void frequencyCount(int arr[],int size)
{
    
    for(int i=0;i<size;i++)
    {
        int count=1;
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
        cout << arr[i] << " : " << count << endl;
        }
    }
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
    frequencyCount(arr,size);
}