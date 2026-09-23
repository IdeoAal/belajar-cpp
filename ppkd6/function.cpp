#include <iostream>
using namespace std;

// void sayHello(string nama = "Fulan", int number= 8){
//     cout << "Hello, " << nama << "! You are " << number << " years old." << endl;
// }

// int recArea(int length, int width) {
//     return length * width;
// }

double circleArea(double radius) {
    return 3.14 * radius * radius;
}

double cylinderVolume(double radius, double height) {
    return circleArea(radius) * height;
}

double coneVolume(double radius, double height) {
    return (1.0 /3.0) * circleArea(radius) * height;
}

int main() {
    // sayHello("Alice", 25);
    // sayHello();
    // sayHello("Charlie", 35);


    // int rectangleArea = recArea(5, 10);
    // cout << rectangleArea << endl;
    // return 0;
    double r = 10.0;
    double h = 30.0;

    cout << "Area of circle: " << circleArea(r) << endl;
    cout << "Volume of cylinder: " << cylinderVolume(r, h) << endl;
    cout << "Volume of cone: " << coneVolume(r, h) << endl;
}