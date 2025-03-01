#include <iostream>
using namespace std;

int ReadNumber(const string& message) {
    int number = 0;
    do {
        cout << message << endl;
        cin >> number;
    } while (number <= 0);
    return number;
}

int ReverseNumber(int number) {
    int reversedNumber = 0;
    while (number > 0) {
        int remainder = number % 10;
        reversedNumber = reversedNumber * 10 + remainder;
        number /= 10;
    }
    return reversedNumber;
}

int main() {
    int number = ReadNumber("Enter a positive number: ");
    int reversed = ReverseNumber(number);

    cout << "After reverse: " << reversed << endl;
    return 0;
}
