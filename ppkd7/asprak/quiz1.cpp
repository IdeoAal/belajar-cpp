#include <iostream>
using namespace std;

int fibo(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    
    return fibo(n - 1) + fibo(n - 2);
}

int main() {
    int num;
    cout << "Input number: ";
    cin >> num;

    cout << "Fibonacci squence: ";
    
    for (int i = 0; i < num; i++) {
        cout << fibo(i);

        if(i != num-1) cout << ", ";
    }
    cout << endl;
    
    return 0;
}