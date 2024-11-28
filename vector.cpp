/*Vector  By int Numbers arrays*/
#include <vector>
#include <iostream>
using namespace std;
void ReadNumber( vector<int> &vNumbers)
{
   char readmore='Y';
   int Number;
   do{
       cout<<"enter Number?\n";
       cin>>Number;
  cout<<"Do You want  more ? y or N?\n";
  cin>>readmore;
  vNumbers.push_back(Number);
   }while(readmore=='Y'||readmore=='y');
}
void Print (vector<int> &vNumbers)
{
    for(int Number:vNumbers)
    {
        cout<<Number<<" ";
    }
}
int main() 
{
    vector<int>vNumbers;
    ReadNumber(vNumbers);
    Print(vNumbers);
   
}