#include <iostream>
using namespace std;

int main(){
    bool select = true;
    bool taken[5][6] = {};

    while(select){
        int row, col;
        
        cout << "Welcome to the movie booking system!\n";
        cout << "Seatmap:\n";

        for(int i=-1; i<5; i++){
            for(int j=-1; j<6; j++){
                if(i == -1 && j == -1){
                    cout << "  "; 
                    continue;
                } 
                else if(i == -1) cout << j;
                else if(j == -1) cout << i;
                else{
                    if(!taken[i][j]) cout << "_";
                    else cout << "v";
                }
                cout << " "; 
            }
            cout << endl;
        }

        cout << "Select row number: ";
        cin >> row;

        cout << "Select column number: ";
        cin >> col;

        if(!taken[row][col]){
            cout << "\nYou have purchase seat [" << row << ", " << col << "].\n";
            taken[row][col] = true;
        } else 
            cout << "\nSorry, the seat is occupied.\n";
        
        cout << "Select seat again (1/0)? ";
        cin >> select;
        cout << "\n";
    }

    cout << "Cashier closed, movie will start soon!";
}