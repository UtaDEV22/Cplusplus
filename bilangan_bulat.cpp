#include <iostream>
#include <cmath> // Diperlukan untuk menggunakan fungsi fabs()

using namespace std;

int main() {
    double num; // Variabel untuk menyimpan angka yang dimasukkan pengguna

    // Meminta pengguna memasukkan sebuah angka
    cout << "Masukkan sebuah angka: ";
    cin >> num;

    // Menggunakan fungsi fabs() dari library cmath untuk mendapatkan nilai absolut
    double absoluteValue = fabs(num);

    // Memeriksa apakah nilai absolut sama dengan nilai integer dari angka tersebut
    if (absoluteValue == int(absoluteValue)) {
        cout << num << " adalah bilangan bulat." << endl;
    } else {
        cout << num << " bukan bilangan bulat." << endl;
    }

    return 0;
}
