#include <iostream>

using namespace std;

int main(){
    bool isMember;
    string namaMember, JudulBuku;

    int memberID, bookID;
    double hargaBuku, diskon, totalHarga, cash, change;


    cout << "Welcome to the Bookstore!" << endl;

    cout << "apakah anda seorang member? (1 untuk ya, 0 untuk tidak): ";
    cin >> isMember;
    
    if (isMember){
        diskon = 0.85;
        cout << "Enter your member ID: ";
        cin >> memberID;
        cout << "selamat anda mendapatkan diskon sebesar 15%" << endl;
        if (memberID == 1){
            namaMember = "Ani";
            cout << "Welcome, " << namaMember << "!" << endl;
        } else if (memberID == 2){
            namaMember = "Budi";
            cout << "Welcome, " << namaMember << "!" << endl;
        } else if (memberID == 3){
            namaMember = "Wati";
            cout << "Welcome, " << namaMember << "!" << endl;
        } 
    } 
    else {
        diskon = 0.95;
        namaMember = "Guest";
        cout << "Welcome, " << namaMember << "!" << endl;
        cout << "selamat anda mendapatkan diskon sebesar 5%" << endl;
    }

    cout << "Enter bookID: ";
    cin >> bookID;

    if (bookID == 1){
        JudulBuku = "Harry Potter";
        hargaBuku = 250000;
    } else if (bookID == 2){
        JudulBuku = "Algorithm";
        hargaBuku = 85000;
    } else if (bookID == 3){
        JudulBuku = "Calculus";
        hargaBuku = 130000;
    } else if (bookID == 4){
        JudulBuku = "Sherlock Holmes";
        hargaBuku = 270000;
    } else if (bookID == 5){
        JudulBuku = "Supernova";
        hargaBuku = 180000;
    } else {
        cout << "book ID tidak valid" << endl;
        return 0;
    }

    totalHarga = hargaBuku * diskon;

    cout << namaMember << " membeli buku " << JudulBuku << " dengan harga Rp." << hargaBuku << "dengan harga setelah diskon menjadi: Rp." << totalHarga << endl;

    cout << "insert cash: ";
    cin >> cash;

    if (cash < totalHarga){
        cout << "insufficient money" << endl;
        return 0;
    } else {
        change = cash - totalHarga;
        cout << "money given: Rp." << cash << endl;
        cout << "change: Rp." << change << endl;
    }

    



}