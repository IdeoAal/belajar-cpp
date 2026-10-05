#include <iostream>
using namespace std;

int main() {
    int n, hasil = 0;
    cout << "Enter a positive integer n: ";
    cin >> n;
while (n>0){
    hasil +=n;
    n--;
}
cout << "The sum of the numbers from 1 to n is: " << hasil << endl;
}