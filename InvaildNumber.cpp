#include <iostream>
#include <limits>
using namespace std;

 int ReadIntNumber()
  {
    int Number;
    while (!(cin >> Number)) 
  {
      cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
      cout<<"Invalid Number, Enter again\n";
    }
    return Number;
  }
  int main()
  {
    cout<<"please enter x ?\n";
    int x = ReadIntNumber();
    cout<<"x: "<<x<<endl;
  }