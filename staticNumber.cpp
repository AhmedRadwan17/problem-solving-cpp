//Static Number 
#include <iostream>
using namespace std;
void Print()
{
   static int Number = 1 ;
    cout<<"Number:"<<Number<<endl;
    Number++;
}

int main() 
{
    Print();
    Print();
    Print();
    
}