#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <iomanip>
using namespace std;
struct sClient
{
    string AccountNumber;
    string PinCode;
    string Name;
    string Phone;
    string AccountBalance;
};
vector<string>spiltstring(string s1 , string delim="#//#")
{
    vector<string>vstring;
    string sWord="";
    short pos=0;
    while((pos=s1.find(delim))!=std::string::npos)
    {
        sWord=s1.substr(0,pos);
        if(sWord!="")
        {
            vstring.push_back(sWord);
        }
        s1.erase(0,pos+delim.length());
    }
    if(s1!="")
    {
        vstring.push_back(s1);
    }
return vstring;
}
sClient ConvertFromLineToRecord(string s1)
{
    vector<string>vstring=spiltstring(s1);
    sClient Client;
    Client.AccountNumber=vstring[0];
    Client.PinCode=vstring[1];
    Client.Name=vstring[2];
    Client.Phone=vstring[3];
    Client.AccountBalance=vstring[4];
    return Client;
}
vector<sClient>LoadDataFromFile(string FileName)
{
    vector<sClient>vClients;
    fstream MyFile;
    MyFile.open(FileName,ios::in);//read Mode
    if(MyFile.is_open())
    {
        sClient Client;
        string line;
        while(getline(MyFile,line))
        {
            Client=ConvertFromLineToRecord(line);
            vClients.push_back(Client);
        } 
        MyFile.close();
    }
    return vClients;
}
void PrintClientsData(vector<sClient> vClients) 
{ 
    cout << setw(15) << "Account Number" 
         << setw(15) << "PinCode" 
         << setw(20) << "Name" 
         << setw(20) << "Phone " 
         << setw(15) << "Account Balance" 
         << endl; 

    for (sClient &Client : vClients) 
    { 
        cout << setw(15) << Client.AccountNumber 
             << setw(15) << Client.PinCode 
             << setw(20) << Client.Name 
             << setw(15) << Client.Phone 
             << setw(15) << Client.AccountBalance 
             << endl; 
    } 
} 
int main()
{
    string FileName="Clients2.txt";
vector<sClient> vClients=LoadDataFromFile(FileName);
PrintClientsData(vClients);
}