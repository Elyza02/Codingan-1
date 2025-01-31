#include <iostream>
using namespace std;

int main() {
    float originalPrice = 200.0; // Harga asli
    float discount = 0.2;         // Diskon 20%
    float finalPrice = originalPrice * (1 - discount); // Harga setelah diskon
    cout << "Harga Setelah Diskon: $" << finalPrice << endl;
    return 0;
}
