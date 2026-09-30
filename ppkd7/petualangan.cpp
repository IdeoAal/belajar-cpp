#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

// disini kami menyimpan untuk status pemain, seperti nama, nyawa, dan poin
struct Player{
    string nama;
    int nyawa;
    int poin;
};

// fungsi void ini digunakan untuk menampilkan status pemain
void PlayerStatus(Player player){
    cout << "Sisa Nyawa: " << player.nyawa << endl;
    cout << "Poin Terkumpul: " << player.poin << endl;
}

// fungsi void untuk dipanggil ketika permainan dimulai, berisi penjelasan singkat tentang permainan
void Welcome(){
    cout << "======\t Selamat datang di game petualangan!\t ======" << endl;
    cout << "Kamu akan memulai petualanganmu dengan 3 nyawa dan 0 poin." << endl;
    cout << "Setiap perjalanan yang berhasil, kamu akan mendapatkan 10 poin." << endl;
    cout << "Jika kamu bertemu monster, kamu akan kehilangan 1 nyawa." << endl;
    cout << "Jika nyawamu habis, permainan berakhir." << endl;
}

int main(){
    // dari struct Player, kita membuat objek player1 untuk menyimpan data pemain
    Player player1;
    player1.nyawa = 3;
    player1.poin = 0;

    // untuk awal game kita panggil fungsi welcome yang berisi penjelasan singkat tentang permainan
    Welcome();

    // disini kita meminta pemain untuk memasukkan nama mereka
    cout << "Masukkan nama pemain: ";
    // nama pemain akan disimpan di player1.nama yang tadi dibuat dari struct player
    cin >> player1.nama;

    srand(time(0));

    char mainLagi = 'y';

    while (mainLagi == 'y') {
        cout << "\nMulai permainan baru!" << endl;
        player1.nyawa = 3;
        player1.poin = 0;

        int langkah = 0;

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
                cout << "Kamu bertemu monster! Kamu kehilangan 1 nyawa." << endl;

                player1.nyawa -= 1;

                PlayerStatus(player1);
            } 
            else {
                system("cls");

                cout << "Level-" << langkah << endl;
                cout << "Perjalananmu aman" << endl;

                player1.poin += 10;

                PlayerStatus(player1);
            }
        }

        cout << "\nPermainan berakhir!" << endl;
        cout << "Nama Pemain: " << player1.nama << endl;
        cout << "Poin Akhir: " << player1.poin << endl;

        cout << "\nMain lagi? (y/n): ";
        cin >> mainLagi;
    }

    cout << "\nTerima kasih sudah bermain!" << endl;

    return 0;
}