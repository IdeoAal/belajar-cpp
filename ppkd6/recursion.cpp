#include <iostream>
using namespace std;

int sum(int number) {
    if (number > 0) {
        cout << "Number: " << number << endl;
        return number + sum(number - 1);
    } else {
        return 0;
    }
}

int main() {
    sum(5);
}