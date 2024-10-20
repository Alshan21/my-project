#include<iostream>
using namespace std;
int main()
{
   int arr1[5]={3,4,6,7,9};
   int arr2[4]={5,6,8,9};
   int n = sizeof(arr1)/sizeof(arr1[0]);
   int m = sizeof(arr2)/sizeof(arr2[0]);
   int arr3[n+m];
   for(int i=0;i<n;i++)
   {
      for(int j=0;j<m;j++)
      {
         for(int k=0;k<n+m;k++)
         {
         if(arr1[i]>arr2[j])
         {
           arr3[k]  = arr1[i];
         }
         else
         {
           arr3[k] = arr2[j];
         }
         
         }
      }
   }
   for(int k=0;k<n+m;k++)
   {
      cout << arr3[k] << endl;
   }
}