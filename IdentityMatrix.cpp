#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;
int RandomNumber(int From , int To)
{
    return rand()%(To-From+1)+From;
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
bool Check(int ar[3][3],int row,int column)
{
 for(int i = 0;i<row;i++)
  {
    for(int j =0;j<column;j++)
    {
      if(i==j&&ar[i][j]!=1)
      {
          return false;
      }
      else if(i!=j&&ar[i][j]==1)
      {
          return false;
      }
    }
  }
  return true;
}
int main() 
{
  srand(time(0));
   int ar[3][3]={{1,0,0},{0,1,0},{0,0,1}};
   Printarray1(ar,3,3);
  Check(ar,3,3);
  if(Check(ar,3,3))
  {
      cout<<"Vaild";
  }
  else{
      cout<<"Not vaild";
  }
}