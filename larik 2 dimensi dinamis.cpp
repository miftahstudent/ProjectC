#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int jumlahOrang;

    cout << "Masukkan jumlah orang: ";
    cin >> jumlahOrang;

    // Alokasikan memori untuk larik nama
    char** nama = new char*[jumlahOrang];
    for (int i = 0; i < jumlahOrang; ++i) {
        nama[i] = new char[31]; // Panjang nama maksimum adalah 30 + 1 (untuk karakter null-terminator)
    }

    // Meminta pengguna memasukkan nama satu per satu
    for (int i = 0; i < jumlahOrang; ++i) {
        cout << "Masukkan nama orang ke-" << i + 1 << ": ";
        cin >> nama[i];
    }

    // Menampilkan semua nama yang dimasukkan pengguna
    cout << "Nama-nama yang dimasukkan pengguna:" <<endl;
    for (int i = 0; i < jumlahOrang; ++i) {
        cout << "Orang ke-" << i + 1 << ": " << nama[i] << endl;
    }

    // Membebaskan memori
    for (int i = 0; i < jumlahOrang; ++i) {
        delete[] nama[i];
    }
    delete[] nama;

    return 0;
}

