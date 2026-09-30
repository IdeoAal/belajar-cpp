#include <iostream>
using namespace std;

int main(){
    // for (int i = 1; i < 11; i++){
    //     for (int j = 1; j < 11; j++){
    //         if (i + j >= 11){
    //             cout << "*";
    //         }
            
    //     }cout << endl;
    // }

    // for (int i = 1; i <= 5; i++){
    //     for (int j = i; j <= 7; j++){
    //         cout << j << "\t";
    //     }cout << endl;
    // }

    for (int i = 0; i< 5; i++){
        for (int j = 0; j < 5; j++){
            if (i + j >= 4){
                cout << "*";
            }else 
            {cout << " ";}
        }cout << endl;
    }
}