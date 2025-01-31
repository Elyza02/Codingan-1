#include <iostream>
#include <string>

using namespace std;

struct Mahasiswa {
    string nama;
    string nim; 
    string jurusan;
    int umur;
};

void displayData(Mahasiswa mhs) {
    cout << "===== Data Mahasiswa =====" << endl;
    cout << "Nama    : " << mhs.nama << endl;
    cout << "NIM     : " << mhs.nim << endl;
    cout << "Jurusan : " << mhs.jurusan << endl;
    cout << "Umur    : " << mhs.umur << endl;
    cout << "==========================" << endl;
}

int main() {
    Mahasiswa mahasiswa1;

    // Input data mahasiswa
    cout << "Masukkan nama mahasiswa: ";
    getline(cin, mahasiswa1.nama);
    cout << "Masukkan NIM mahasiswa: ";
    getline(cin, mahasiswa1.nim);
    cout << "Masukkan jurusan mahasiswa: ";
    getline(cin, mahasiswa1.jurusan);
    cout << "Masukkan umur mahasiswa: ";
    cin >> mahasiswa1.umur;

    // Tampilkan data mahasiswa
    displayData(mahasiswa1);

    return 0;
}
