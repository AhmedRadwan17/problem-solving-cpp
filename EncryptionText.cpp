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
string EncryptText(string Text, short EncryptionKey)
{
for (int i = 0; i <= Text.length(); i++)
{
Text[i] = char((int) Text[i] + EncryptionKey);
}
return Text;

}
int main() 
{
 const short EncryptionKey= 2 ;
 string userinput=ReadText();
 string encryptText=EncryptText(userinput,EncryptionKey);
cout<<encryptText;
  
}