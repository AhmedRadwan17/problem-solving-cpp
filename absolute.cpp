//abs 
#include <iostream>
#include <cmath>
using namespace std;
void  ReadNumber(int & Number )
{
  cout<<"enter Number?\n";
  cin>>Number;
}
void CheckNumber(int &Number)
{
  if(Number<0)
  {
    cout<<"My abs:"<<Number*-1<<endl;
  }
  else
  {
    cout<<"My abs:"<<Number<<endl;
  }
}
int main() 
{
  int Number;
  ReadNumber(Number);
  CheckNumber(Number);
  cout<<"C++ abs : "<<abs(Number);
}