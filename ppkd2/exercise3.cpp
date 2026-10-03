#include <iostream>
using namespace std;

int main (){
    int number = 341;
    number = number % 100;
    number = number / 10;
    cout << "The last two digits of the number are: " << number % 100 << endl;
}