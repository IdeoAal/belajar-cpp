#include <iostream>
using namespace std;

int x = 5;

void printX() {
    int x = 7;
    cout << "x inside function is: " << x << endl;
}

int main() {
    cout << "x outside function is: " << x << endl;
    printX();
    return 0;
}