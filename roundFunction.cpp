// Create (round Function)
#include <iostream>
using namespace std;
void ReadNumber(float &Number)
{
  cout<<"Please enter Number?\n";
  cin>>Number;
}
void CheckNumber(float Number)
{
  int x= int (float (Number));
  if(Number-x>=0.5)
  {
      cout<<int(float(Number)+1);
  }else if (Number<0)
  {
    cout<<int(float(Number)-1);
  }
  else
  {
      cout<<x;
  }
  
}
int main() 
{
 float Number;
 ReadNumber(Number);
 CheckNumber(Number);
}