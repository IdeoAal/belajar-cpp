#include <iostream>
using namespace std;

int main (){
    int number = 341;
    int digit1, digit2, digit3, total;
    digit1 = number / 100;
    digit2 = (number % 100) / 10;
    digit3 = number % 10;

    total = digit1 + digit2 + digit3;
    cout << "The sum of the digits of the number is: " << total << endl;
}