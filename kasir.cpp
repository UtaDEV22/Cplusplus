#include <iostream>
#include <vector>
#include <string>
#include <iomanip>

using namespace std;

// Struktur untuk menyimpan informasi item
struct Item {
    string name;
    double price;
    int quantity;
};

int main() {
    vector<Item> cart; // Untuk menyimpan item dalam keranjang belanja
    char continueShopping = 'y';

    while (continueShopping == 'y' || continueShopping == 'Y') {
        Item newItem;

        cout << "Masukkan nama item: ";
        cin >> newItem.name;

        cout << "Masukkan harga item: ";
        cin >> newItem.price;

        cout << "Masukkan jumlah item: ";
        cin >> newItem.quantity;

        cart.push_back(newItem);

        cout << "Lanjutkan belanja? (y/n): ";
        cin >> continueShopping;
    }

    // Menampilkan struk belanja
    cout << "\n==== Struk Belanja ====\n";
    double total = 0.0;

    for (const Item& item : cart) {
        double subtotal = item.price * item.quantity;
        total += subtotal;

        cout << item.name << " x " << item.quantity << " @ " << item.price << " = " << fixed << setprecision(2) << subtotal << endl;
    }

    cout << "\nTotal: " << fixed << setprecision(2) << total << endl;

    return 0;
}
