#include <iostream>
using namespace std;

int main() {
    // membuat nama alias untuk tipe data
    typedef int angka;
    typedef char* teks;

    // membuat variabel dengan tipe data alias
    teks nama_produk = "1Kg Beras";
    angka harga_produk = 99000;


    // menampilkan isi variabel
    cout << "Nama produk: " << nama_produk << endl;
    cout << "Harga: " << harga_produk << endl;

    return 0;
}
