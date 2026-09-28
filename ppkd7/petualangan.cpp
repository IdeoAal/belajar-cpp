#include <iostream>
#include <string>
using namespace std;

struct Player{
    string nama;
    int nyawa;
    int poin;
};

void PlayerStatus(Player player){
    cout << "Sisa Nyawa: " << player.nyawa << endl;
    cout << "Poin Terkumpul: " << player.poin << endl;
}

void Welcome(){
    cout << "======\t Selamat datang di game petualangan!\t ======" << endl;
    cout << "Kamu akan memulai petualanganmu dengan 3 nyawa dan 0 poin." << endl;
    cout << "Setiap perjalanan yang berhasil, kamu akan mendapatkan 10 poin." << endl;
    cout << "Jika kamu bertemu monster, kamu akan kehilangan 1 nyawa." << endl;
    cout << "Jika nyawamu habis, permainan berakhir." << endl;
}

int main(){
    Player player1;
    player1.nyawa = 3;
    player1.poin = 0;


    Welcome();
    cout << "Masukkan nama pemain: ";
    cin >> player1.nama;
    
    int langkah = 0;
    srand(time(0));
    while (player1.nyawa > 0){
        cout << "Pilih Jalanmu" << endl;
        cout << "1. Kanan" << endl;
        cout << "2. Kiri" << endl;
        int jalan;
        cout << "Pilihan : ";
        cin >> jalan;
        langkah++;

        int random = rand() % 100 + 1; 

        if (random <= 30) {
            system("cls");
            cout << "Level-" << langkah << endl;
            cout << "Kamu Bertemmu monster! Kamu kehilangan 1 nyawa." << endl;
            player1.nyawa -= 1;
            PlayerStatus(player1);
        } else {
            system("cls");
            cout << "Level-" << langkah << endl;
            cout << "Perjalananmu aman" << endl;
            player1.poin += 10;
            PlayerStatus(player1);
        }
    }
    cout << "Permainan berakhir!" << endl;
    cout << "Nama Pemain: " << player1.nama << endl;
    cout << "Poin Akhir: " << player1.poin << endl;  

    cin.get();
    return 0;
}