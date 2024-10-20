#include<iostream>
using namespace std;
int main()
{
    int row;
    cout << "Enter the number of rows : ";
    cin >> row;
    int temp = row/2;
    for(int i=0;i<row;i++)
    {
        if(i<=temp)
        {
        for(int j=0;j<row-i;j++)
        {
          cout << " ";
        }
        for(int k=0;k<2*i+1;k++)
        {
          cout << "*";
        }
        cout << endl;
        }
        else
        {
          for(int l=i-1;l<=row-i;l++)
          {
            cout << " ";
          }
          for(int m=0;m<row-i+3;m++)
          {
            cout << "*";
          }
          cout << endl;
        }

    }
} 



