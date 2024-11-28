/*How to calculate The Sum of second row in matrix*/
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
int CalchSumofRows(int ar[3][3])
{
   int sum=0;
    int row = 1;
    for(int i =0;i<3;i++)
    {
        sum+=ar[row][i];
    }
    return sum;
}
int main(){
    srand(time(0));
    int ar[3][3];
    Fillarrays(ar);
    cout<<"array elemts = "<<endl;
    PrintArrays(ar);
    cout<<"sum = "<<CalchSumofRows(ar);
}