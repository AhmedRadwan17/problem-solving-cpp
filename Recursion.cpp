#include <iostream>
using namespace std;
void PrintNumber(int a  , int b )
{
  if(a<=b)
  {
    cout<<a<<" ";
    PrintNumber(a+1,b);
  }
}
int main() 
{
    PrintNumber(1,4);
    // 1  2  3  4 
}
