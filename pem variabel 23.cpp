#include <iostream>
using namespace std;

int main() {

    auto name = "Petani Kode";
    auto age = 22;
    auto tinggi_badan = 171.5;
    auto is_menikah = false;

    cout << "Nama: " << name << endl;
    cout << "Tipe: " << typeid(name).name() << endl;

    cout << "Umur: " << age << endl;
    cout << "Tipe: " << typeid(age).name() << endl;

    cout << "Tinggi badan: " << tinggi_badan << endl;
    cout << "Tipe: " << typeid(tinggi_badan).name() << endl;

    cout << "Menikah: " << is_menikah << endl;
    cout << "Tipe: " << typeid(is_menikah).name() << endl;

    return 0;
}
