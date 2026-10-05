#include <iostream>
using namespace std;

int main(){
    string members[5] = {"Ani", "Budi", "Wati", "Iwan", "Santi"};
    string title[5] = {"Harry Potter", "Algorithm", "Calculus", "Sherlock Holmes", "Supernova"};
    int price[5] = {250000, 85000, 130000, 270000, 180000};
    bool available[5] = {true, true, true, false, true};
    string name;
    bool isMember;
    int memberId, entranceFee;

    cout << "Welcome to the book store!\n";
    cout << "Are you a member? (0 or 1): ";
    cin >> isMember;

    if(isMember){
        cout << "Enter memberId: ";
        cin >> memberId;
        name = members[memberId];
        entranceFee = 0;
    } else{
        entranceFee = 1000;
        name = "Guest";
    }

    cout << "Welcome " << name << ", your entrance fee is " << entranceFee << " rupiah.\n\n";

    cout << "Below are available books:\n";
    for(int i=0; i<5; i++){
        if(!available[i]) continue;

        cout << "Book ID " << i << ", title " << title[i] << ", price " << price[i] << endl;
    }

    int bookId;
    cout << "\nSelect book ID: ";
    cin >> bookId;

    int total = entranceFee + price[bookId];
    cout << "Your selected book is " << title[bookId] << ", with a total price of " << total;
}