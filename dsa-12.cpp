#include<iostream>
using namespace std;
int main()
{
    int row;
    cout << "Enter the number of rows : ";
    cin >> row;
    int temp = row/2;
    for(int i=0;i<=row;i++)
    {
        if(i<=temp)
        {
        for(int j=1;j<=i;j++)
        {
            cout << " * ";
        }
        cout << endl;
        }
        else
        {
        for(int j=0;j<=row-i;j++)
        {
            cout << " * ";
        }
        cout << endl;
        }
    }
}
