/*Random Capital letter , Small letter , specialcharcter and Degit*/
#include <iostream>
using namespace std;
int RandomNumber(int From,int To)
{
  int Randum=rand()%(To-From+1)+From;
  return Randum;
}
enum enNumbertype{smallletter=1,capitalletter=2,specialcharcter=3,Degit=4};
char GetLetter(enNumbertype Numbertype)
{
  if(Numbertype==enNumbertype::smallletter)
  {
    return char(RandomNumber(97,122));
  }
  else if (Numbertype==enNumbertype::capitalletter)
  {
    return char(RandomNumber(65,90));
  }
  else if (Numbertype==enNumbertype::specialcharcter)
  {
    return char(RandomNumber(33,47));
  }
  else
  {
    return char(RandomNumber(48,57));
  }
}
int main() 
{
    srand(time(0));
cout<<GetLetter(enNumbertype::smallletter);
cout<<GetLetter(enNumbertype::capitalletter);
cout<<GetLetter(enNumbertype::specialcharcter);
cout<<GetLetter(enNumbertype::Degit);
}