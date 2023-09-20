#include <iostream>

using namespace std;

int main() {
    double angka1, angka2;

    cout << "Masukkan angka pertama: ";
    cin >> angka1;

    cout << "Masukkan angka kedua: ";
    cin >> angka2;

    double hasilPenjumlahan = angka1 + angka2;
    double hasilPengurangan = angka1 - angka2;
    double hasilPerkalian = angka1 * angka2;
    
    // Periksa jika angka kedua bukan nol untuk menghindari pembagian oleh nol
    double hasilPembagian = (angka2 != 0) ? (angka1 / angka2) : 0;

    cout << "Hasil penjumlahan: " << hasilPenjumlahan << endl;
    cout << "Hasil pengurangan: " << hasilPengurangan << endl;
    cout << "Hasil perkalian: " << hasilPerkalian << endl;

    if (angka2 != 0) {
        cout << "Hasil pembagian: " << hasilPembagian << endl;
    } else {
        cout << "Pembagian oleh nol tidak diperbolehkan." << endl;
    }

    return 0;
}