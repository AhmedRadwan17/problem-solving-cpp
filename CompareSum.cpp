/* compare Two Matrix That sum of Two Matrix  == or != */
#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;
int RandomNumber(int From , int To)
{
    return rand()%(To-From+1)+From;
}
void Fullarray1(int ar[3][3],int row,int column)
{
  for(int i = 0;i<row;i++)
  {
    for(int j =0;j<column;j++)
    {
      
      ar[i][j]=RandomNumber(1,10);
    }
  }
}
void Fullarray2(int arr[3][3],int row,int column)
{
  for(int i = 0;i<row;i++)
  {
    for(int j =0;j<column;j++)
    {
      
      arr[i][j]=RandomNumber(1,10);
    }
  }
}
void Printarray1(int ar[3][3],int row, int column)
{
  cout<<"array elements:"<<endl;
  for(int i =0;i<row;i++)
  {
    for(int j= 0 ;j<column;j++)
    {
      cout<<setw(9)<<ar[i][j]<<" ";
    }
    cout<<"\n";
  }
  cout<<"\n";
}
void Printarray2(int arr[3][3],int row, int column)
{
  cout<<"array elements:"<<endl;
  for(int i =0;i<row;i++)
  {
    for(int j= 0 ;j<column;j++)
    {
      cout<<setw(9)<<arr[i][j]<<" ";
    }
    cout<<"\n";
  }
  cout<<"\n";
}
int countPlusing(int ar[3][3],int row , int column)
{
  int sum=0;
  for(int i =0;i<row;i++)
  {
    for(int j= 0 ;j<column;j++)
    {
      sum +=ar[i][j];
    }
  }
  return sum;
  
}
int countPlusing2(int arr[3][3],int row , int column)
{
  int sum=0;
  for(int i =0;i<row;i++)
  {
    for(int j= 0 ;j<column;j++)
    {
      sum +=arr[i][j];
    }
  }
  return sum;
  
}
void TotalSum(int ar[3][3],int row , int column)
{
  int Total = countPlusing(ar,3,3);
  cout<<"Total: "<<Total<<endl;
}
void TotalSum2(int arr[3][3],int row , int column)
{
  int Total2 = countPlusing2(arr,3,3);
  cout<<"Total: "<<Total2<<endl;
 
}
int main() 
{
  srand(time(0));
   int ar[3][3],arr[3][3];
   Fullarray1(ar,3,3);
   Fullarray2(arr,3,3);
   Printarray1(ar,3,3);
   TotalSum(ar,3,3);
   Printarray2(arr,3,3);
   TotalSum2(arr,3,3);
   cout<<setw(20);
   (TotalSum==TotalSum2)?cout<<"Are Equal":cout<<"Not Equal";
 
  
}