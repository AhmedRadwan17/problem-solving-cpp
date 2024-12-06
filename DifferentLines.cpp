#include <iostream>
#include <string>
using namespace std;
string ReadString(string message)
{
  cout<<message;
  string s1;
  getline(cin,s1);
  return s1;
}
void PrinteachWordinstring(string s1)
{
  short counter=0;
  string delim=" "; 
  short pos=0;
  string sWord;
  while((pos=s1.find(delim))!=std::string::npos)
  {
    sWord=s1.substr(0,pos);
    if(sWord!="")
    {
      cout<<sWord<<endl;
      counter++;
    }
   s1.erase(0,pos+delim.length());
  }
  if(s1!="")
  {
    cout<<s1<<endl;
    counter++;
  }
  cout<<"Words: "<<counter;
}
int main() 
{
    PrinteachWordinstring(ReadString("enter?\n"));
}