/*Print From 2 To selected Number and Check Number Prime*/
#include <iostream>
using namespace std;
enum enGameType{Pri=1,NoPri=2};
void ReadNumber(int &Number)
{
 do{
   cout<<"enter Number?\n";
   cin>>Number;
 }while(Number<0);
}
enGameType CheckInfo(int Number)
{
 if (Number<=1) {return enGameType::NoPri;}
 for(int i=2;i<Number;i++)
 {
   if(Number%i==0){return enGameType::NoPri;}
   else { return enGameType::Pri;};
 }
 return enGameType::Pri;
}
void PrintPriNumbers(enGameType GameType)
{
  if(GameType==enGameType::Pri){cout<<"Number is Pri \n";}else {cout<<"Number isn't Pri \n";}
}
void PriUpPriNumbers(int limit)
{
 cout<<"Pri Numbers are :\t";
  for(int i=2;i<=limit;i++)
  {
   if (CheckInfo(i)==enGameType::Pri)
    {cout<<i<<" ";}
  }
  cout<<"\n";
}
 int main() 
{
    int Number;
    ReadNumber(Number);
    PrintPriNumbers(CheckInfo(Number));
   PriUpPriNumbers(Number);
}