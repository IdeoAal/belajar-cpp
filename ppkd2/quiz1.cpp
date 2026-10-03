#include <iostream>
using namespace std;

int main(){
    double radius, height, volume;
    const double pi = 3.14159;
    radius = 7.2;
    height = 12.0;
    volume = (1.0/3.0) * pi * radius * radius * height;
    cout << "Volume of the cone is: " << volume << endl;
}