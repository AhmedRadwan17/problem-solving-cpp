#include <iostream>
using namespace std;
int Read_Second(string message)
{
  cout<<message;
  int second;
  cin>>second;
  return second;
}
void Print(int second){
    const int second_perDay=24*60*60;
    const int second_perHour=60*60;
    const int second_perMin=60;
int days = second / second_perDay;
int remain_days = second%second_perDay;
int Hour = remain_days / second_perHour;
int remain_Hour= remain_days % second_perHour;
int Min = remain_Hour / second_perMin;
int remain_min = remain_Hour % second_perMin;
int Final_Second = remain_min ;
     
     cout<<"Days: "<<days<<", Hour: "<<Hour<<", Minute: "<<Min<<", Second: "<<Final_Second;
}
int main() 
{ 
    Print(Read_Second("enter Seconds?"));
}
