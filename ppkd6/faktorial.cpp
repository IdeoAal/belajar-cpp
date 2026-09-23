#include <iostream>
using namespace std;

// Kita buat sebiah fungsi untuk menghitung faktorial dari sebuah angka
int fact(int angka){
    // di dalam fungsi kita buat perulangan untuk menghitung faktorial dari angka yang diberikan
    // 
    for (int i = angka - 1; i > 1; i--){
        angka *= i ;
    }
    return angka;
}

int main(){
    int result = fact(5);
    cout << "The result of fact(5) is: " << result << endl;
}