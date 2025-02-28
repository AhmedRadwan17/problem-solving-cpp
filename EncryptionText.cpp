//Encryption Text 
#include <iostream>
using namespace std;
string ReadText()
{
           string Text;
           cout<<"enter Text ?\n";
           getline(cin,Text);
           return Text;
}
// global variable 
const short EncryptionKey= 2 ;
string EncryptText(string Text, short EncryptionKey)
{
for (int i = 0; i <= Text.length(); i++)
{
Text[i] = char((int) Text[i] + EncryptionKey);
}
return Text;
}
void Print(string s1)
{
    cout<< s1 << endl;
}
int main() 
{
 Print(EncryptText(ReadText(),EncryptionKey));
}
