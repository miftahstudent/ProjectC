#include <iostream>

int main() {
    // Matriks 3x3
    int matriks[3][3];

    // Meminta pengguna memasukkan nilai untuk matriks
    std::cout << "Masukkan nilai untuk matriks 3x3:\n";
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            std::cout << "Baris " << i + 1 << ", Kolom " << j + 1 << ": ";
            std::cin >> matriks[i][j];
        }
    }

    // Menampilkan matriks
    std::cout << "\nMatriks 3x3 yang dimasukkan:\n";
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            std::cout << matriks[i][j] << " ";
        }
        std::cout << "\n";
    }

    return 0;
}
