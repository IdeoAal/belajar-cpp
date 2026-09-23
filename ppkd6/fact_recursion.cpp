#include <iostream>
using namespace std;


int fact(int angka){
    if (angka <= 1) {
        return 1;
    } else {
        return angka * fact(angka - 1);
    }
}

int main(){
    int result = fact(5);
    cout << "The result of fact(5) is: " << result << endl;
}