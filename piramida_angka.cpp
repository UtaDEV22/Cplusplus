#include <iostream>
using namespace std;

int main() {
    int tinggi;

    cout << "Masukkan tinggi piramida: ";
    cin >> tinggi;

    for (int i = 1; i <= tinggi; ++i) {
        // Mencetak spasi sebelum angka
        for (int j = 1; j <= tinggi - i; ++j) {
            cout << " ";
        }

        // Mencetak angka ascending
        for (int k = 1; k <= i; ++k) {
            cout << k;
        }

        // Mencetak angka descending
        for (int l = i - 1; l >= 1; --l) {
            cout << l;
        }

        // Pindah ke baris berikutnya
        cout << endl;
    }

    return 0;
}
