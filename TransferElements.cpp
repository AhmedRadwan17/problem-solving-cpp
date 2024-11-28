/*How can You complete Matrix 3×3*/
#include <iostream>
#include <iomanip>
using namespace std;
void Fillarray(int ar[3][3],int row,int column)
{
  for(int i =0;i<row;i++)
  {
    for(int j=0;j<column;j++)
    {
      cout<<"enter Value OF row"<<"("<<i+1<<")"<<"column"<<"("<<j+1<<")"<<"?\n";
      cin>>ar[i][j];
    }
  }
}
void Printarray(int ar[3][3],int row,int column)
{
  for(int i=0;i<row;i++)
  {
    for(int j=0;j<column;j++)
    {
      cout<<setw(9)<<ar[i][j]<<" ";
    }
    cout<<"\n";
  }
}
void Transferelements(int ar[3][3],int row,int column,int arr[3][3])
{
    for(int i = 0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            arr[j][i]=ar[i][j];
        }
    }
}
void PrintTransfer(int arr[3][3],int row,int column)
{
   cout<<"\n";
   cout<<"Tranpoted Mayrix \n";
    for(int i = 0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
       cout<<setw(10)<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
}
int main() 
{
   int ar[3][3],arr[3][3];
   Fillarray(ar,3,3);
   Printarray(ar,3,3);
   Transferelements(ar,3,3,arr);
   PrintTransfer(arr,3,3);
}