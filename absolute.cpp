// absolute value
#include <iostream>
#include <cmath>
using namespace std;
short ReadNumber()
{
     int Number;
     cout<<"enter num: ";
     cin>>Number;
     return Number;
}
short CheckNum(int Number)
{
  if(Number<0)
  {
    return Number *-1;
  }
  else
  {
    return Number;
  }
}
void Print(int Number)
{
    cout << "Absolute Value: " << Number <<endl;
}
int main() 
{
short Num = CheckNum(ReadNumber());
 Print(CheckNum(Num));
 cout<<"Absolute Value: "<< Num <<endl;
}
