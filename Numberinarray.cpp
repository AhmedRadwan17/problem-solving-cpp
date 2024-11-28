/*search For Number in array*/
#include <iostream>
using namespace std;
int RandomNumber(int From,int To)
{
  int Randum=rand()%(To-From+1)+From;
  return Randum;
}
void FullArray(int ar[100],int &limit)
{
 cout<<"enter limit?\n";
 cin>>limit;
  for(int i=0;i<limit;i++)
 {
ar[i]=RandomNumber(1,100);
 }
}
void Printarray(int ar[100],int limit)
 {
   for(int i=0;i<limit;i++)
   {
     cout<<ar[i]<<" "<<"\t";
   }
   cout<<"\n";
 }
int Copyarray(int ar[100], int ar2[100],int limit)
{
  
  for(int i=0;i<limit;i++)
 {
   ar2[i]=ar[limit-i-1];
 }
  
  return ar[100];
}
void Check(int ar[100],int &searchNumber,int limit)
{
 int counter=0;
   cout<<"enter search Number?\n";
   cin>>searchNumber;
   for(int i=0;i<=limit;i++)
   {
       if(ar[i]==searchNumber)
       {
           counter++;
       }
   }
   cout<<counter;
}
int main() 
{
  srand(time(0));
    int ar[100],ar2[100],limit,searchNumber;
    FullArray(ar,limit);
    Printarray(ar,limit);
Check(ar,searchNumber,limit);
    
}