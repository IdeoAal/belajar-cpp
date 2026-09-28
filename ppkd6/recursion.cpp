#include <iostream>
using namespace std;

// kita buat sebuah fungsi untuk menghitung faktorial dari sebuah angka
int fact(int number) {
    
    // kita buat kondisi untuk parameter rekursi
    if (number > 0) {
        /*
        disini kita membuat faktorial dengan cara memanggil funsi fact() itu sendiri,
         kita disini awalnya mengecek apakah number lebih besar dari 0, jika ya maka kita akan
         mengalikan number dengan pemanggilan fungsi fact() dengan parameter number dikurangi 1.
         dikurangi 1 karena kita ingin menghitung faktorial dengan cara pengkalian dengan 
         dari angka sebelumnya, dan proses ini akan terus berulang, sampai number menjadi 0 dan selesai
        */
        return number * fact(number - 1);
    } else {
        /* disini jika kondisi number tidak lebih besar dari 0,
         maka kita akan mengembalikan nilai 1, karena faktorial dari 0 adalah 1
        */
        return 1;
    }
}

int main() {
    // kita buat variabel result untuk menampung fungsi fact()
    // tipe variabel nya int karena kita ingin menampung fact()yang mengembalikan nilai int
    int result = fact(5) + fact(4);
    // kita buat agar result menampung hasil faktorial 5 ditambah faktorial 4
    // ini dilakukan dengan memberikan parameter 5 dan 4 pada pemanggilan fungsi fact()

    // disini kita tampilkam untuk variabel result yang sudah punya nilai fact 5 + fact 4
    cout << "Result: " << result << endl;
}