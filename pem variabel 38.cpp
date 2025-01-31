#include <iostream>
using namespace std;

int main() {
    float radius, luas;
    const float pi = 3.14159;

    cout << "Masukkan jari-jari lingkaran: ";
    cin >> radius;

    luas = pi * radius * radius;
    
    cout << "Luas lingkaran adalah: " << luas << endl;

    return 0;
}
