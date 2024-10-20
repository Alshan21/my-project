#include<iostream>
using namespace std;
int main()
{
    int row;
    cout << "Enter the number of rows : ";
    cin >> row;
    for(int i=1;i<row;i++)
    {
        for(int j=row-i;j>0;j--)
        {
            cout << " ";
        }
        for(int k=0;k < row;k++)
        {
            cout << "*";
        }
        cout << endl;
    }
    
}