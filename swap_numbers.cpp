#include <iostream>  
using namespace std;  

void Swap(int &a, int &b) {  
    int temp = a;  
    a = b;  
    b = temp;  
}  

int main() {  
    int x = 5, y = 10;  

    cout << "Before Swap: x = " << x << ", y = " << y << endl;  

    Swap(x, y);  

    cout << "After Swap: x = " << x << ", y = " << y << endl;  

    return 0;  
}
