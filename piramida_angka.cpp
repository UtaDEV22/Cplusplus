#include <iostream>

int main() {
    int tinggi;

    std::cout << "Masukkan tinggi piramida: ";
    std::cin >> tinggi;

    for (int i = 1; i <= tinggi; ++i) {
        // Mencetak spasi sebelum angka
        for (int j = 1; j <= tinggi - i; ++j) {
            std::cout << " ";
        }

        // Mencetak angka ascending
        for (int k = 1; k <= i; ++k) {
            std::cout << k;
        }

        // Mencetak angka descending
        for (int l = i - 1; l >= 1; --l) {
            std::cout << l;
        }

        // Pindah ke baris berikutnya
        std::cout << std::endl;
    }

    return 0;
}
