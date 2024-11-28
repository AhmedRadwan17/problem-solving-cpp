#include <iostream>
#include <cstdlib>
using namespace std;
int RandomNumber(int From,int To)
{
  return rand()%(To-From+1)+From;
}
int main() 
{
   srand(time(0));
   cout<<RandomNumber(1,10)<<endl;
   cout<<RandomNumber(10,100)<<endl;
   cout<<RandomNumber(100,1000)<<endl;

}