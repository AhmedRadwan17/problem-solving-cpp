#include <iostream>
using namespace std;
string ReadString(string message)
{
  cout<<message;
string s1;
getline(cin,s1);
 return s1;
}
void PrintHowManyletters(string s1)
{
    int counter=0;
  for(int i =0;i<s1.length();i++)
  {
   counter++;
  }
  cout<<"count letters: "<<counter<<endl;
}
void PrintHowmanyCapitialLetters(string s1)
{
    int counter=0;
    for(int i =0;i<s1.length();i++)
    {
        if(isupper(s1[i]))
        {
            counter++;
        }
    }
    cout<<"Capital letters count: "<<counter<<endl;
}
void PrintHowmanySmallLetters(string s1)
{
  int counter=0;
  for(int i =0;i<s1.length();i++)
  {
    if(islower(s1[i]))
    {
      counter++;
    }
  }
  cout<<"Small letters count : "<<counter<<endl;
}
int main() 
{
  string userInput=ReadString("enter Text?\n");
  PrintHowManyletters(userInput);
  PrintHowmanySmallLetters(userInput);
  PrintHowmanyCapitialLetters(userInput);
}