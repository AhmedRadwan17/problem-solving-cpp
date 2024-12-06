#include <iostream>
using namespace std;
char ReadCharcter(string message)
{
  cout<<message;
  char s1;
  cin>>s1;
  return s1;
}
void Check(char s1)
{
 (isupper(s1))?cout<<(char)tolower(s1):cout<<(char)toupper(s1);
}
int main() 
{
    
    Check(ReadCharcter("enter Charcter? \n"));
}