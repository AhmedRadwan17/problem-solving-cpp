#include <iostream>
using namespace std;

string ReplaceWordInString(string s1, string StringToReplace, string ToReplace) {
    short pos = s1.find(StringToReplace);
    while (pos != string::npos) {
        s1 = s1.replace(pos, StringToReplace.length(), ToReplace);
        pos = s1.find(StringToReplace);
    }
    return s1;
}

int main() {
    string s1 = "Welcome To Jordon,Jordon is The Best";
    string StringToReplace = "Jordon";
    string ToReplace = "USA";

    cout << ReplaceWordInString(s1, StringToReplace, ToReplace);
}
