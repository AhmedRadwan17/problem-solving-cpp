//3×3 Random matrix 
#include <iostream>
#include <iomanip>
using namespace std;
int RandomNumber(int From,int To)
{
  int Randum=rand()%(To-From+1)+From;
  return Randum;
}
void Fillarrays(int ar[3][3])
{
  for(int i =0;i<3;i++)
  {
    for(int n=0;n<3;n++)
    {
        ar[i][n]=RandomNumber(1,100);
    }
  }
}
void PrintArrays(int ar[3][3])
{
  for(int i =0;i<3;i++)
  {
    for(int n=0;n<3;n++)
    {
        cout<<setw(3)<<ar[i][n]<<" ";
    }
    cout<<"\n";
  }
}
int main() 
{
    srand(time(0));
    int ar[3][3];
    Fillarrays(ar);
    cout<<"array elemts = "<<endl;
    PrintArrays(ar);
}