#include <iostream>
using namespace std;
void Myfunction4()
{
    cout<<"Iam function 4 ,How are You?"<<endl;
}
void Myfunction3()
{
Myfunction4();
}
void Myfunction2()
{
Myfunction3();
}
int main() {
Myfunction2();

    return 0;
}