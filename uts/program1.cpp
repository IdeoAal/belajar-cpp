#include <iostream>
using namespace std;

int main() {
//     int n, hasil = 0;
//     cout << "Enter a positive integer n: ";
//     cin >> n;
// while (n>0){
//     hasil +=n;
//     n--;
// }
// cout << "The sum of the numbers from 1 to n is: " << hasil << endl;

    int a, b, c;
    a=3;
    b=30;
    c=2;

    for (int i = a; i <= b; i++) {
        if (i % c == 0) {
            cout << i << " ";
        }
    }

}