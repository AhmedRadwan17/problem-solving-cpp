#include <iostream>
using namespace std;

void FullArray(int ar[100],int &limit)
{
 cout<<"enter limit?\n";
 cin>>limit;
  for(int i=0;i<limit;i++)
 {
  cout<<"enter value of "<<i+1<<"?"<<endl;
  cin>>ar[i];
 }
}
void Printarray(int ar[100],int limit)
 {
   for(int i=0;i<limit;i++)
   {
     cout<<ar[i]<<" ";
   }
     cout<<"\n";
 }
bool IspalindromeNumber(int ar[100],int limit)
{
    for(int i=0;i<limit;i++)
    {
        if(ar[i]!=ar[limit-i-1])
        return false;
        
    }
 return true ;
}
int main() 
{
  srand(time(0));
    int ar[100],ar2[100],limit;
    FullArray(ar,limit);
    cout<<"Array elements : "<<"";
    Printarray(ar,limit);
    if(IspalindromeNumber(ar,limit))
    {
        cout<<"yes";
    }
    else 
    {
       cout<< "No";
    }
    
}