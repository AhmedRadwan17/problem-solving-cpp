#include <iostream>
using namespace std;

int main() {
    int day;

    cout << "Enter day: ";
    cin >> day;

    switch (day) {
        case 1:
            cout << "Sat";
            break;
        case 2:
            cout << "Sun";
            break;
        case 3:
            cout << "Mon";
            break;
        case 4:
            cout << "Tue";
            break;
        case 5:
            cout << "Wed";
            break;
        case 6:
            cout << "Thu";
            break;
        default:
            cout << "Fri";  
    }
}
