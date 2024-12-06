/*Min/Max Numbers in Matrix */
#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;
int RandomNumber(int From,int To)
{
  int Randum=rand()%(To-From+1)+From;
  return Randum;
}
void Fillarrays(int ar[3][3],int row,int column)
{
 for(int i =0;i<row;i++)
  {
    for(int n=0;n<column;n++)
    {
        ar[i][n]=RandomNumber(1,10);
    }
  }
}
void PrintArrays(int ar[3][3],int row , int column)
{
    
  for(int i =0;i<row;i++)
  {
    for(int n=0;n<column;n++)
    {
       
        cout<<setw(9)<<ar[i][n]<<" ";
    }
    cout<<"\n";
   }
   cout<<"\n\n";
}


int minNumber(int ar[3][3],int row , int column )
{
    int Min;
   Min= ar[0][0];
for(int i =0;i<row;i++)
  {
    for(int n=0;n<column;n++)
    {
       if(ar[i][n]<Min)
       {
           Min=ar[i][n];
       }
    }
   }
   return Min;
}
int maxNumber(int ar[3][3],int row , int column )
{
    int Max;
   Max= ar[0][0];
for(int i =0;i<row;i++)
  {
    for(int n=0;n<column;n++)
    {
       if(ar[i][n]
       >Max)
       {
           Max=ar[i][n];
       }
    }
   }
   return Max;
}

int main()
{
    srand(time(0));
  int ar[3][3];
  Fillarrays(ar,3,3);
  PrintArrays(ar,3,3);
  cout<<"Min Number: "<<minNumber(ar,3,3)<<"\n";
cout<<"Max Number : "<<maxNumber(ar,3,3)<<"\n";
    
}