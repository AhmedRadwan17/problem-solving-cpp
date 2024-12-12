#include <iostream>
#include <string>
#include <vector>
#include <fstream>
using namespace std;
vector<string>UploadDataToVector(string filename)
{
    vector<string>vstring;
    fstream MyFile;   
    MyFile.open(filename,ios::in);//read mode 
    if(MyFile.is_open())
    {
        string line;
        while(getline(MyFile,line))
        {
            vstring.push_back(line);
        }
        MyFile.close();
    }
    return vstring;
}
void AddVectorToFile(string filename, vector<string>vstring)
{
    fstream MyFile;
    MyFile.open(filename,ios::out);
    if(MyFile.is_open())
    {
        for(string &line:vstring)
        {
            if(line!="")
            {
            MyFile<<line<<endl;
            }
        }
    }
}
void DeleteFromFile(string filename, string Record)
{
    vector<string>vstring=UploadDataToVector(filename);
    for(string &line:vstring)
    {
        if(line==Record )
        {
            line="";
        }
    }
    AddVectorToFile(filename,vstring);
}
void PrintResetItems(string filename)
{
    fstream MyFile;
    MyFile.open(filename,ios::in);//read Data and Print It
    if(MyFile.is_open())
    {
        string line;
        while(getline(MyFile,line))
        {
            cout<<line<<endl;
        }
        MyFile.close();
    }
}
int main()
{
string filename = "Clien2.txt";
DeleteFromFile(filename,"Ali");
PrintResetItems(filename);
}