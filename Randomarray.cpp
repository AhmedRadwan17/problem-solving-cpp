/* Random elements array Number and Copy array elements*/
#include <iostream>
using namespace std;
int RandomNumber(int From,int To)
{
  int Randum=rand()%(To-From+1)+From; 
  return Randum;
}
void Fillarrays(int ar[100],int &limit)
{
  cout<<"enter limit  of elements?\n";
  cin>>limit;
  for(int i =0;i<=limit;i++)
  {
    ar[i]=RandomNumber(1,100);
  }
}
void PrintArrays(int ar[100],int limit)
{
  for(int i=1;i<=limit;i++)
 {
   cout<<ar[i]<<" ";
 }
}

void copyarray(int arrsource[100],int arrDestion[100],int limit)
{
    for(int i=0;i<=limit;i++)
    {
       arrDestion[i] =arrsource[i];
    }
}
int main() 
{
    srand(time(0));
    int ar[100],limit,arr[100];
    Fillarrays(ar,limit);
    cout<<"array elemts = "<<endl;
    PrintArrays(ar,limit);
    cout<<"\n";
  copyarray(ar,arr,limit);
  cout<<"After:";
  PrintArrays(arr,limit);
}